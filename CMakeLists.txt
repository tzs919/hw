project(Hello)

add_library(t1 t1.c)

add_executable(hw t2.c)

target_link_libraries(hw t1)
#cmake