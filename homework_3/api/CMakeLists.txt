
add_library(html_writer html_writer.cpp)

target_include_directories(html_writer 
							PUBLIC . )

find_package(fmt)
target_link_libraries(html_writer
						PUBLIC fmt::fmt)

add_library(image_browser image_browser.cpp)

target_include_directories(image_browser
							PUBLIC .)

target_link_libraries(image_browser 
						PUBLIC html_writer)