/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ********************** Configuration BOARD_BootClockRUN ***********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockRUN configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKRUN_CORE_CLOCK 48000000U /*!< Core clock frequency: 48000000Hz */

/*! @brief MCG lite set for BOARD_BootClockRUN configuration.
 */
extern const mcglite_config_t mcgliteConfig_BOARD_BootClockRUN;
/*! @brief SIM module set for BOARD_BootClockRUN configuration.
 */
extern const sim_clock_config_t simConfig_BOARD_BootClockRUN;
/*! @brief OSC set for BOARD_BootClockRUN configuration.
 */
extern const osc_config_t oscConfig_BOARD_BootClockRUN;

/*******************************************************************************
 * API for BOARD_BootClockRUN configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockRUN(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ********************* Configuration BOARD_BootClockVLPR ***********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockVLPR configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKVLPR_CORE_CLOCK 2000000U /*!< Core clock frequency: 2000000Hz */

/*! @brief MCG lite set for BOARD_BootClockVLPR configuration.
 */
extern const mcglite_config_t mcgliteConfig_BOARD_BootClockVLPR;
/*! @brief SIM module set for BOARD_BootClockVLPR configuration.
 */
extern const sim_clock_config_t simConfig_BOARD_BootClockVLPR;
/*! @brief OSC set for BOARD_BootClockVLPR configuration.
 */
extern const osc_config_t oscConfig_BOARD_BootClockVLPR;

/*******************************************************************************
 * API for BOARD_BootClockVLPR configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockVLPR(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */
