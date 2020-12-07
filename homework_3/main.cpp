#include <iostream>
#include <string>
#include <vector>
#include <html_writer.hpp>
#include <image_browser.hpp>



int main() {

	/**
	* Test html_writer
	*/
	// std::string css_file = "style.css";
	// std::string title = "Image Browser";
	// std::string img_path;

	// html_writer::OpenDocument();
	// html_writer::AddTitle(title);
	// html_writer::AddCSSStyle(css_file);
	// html_writer::OpenBody();

	// img_path = "000000.png";
	// html_writer::OpenRow();
	// html_writer::AddImage(img_path, 0.98, true);
	// html_writer::CloseRow();

	// html_writer::CloseBody();
	// html_writer::CloseDocument();

	/**
	* Test image_browser
	*/

	// image_browser::ImageRow row = {
	// 	// std::make_tuple("000000.png", 0.98),
	// 	// std::make_tuple("000001.png", 0.96),
	// 	// std::make_tuple("000002.png", 0.88)
	// 	image_browser::ScoredImage{"000000.png", 0.98},
	// 	image_browser::ScoredImage{"000001.png", 0.96},
	// 	image_browser::ScoredImage{"000001.png", 0.96}
	// };
	// bool first_row = true;
	// image_browser::AddFullRow(row, first_row);




	image_browser::ImageRow row1 = {
		image_browser::ScoredImage{"000000.png", 0.98},
		image_browser::ScoredImage{"000100.png", 0.96},
		image_browser::ScoredImage{"000200.png", 0.96}
	};

	image_browser::ImageRow row2 = {
		image_browser::ScoredImage{"000300.png", 0.87},
		image_browser::ScoredImage{"000400.png", 0.80},
		image_browser::ScoredImage{"000500.png", 0.79}
	};

	image_browser::ImageRow row3 = {
		image_browser::ScoredImage{"000600.png", 0.76},
		image_browser::ScoredImage{"000700.png", 0.75},
		image_browser::ScoredImage{"000800.png", 0.20}
	};

	std::vector<image_browser::ImageRow> rows{row1, row2, row3};
 
 
	std::string stylesheet = "style.css";
	std::string title = "Image Browser";
	image_browser::CreateImageBrowser(title, stylesheet, rows);




	return 0;
}