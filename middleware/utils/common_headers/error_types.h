/*
 * Copyright (c) CompanyNameMagicTag 2018-2020. All rights reserved.
 * Description:  Error handling for Functions
 * Author:
 * Create:
 */

#ifndef ERROR_TYPES_H
#define ERROR_TYPES_H

/**
 * @defgroup connectivity_libs_common_err ERROR Types
 * @ingroup  connectivity_libs_common
 * @{
 */
typedef enum {
    RET_TYPE_OK = 0,
    RET_TYPE_ERROR,
    RET_TYPE_ERROR_RPC,
    RET_TYPE_ERROR_IN_PARAMETERS,
    RET_TYPE_ILLEGAL_OPERATION,
    RET_TYPE_RETRY_LATER,
    RET_TYPE_RETRY_AFTER_DEEP_SLEEP,
    RET_TYPE_KEY_NOT_FOUND,
    RET_TYPE_FLOW_CONTROL,
    RET_TYPE_IN_PROGRESS,
    RET_TYPE_NO_NETWORK_SERVICE,
    RET_TYPE_INVALID_ENTRY,
    RET_TYPE_OUT_OF_RANGE,
    RET_TYPE_MEMORY_ERROR,
    RET_TYPE_DISABLED_OPERATION,
    RET_TYPE_NOT_POWER_ON,
    RET_TYPE_KV_FLASH_FULL,
    RET_TYPE_CID_ACTIVE,
    RET_TYPE_RADIO_TEST_STATE_ERROR,
    RET_TYPE_RADIOTEST_DISABLED,
    RET_TYPE_NONIP_UNCONFIG,
    RET_TYPE_NONIP_NOT_REGISTERED,
    RET_TYPE_SIM_PIN_REQUIRED,
    RET_TYPE_CID_NOT_DEFINED,
    RET_TYPE_CID_NOT_ACTIVE,
    RET_TYPE_CID_INVALID,
    RET_TYPE_DEACTIVE_LAST_ACTIVE_CID,
    RET_TYPE_IN_PROGRESS_BLOCK,
    RET_TYPE_ABORT_BY_USER,
    RET_TYPE_ABORT_BY_USER_FAILED,
    RET_TYPE_DATA_SEQUENCE_REPEAT_ERROR,
    RET_TYPE_NO_COMMAND_TO_ABORT,
    RET_TYPE_COMMAND_UNABORTABLE,
    RET_TYPE_COMMAND_INTERRUPTED,
    RET_TYPE_PROTOCOL_FAMILY_UNMATCHING,
    RET_TYPE_KEY_WRONG_SIZE,
    RET_TYPE_KEY_TOO_BIG,
    RET_TYPE_CONFIGURATION_CONFLICTS,
} ret_type_e;

/**
 * @}
 */
#endif
