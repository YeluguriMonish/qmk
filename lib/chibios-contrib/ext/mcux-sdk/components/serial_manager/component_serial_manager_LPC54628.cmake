if(NOT COMPONENT_SERIAL_MANAGER_LPC54628_INCLUDED)

    set(COMPONENT_SERIAL_MANAGER_LPC54628_INCLUDED true CACHE BOOL "component_serial_manager component is included.")

    target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/fsl_component_serial_manager.c
    )

    target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/.
    )

    #OR Logic component
    if(CONFIG_USE_component_serial_manager_uart_LPC54628) 
        include(component_serial_manager_uart_LPC54628)
    endif()

    include(driver_common)
    include(component_lists)

endif()