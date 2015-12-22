# Copyright (C) 2011 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# config.mk
#
# Product-specific compile-time definitions.
#

include device/qcom/msm8909/BoardConfig.mk

# Set the framebuffer size to 2 for low ram targets
NUM_FRAMEBUFFER_SURFACE_BUFFERS := 2
TARGET_ARCH_LOWMEM := true
TARGET_USES_IMS := false
#add suffix variable to uniquely identify the board
TARGET_BOARD_SUFFIX := _512

TARGET_LDPRELOAD := libNimsWrap.so
HAVE_SYNAPTICS_I2C_RMI4_FW_UPGRADE := true

#Disable below Audio-features for 512 variant
BOARD_SUPPORTS_SOUND_TRIGGER := false

#Use dlmalloc instead of jemalloc for mallocs
MALLOC_IMPL := dlmalloc
