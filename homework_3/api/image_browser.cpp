
#include "image_browser.hpp"
#include "html_writer.hpp"

namespace image_browser {

	void AddFullRow(const ImageRow& row, bool first_row) {
		float score;
		std::string image_path;

		if (first_row) {
			//fmt::print("Hello world\n");
			html_writer::OpenRow();
			for(unsigned int i = 0; i < row.size(); i++) {  
				const ScoredImage& scroedImage = row[i];
				image_path = std::get<0>(scroedImage);
				score = std::get<1>(scroedImage);
				if (i == 0) {
					html_writer::AddImage(image_path, score, true);
				}
				html_writer::AddImage(image_path, score, false);
    		}
			html_writer::CloseRow();

		} else {

			html_writer::OpenRow();
			for(const auto& scroedImage : row) {   // Range-for!
				image_path = std::get<0>(scroedImage);
				score = std::get<1>(scroedImage);
				html_writer::AddImage(image_path, score, false);
    		}
			html_writer::CloseRow();
		}
	}

	void CreateImageBrowser(const std::string& title, const std::string& stylesheet,
                        const std::vector<ImageRow>& rows) {
		html_writer::OpenDocument();
		html_writer::AddTitle(title);
		html_writer::AddCSSStyle(stylesheet);
		html_writer::OpenBody();

		for (unsigned int i = 0; i < rows.size(); i++) {
			const ImageRow& row = rows[i];
			if (i == 0) {
				AddFullRow(row, true);
			} else {
				AddFullRow(row, false);
			}
		}

		html_writer::CloseBody();
		html_writer::CloseDocument();
	}


} // namespace image_browser