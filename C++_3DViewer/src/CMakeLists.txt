cmake_minimum_required(VERSION 3.5)

project(3DViewer_v2
    VERSION 2.0.0
    DESCRIPTION "3DViewerv2.0 based on OOP concepts"
    LANGUAGES CXX C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

# Before running CMake, set the environment variable QT_LIB_DIR
# with path to the Qt directory with libraries
set(CMAKE_PREFIX_PATH $ENV{QT_LIB_DIR})

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets OpenGLWidgets OpenGL Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets OpenGLWidgets OpenGL Core)

file(GLOB_RECURSE MODEL_SOURCES "Model/*.cc" "Model/*.h")
file(GLOB_RECURSE VIEW_SOURCES "View/*.cc" "View/*.h" "View/*.ui")
file(GLOB_RECURSE CONTROLLER_SOURCES "Controller/*.cc" "Controller/*.h")
file(GLOB_RECURSE QT_GIF_SOURCES "third_party/QtGifImage/*.cpp" "third_party/QtGifImage/*.h" "third_party/QtGifImage/*.c")

set(PROJECT_SOURCES
    ${MODEL_SOURCES}
    ${VIEW_SOURCES}
    ${CONTROLLER_SOURCES}
    ${QT_GIF_SOURCES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(${PROJECT_NAME}
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET 3DViewer_v2 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(${PROJECT_NAME} SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(3DViewer_v2
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(3DViewer_v2 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(3DViewer_v2 PRIVATE Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(3DViewer_v2 PRIVATE Qt${QT_VERSION_MAJOR}::OpenGLWidgets)
target_link_libraries(3DViewer_v2 PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(3DViewer_v2 PRIVATE Qt${QT_VERSION_MAJOR}::OpenGL)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.3DViewer_v2)
endif()
set_target_properties(${PROJECT_NAME} PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(3DViewer_v2)
endif()
