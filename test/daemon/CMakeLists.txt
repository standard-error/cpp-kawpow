add_executable(kawpowd kawpowd.cpp)

target_link_libraries(kawpowd PRIVATE kawpow -levent)
target_include_directories(kawpowd PRIVATE ${ETHASH_PRIVATE_INCLUDE_DIR})
set_target_properties(kawpowd PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
