configure_file(config.h.in "${CMAKE_CURRENT_BINARY_DIR}/config.h" @ONLY)

add_library(Foo SHARED hello.cpp hello.h config.h.in)

set_target_properties(Foo PROPERTIES
        PUBLIC_HEADER "hello.h;${CMAKE_CURRENT_BINARY_DIR}/config.h")

install(TARGETS Foo
        # IMPORTANT: Add the Foo library to the "export-set"
        EXPORT FooTargets
        RUNTIME DESTINATION "${INSTALL_BIN_DIR}" COMPONENT bin
        LIBRARY DESTINATION "${INSTALL_LIB_DIR}" COMPONENT shlib
        PUBLIC_HEADER DESTINATION "${INSTALL_INCLUDE_DIR}/Foo"
        COMPONENT dev)