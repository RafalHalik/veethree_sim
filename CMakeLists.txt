
if (CONFIG_VE_SIM)
zephyr_include_directories(include)
zephyr_library_sources(simulator.c)
endif()