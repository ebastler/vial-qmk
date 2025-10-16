// Copyright 2025 Alex Havermale (@haversnail), Moritz Plattner (@ebastler)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define EECONFIG_USER_DATA_SIZE 4
#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE WEAR_LEVELING_LOGICAL_SIZE*2
#define SPLIT_TRANSACTION_IDS_USER RPC_ID_INDICATOR_CONFIG

// Unique vial ID
#define VIAL_KEYBOARD_UID {0xF5, 0x59, 0xAF, 0xF0, 0x33, 0x99, 0xC2, 0x59}

// Unlock keys (ESC and ENTER)
#define VIAL_UNLOCK_COMBO_ROWS { 0, 9 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 7 }
