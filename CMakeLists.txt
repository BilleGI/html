cmake_minimum_required(VERSION 3.22)

project("HTML" VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

find_package(Qt6 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)

add_subdirectory(src)

target_link_libraries(html_editor PRIVATE Qt6::Core Qt6::Widgets Qt6::WebEngineCore Qt6::WebEngineWidgets)

set_target_properties(html_editor PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

install(TARGETS html_editor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
