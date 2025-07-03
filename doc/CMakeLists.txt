find_package(Doxygen REQUIRED )

if (NOT DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen is needed to build the documentation. Please install it on your machine")
else()
    message(STATUS "Doxygen found !")

#    # One way to generate documentation !
#    add_custom_target(documentation 
#                COMMAND 
#                    ${DOXYGEN_PATH} ${CMAKE_CURRENT_LIST_DIR}/Doxyfile 
#                WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
#                    BYPRODUCTS ${CMAKE_BINARY_DIR}/html/index.html
#    )
    
#    add_custom_command(TARGET documentation 
#                    POST_BUILD 
#                        COMMAND echo "Documentation successfully generated. You can preview at:${CMAKE_BINARY_IDR}/html/index.html"
#    )

    set(DOXYGEN_GENERATE_HTML YES)
    set(DOXYGEN_HTML_OUTPUT ${CMAKE_BINARY_DIR}/html)
    set(DOXYGEN_GENERATE_TREEVIEW YES)

    doxygen_add_docs(documentation 
            ${PROJECT_SOURCE_DIR}/calculator/src
            ${PROJECT_SOURCE_DIR}/calculator/include
            ${PROJECT_SOURCE_DIR}/test/src
            ${PROJECT_SOURCE_DIR}/test/include 
            COMMENT 
                "Generating the documentation")
endif()