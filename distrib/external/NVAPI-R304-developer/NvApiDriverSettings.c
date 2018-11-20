/***************************************************************************\
|*                                                                           *|
|*      Copyright NVIDIA Corporation.  All rights reserved.                  *|
|*                                                                           *|
|*   NOTICE TO USER:                                                         *|
|*                                                                           *|
|*   This source code is subject to NVIDIA ownership rights under U.S.       *|
|*   and international Copyright laws.  Users and possessors of this         *|
|*   source code are hereby granted a nonexclusive, royalty-free             *|
|*   license to use this code in individual and commercial software.         *|
|*                                                                           *|
|*   NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE     *|
|*   CODE FOR ANY PURPOSE. IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR         *|
|*   IMPLIED WARRANTY OF ANY KIND. NVIDIA DISCLAIMS ALL WARRANTIES WITH      *|
|*   REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF         *|
|*   MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR          *|
|*   PURPOSE. IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL,            *|
|*   INDIRECT, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES          *|
|*   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN      *|
|*   AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING     *|
|*   OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOURCE      *|
|*   CODE.                                                                   *|
|*                                                                           *|
|*   U.S. Government End Users. This source code is a "commercial item"      *|
|*   as that term is defined at 48 C.F.R. 2.101 (OCT 1995), consisting       *|
|*   of "commercial computer  software" and "commercial computer software    *|
|*   documentation" as such terms are used in 48 C.F.R. 12.212 (SEPT 1995)   *|
|*   and is provided to the U.S. Government only as a commercial end item.   *|
|*   Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through        *|
|*   227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the       *|
|*   source code with only those rights set forth herein.                    *|
|*                                                                           *|
|*   Any use of this source code in individual and commercial software must  *|
|*   include, in the user documentation and internal comments to the code,   *|
|*   the above Disclaimer and U.S. Government End Users Notice.              *|
|*                                                                           *|
|*                                                                           *|
\***************************************************************************/

#include "NvApiDriverSettings.h"

EValues_OGL_AA_LINE_GAMMA g_valuesOGL_AA_LINE_GAMMA[OGL_AA_LINE_GAMMA_NUM_VALUES] =
        {
                OGL_AA_LINE_GAMMA_DISABLED,
                OGL_AA_LINE_GAMMA_ENABLED,
                OGL_AA_LINE_GAMMA_MIN,
                OGL_AA_LINE_GAMMA_MAX,
        };

EValues_OGL_DEEP_COLOR_SCANOUT g_valuesOGL_DEEP_COLOR_SCANOUT[OGL_DEEP_COLOR_SCANOUT_NUM_VALUES] =
        {
                OGL_DEEP_COLOR_SCANOUT_DISABLE,
                OGL_DEEP_COLOR_SCANOUT_ENABLE,
        };

EValues_OGL_DEFAULT_SWAP_INTERVAL g_valuesOGL_DEFAULT_SWAP_INTERVAL[OGL_DEFAULT_SWAP_INTERVAL_NUM_VALUES] =
        {
                OGL_DEFAULT_SWAP_INTERVAL_TEAR,
                OGL_DEFAULT_SWAP_INTERVAL_VSYNC_ONE,
                OGL_DEFAULT_SWAP_INTERVAL_VSYNC,
                OGL_DEFAULT_SWAP_INTERVAL_VALUE_MASK,
                OGL_DEFAULT_SWAP_INTERVAL_FORCE_MASK,
                OGL_DEFAULT_SWAP_INTERVAL_FORCE_OFF,
                OGL_DEFAULT_SWAP_INTERVAL_FORCE_ON,
                OGL_DEFAULT_SWAP_INTERVAL_APP_CONTROLLED,
                OGL_DEFAULT_SWAP_INTERVAL_DISABLE,
        };

EValues_OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL g_valuesOGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL[OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_NUM_VALUES] =
        {
                OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ZERO_SCANLINES,
                OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ONE_FULL_FRAME_OF_SCANLINES,
        };

EValues_OGL_DEFAULT_SWAP_INTERVAL_SIGN g_valuesOGL_DEFAULT_SWAP_INTERVAL_SIGN[OGL_DEFAULT_SWAP_INTERVAL_SIGN_NUM_VALUES] =
        {
                OGL_DEFAULT_SWAP_INTERVAL_SIGN_POSITIVE,
                OGL_DEFAULT_SWAP_INTERVAL_SIGN_NEGATIVE,
        };

EValues_OGL_EVENT_LOG_SEVERITY_THRESHOLD g_valuesOGL_EVENT_LOG_SEVERITY_THRESHOLD[OGL_EVENT_LOG_SEVERITY_THRESHOLD_NUM_VALUES] =
        {
                OGL_EVENT_LOG_SEVERITY_THRESHOLD_DISABLE,
                OGL_EVENT_LOG_SEVERITY_THRESHOLD_CRITICAL,
                OGL_EVENT_LOG_SEVERITY_THRESHOLD_WARNING,
                OGL_EVENT_LOG_SEVERITY_THRESHOLD_INFORMATION,
                OGL_EVENT_LOG_SEVERITY_THRESHOLD_ALL,
        };

EValues_OGL_FORCE_BLIT g_valuesOGL_FORCE_BLIT[OGL_FORCE_BLIT_NUM_VALUES] =
        {
                OGL_FORCE_BLIT_ON,
                OGL_FORCE_BLIT_OFF,
        };

EValues_OGL_FORCE_STEREO g_valuesOGL_FORCE_STEREO[OGL_FORCE_STEREO_NUM_VALUES] =
        {
                OGL_FORCE_STEREO_OFF,
                OGL_FORCE_STEREO_ON,
        };

const wchar_t *g_valuesOGL_IMPLICIT_GPU_AFFINITY[OGL_IMPLICIT_GPU_AFFINITY_NUM_VALUES] =
        {
                OGL_IMPLICIT_GPU_AFFINITY_AUTOSELECT
        };

EValues_OGL_MULTIMON g_valuesOGL_MULTIMON[OGL_MULTIMON_NUM_VALUES] =
        {
                OGL_MULTIMON_SINGLE_MONITOR,
                OGL_MULTIMON_COMPATIBILITY_LCD,
                OGL_MULTIMON_COMPATIBILITY_GCD,
                OGL_MULTIMON_PERFORMANCE_LCD,
                OGL_MULTIMON_PERFORMANCE_GCD,
                OGL_MULTIMON_EXTENDED_SINGLE_MONITOR,
                OGL_MULTIMON_PERFORMANCE_QUADRO,
                OGL_MULTIMON_MULTIMON_BUFFER,
        };

EValues_OGL_OVERLAY_PIXEL_TYPE g_valuesOGL_OVERLAY_PIXEL_TYPE[OGL_OVERLAY_PIXEL_TYPE_NUM_VALUES] =
        {
                OGL_OVERLAY_PIXEL_TYPE_NONE,
                OGL_OVERLAY_PIXEL_TYPE_CI,
                OGL_OVERLAY_PIXEL_TYPE_RGBA,
                OGL_OVERLAY_PIXEL_TYPE_CI_AND_RGBA,
        };

EValues_OGL_OVERLAY_SUPPORT g_valuesOGL_OVERLAY_SUPPORT[OGL_OVERLAY_SUPPORT_NUM_VALUES] =
        {
                OGL_OVERLAY_SUPPORT_OFF,
                OGL_OVERLAY_SUPPORT_ON,
                OGL_OVERLAY_SUPPORT_FORCE_SW,
        };

EValues_OGL_QUALITY_ENHANCEMENTS g_valuesOGL_QUALITY_ENHANCEMENTS[OGL_QUALITY_ENHANCEMENTS_NUM_VALUES] =
        {
                OGL_QUALITY_ENHANCEMENTS_HQUAL,
                OGL_QUALITY_ENHANCEMENTS_QUAL,
                OGL_QUALITY_ENHANCEMENTS_PERF,
                OGL_QUALITY_ENHANCEMENTS_HPERF,
        };

EValues_OGL_SINGLE_BACKDEPTH_BUFFER g_valuesOGL_SINGLE_BACKDEPTH_BUFFER[OGL_SINGLE_BACKDEPTH_BUFFER_NUM_VALUES] =
        {
                OGL_SINGLE_BACKDEPTH_BUFFER_DISABLE,
                OGL_SINGLE_BACKDEPTH_BUFFER_ENABLE,
                OGL_SINGLE_BACKDEPTH_BUFFER_USE_HW_DEFAULT,
        };

EValues_OGL_THREAD_CONTROL g_valuesOGL_THREAD_CONTROL[OGL_THREAD_CONTROL_NUM_VALUES] =
        {
                OGL_THREAD_CONTROL_ENABLE,
                OGL_THREAD_CONTROL_DISABLE,
                OGL_THREAD_CONTROL_DUMP_STATS,
                OGL_THREAD_CONTROL_IGNORE_GET_ERROR,
        };

EValues_OGL_TRIPLE_BUFFER g_valuesOGL_TRIPLE_BUFFER[OGL_TRIPLE_BUFFER_NUM_VALUES] =
        {
                OGL_TRIPLE_BUFFER_DISABLED,
                OGL_TRIPLE_BUFFER_ENABLED,
        };

EValues_OGL_VIDEO_EDITING_MODE g_valuesOGL_VIDEO_EDITING_MODE[OGL_VIDEO_EDITING_MODE_NUM_VALUES] =
        {
                OGL_VIDEO_EDITING_MODE_DISABLE,
                OGL_VIDEO_EDITING_MODE_ENABLE,
        };

EValues_AA_BEHAVIOR_FLAGS g_valuesAA_BEHAVIOR_FLAGS[AA_BEHAVIOR_FLAGS_NUM_VALUES] =
        {
                AA_BEHAVIOR_FLAGS_NONE,
                AA_BEHAVIOR_FLAGS_TREAT_OVERRIDE_AS_APP_CONTROLLED,
                AA_BEHAVIOR_FLAGS_TREAT_OVERRIDE_AS_ENHANCE,
                AA_BEHAVIOR_FLAGS_DISABLE_OVERRIDE,
                AA_BEHAVIOR_FLAGS_TREAT_ENHANCE_AS_APP_CONTROLLED,
                AA_BEHAVIOR_FLAGS_TREAT_ENHANCE_AS_OVERRIDE,
                AA_BEHAVIOR_FLAGS_DISABLE_ENHANCE,
                AA_BEHAVIOR_FLAGS_MAP_VCAA_TO_MULTISAMPLING,
                AA_BEHAVIOR_FLAGS_SLI_DISABLE_TRANSPARENCY_SUPERSAMPLING,
                AA_BEHAVIOR_FLAGS_DISABLE_CPLAA,
                AA_BEHAVIOR_FLAGS_SKIP_RT_DIM_CHECK_FOR_ENHANCE,
                AA_BEHAVIOR_FLAGS_DISABLE_SLIAA,
                AA_BEHAVIOR_FLAGS_DEFAULT,
                AA_BEHAVIOR_FLAGS_AA_RT_BPP_DIV_4,
                AA_BEHAVIOR_FLAGS_AA_RT_BPP_DIV_4_SHIFT,
                AA_BEHAVIOR_FLAGS_NON_AA_RT_BPP_DIV_4,
                AA_BEHAVIOR_FLAGS_NON_AA_RT_BPP_DIV_4_SHIFT,
                AA_BEHAVIOR_FLAGS_MASK,
        };

EValues_AA_MODE_ALPHATOCOVERAGE g_valuesAA_MODE_ALPHATOCOVERAGE[AA_MODE_ALPHATOCOVERAGE_NUM_VALUES] =
        {
                AA_MODE_ALPHATOCOVERAGE_MODE_MASK,
                AA_MODE_ALPHATOCOVERAGE_MODE_OFF,
                AA_MODE_ALPHATOCOVERAGE_MODE_ON,
                AA_MODE_ALPHATOCOVERAGE_MODE_MAX,
        };

EValues_AA_MODE_GAMMACORRECTION g_valuesAA_MODE_GAMMACORRECTION[AA_MODE_GAMMACORRECTION_NUM_VALUES] =
        {
                AA_MODE_GAMMACORRECTION_MASK,
                AA_MODE_GAMMACORRECTION_OFF,
                AA_MODE_GAMMACORRECTION_ON_IF_FOS,
                AA_MODE_GAMMACORRECTION_ON_ALWAYS,
                AA_MODE_GAMMACORRECTION_MAX,
                AA_MODE_GAMMACORRECTION_DEFAULT,
                AA_MODE_GAMMACORRECTION_DEFAULT_TESLA,
                AA_MODE_GAMMACORRECTION_DEFAULT_FERMI,
        };

EValues_AA_MODE_METHOD g_valuesAA_MODE_METHOD[AA_MODE_METHOD_NUM_VALUES] =
        {
                AA_MODE_METHOD_NONE,
                AA_MODE_METHOD_SUPERSAMPLE_2X_H,
                AA_MODE_METHOD_SUPERSAMPLE_2X_V,
                AA_MODE_METHOD_SUPERSAMPLE_1_5X1_5,
                AA_MODE_METHOD_FREE_0x03,
                AA_MODE_METHOD_FREE_0x04,
                AA_MODE_METHOD_SUPERSAMPLE_4X,
                AA_MODE_METHOD_SUPERSAMPLE_4X_BIAS,
                AA_MODE_METHOD_SUPERSAMPLE_4X_GAUSSIAN,
                AA_MODE_METHOD_FREE_0x08,
                AA_MODE_METHOD_FREE_0x09,
                AA_MODE_METHOD_SUPERSAMPLE_9X,
                AA_MODE_METHOD_SUPERSAMPLE_9X_BIAS,
                AA_MODE_METHOD_SUPERSAMPLE_16X,
                AA_MODE_METHOD_SUPERSAMPLE_16X_BIAS,
                AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL,
                AA_MODE_METHOD_MULTISAMPLE_2X_QUINCUNX,
                AA_MODE_METHOD_MULTISAMPLE_4X,
                AA_MODE_METHOD_FREE_0x11,
                AA_MODE_METHOD_MULTISAMPLE_4X_GAUSSIAN,
                AA_MODE_METHOD_MIXEDSAMPLE_4X_SKEWED_4TAP,
                AA_MODE_METHOD_FREE_0x14,
                AA_MODE_METHOD_FREE_0x15,
                AA_MODE_METHOD_MIXEDSAMPLE_6X,
                AA_MODE_METHOD_MIXEDSAMPLE_6X_SKEWED_6TAP,
                AA_MODE_METHOD_MIXEDSAMPLE_8X,
                AA_MODE_METHOD_MIXEDSAMPLE_8X_SKEWED_8TAP,
                AA_MODE_METHOD_MIXEDSAMPLE_16X,
                AA_MODE_METHOD_MULTISAMPLE_4X_GAMMA,
                AA_MODE_METHOD_MULTISAMPLE_16X,
                AA_MODE_METHOD_VCAA_32X_8v24,
                AA_MODE_METHOD_CORRUPTION_CHECK,
                AA_MODE_METHOD_6X_CT,
                AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL_GAMMA,
                AA_MODE_METHOD_SUPERSAMPLE_4X_GAMMA,
                AA_MODE_METHOD_MULTISAMPLE_4X_FOSGAMMA,
                AA_MODE_METHOD_MULTISAMPLE_2X_DIAGONAL_FOSGAMMA,
                AA_MODE_METHOD_SUPERSAMPLE_4X_FOSGAMMA,
                AA_MODE_METHOD_MULTISAMPLE_8X,
                AA_MODE_METHOD_VCAA_8X_4v4,
                AA_MODE_METHOD_VCAA_16X_4v12,
                AA_MODE_METHOD_VCAA_16X_8v8,
                AA_MODE_METHOD_MIXEDSAMPLE_32X,
                AA_MODE_METHOD_SUPERVCAA_64X_4v12,
                AA_MODE_METHOD_SUPERVCAA_64X_8v8,
                AA_MODE_METHOD_MIXEDSAMPLE_64X,
                AA_MODE_METHOD_MIXEDSAMPLE_128X,
                AA_MODE_METHOD_COUNT,
                AA_MODE_METHOD_METHOD_MASK,
                AA_MODE_METHOD_METHOD_MAX,
        };

EValues_AA_MODE_REPLAY g_valuesAA_MODE_REPLAY[AA_MODE_REPLAY_NUM_VALUES] =
        {
                AA_MODE_REPLAY_SAMPLES_MASK,
                AA_MODE_REPLAY_SAMPLES_ONE,
                AA_MODE_REPLAY_SAMPLES_TWO,
                AA_MODE_REPLAY_SAMPLES_FOUR,
                AA_MODE_REPLAY_SAMPLES_EIGHT,
                AA_MODE_REPLAY_SAMPLES_MAX,
                AA_MODE_REPLAY_MODE_MASK,
                AA_MODE_REPLAY_MODE_OFF,
                AA_MODE_REPLAY_MODE_ALPHA_TEST,
                AA_MODE_REPLAY_MODE_PIXEL_KILL,
                AA_MODE_REPLAY_MODE_DYN_BRANCH,
                AA_MODE_REPLAY_MODE_OPTIMAL,
                AA_MODE_REPLAY_MODE_ALL,
                AA_MODE_REPLAY_MODE_MAX,
                AA_MODE_REPLAY_TRANSPARENCY,
                AA_MODE_REPLAY_DISALLOW_TRAA,
                AA_MODE_REPLAY_TRANSPARENCY_DEFAULT,
                AA_MODE_REPLAY_TRANSPARENCY_DEFAULT_TESLA,
                AA_MODE_REPLAY_TRANSPARENCY_DEFAULT_FERMI,
        };

EValues_AA_MODE_SELECTOR g_valuesAA_MODE_SELECTOR[AA_MODE_SELECTOR_NUM_VALUES] =
        {
                AA_MODE_SELECTOR_MASK,
                AA_MODE_SELECTOR_APP_CONTROL,
                AA_MODE_SELECTOR_OVERRIDE,
                AA_MODE_SELECTOR_ENHANCE,
                AA_MODE_SELECTOR_MAX,
        };

EValues_AA_MODE_SELECTOR_SLIAA g_valuesAA_MODE_SELECTOR_SLIAA[AA_MODE_SELECTOR_SLIAA_NUM_VALUES] =
        {
                AA_MODE_SELECTOR_SLIAA_DISABLED,
                AA_MODE_SELECTOR_SLIAA_ENABLED,
        };

EValues_ANISO_MODE_LEVEL g_valuesANISO_MODE_LEVEL[ANISO_MODE_LEVEL_NUM_VALUES] =
        {
                ANISO_MODE_LEVEL_MASK,
                ANISO_MODE_LEVEL_NONE_POINT,
                ANISO_MODE_LEVEL_NONE_LINEAR,
                ANISO_MODE_LEVEL_MAX,
                ANISO_MODE_LEVEL_DEFAULT,
        };

EValues_ANISO_MODE_SELECTOR g_valuesANISO_MODE_SELECTOR[ANISO_MODE_SELECTOR_NUM_VALUES] =
        {
                ANISO_MODE_SELECTOR_MASK,
                ANISO_MODE_SELECTOR_APP,
                ANISO_MODE_SELECTOR_USER,
                ANISO_MODE_SELECTOR_COND,
                ANISO_MODE_SELECTOR_MAX,
                ANISO_MODE_SELECTOR_DEFAULT,
        };

EValues_APPLICATION_PROFILE_NOTIFICATION_TIMEOUT g_valuesAPPLICATION_PROFILE_NOTIFICATION_TIMEOUT[APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_NUM_VALUES] =
        {
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_DISABLED,
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_NINE_SECONDS,
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_FIFTEEN_SECONDS,
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_THIRTY_SECONDS,
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_ONE_MINUTE,
                APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_TWO_MINUTES,
        };

EValues_CPL_HIDDEN_PROFILE g_valuesCPL_HIDDEN_PROFILE[CPL_HIDDEN_PROFILE_NUM_VALUES] =
        {
                CPL_HIDDEN_PROFILE_DISABLED,
                CPL_HIDDEN_PROFILE_ENABLED,
        };

const wchar_t *g_valuesCUDA_EXCLUDED_GPUS[CUDA_EXCLUDED_GPUS_NUM_VALUES] =
        {
                CUDA_EXCLUDED_GPUS_NONE
        };

const wchar_t *g_valuesD3DOGL_GPU_MAX_POWER[D3DOGL_GPU_MAX_POWER_NUM_VALUES] =
        {
                D3DOGL_GPU_MAX_POWER_DEFAULTPOWER
        };

EValues_EXPORT_PERF_COUNTERS g_valuesEXPORT_PERF_COUNTERS[EXPORT_PERF_COUNTERS_NUM_VALUES] =
        {
                EXPORT_PERF_COUNTERS_OFF,
                EXPORT_PERF_COUNTERS_ON,
        };

EValues_FXAA_ALLOW g_valuesFXAA_ALLOW[FXAA_ALLOW_NUM_VALUES] =
        {
                FXAA_ALLOW_DISALLOWED,
                FXAA_ALLOW_ALLOWED,
        };

EValues_FXAA_ENABLE g_valuesFXAA_ENABLE[FXAA_ENABLE_NUM_VALUES] =
        {
                FXAA_ENABLE_OFF,
                FXAA_ENABLE_ON,
        };

EValues_FXAA_INDICATOR_ENABLE g_valuesFXAA_INDICATOR_ENABLE[FXAA_INDICATOR_ENABLE_NUM_VALUES] =
        {
                FXAA_INDICATOR_ENABLE_OFF,
                FXAA_INDICATOR_ENABLE_ON,
        };

EValues_MCSFRSHOWSPLIT g_valuesMCSFRSHOWSPLIT[MCSFRSHOWSPLIT_NUM_VALUES] =
        {
                MCSFRSHOWSPLIT_DISABLED,
                MCSFRSHOWSPLIT_ENABLED,
        };

EValues_OPTIMUS_DEBUG g_valuesOPTIMUS_DEBUG[OPTIMUS_DEBUG_NUM_VALUES] =
        {
                OPTIMUS_DEBUG_NULL_RENDER_TRANSPORT,
                OPTIMUS_DEBUG_NULL_DISPLAY_TRANSPORT,
        };

EValues_OPTIMUS_MAXAA g_valuesOPTIMUS_MAXAA[OPTIMUS_MAXAA_NUM_VALUES] =
        {
                OPTIMUS_MAXAA_MIN,
                OPTIMUS_MAXAA_MAX,
        };

EValues_PHYSXINDICATOR g_valuesPHYSXINDICATOR[PHYSXINDICATOR_NUM_VALUES] =
        {
                PHYSXINDICATOR_DISABLED,
                PHYSXINDICATOR_ENABLED,
        };

EValues_PREFERRED_PSTATE g_valuesPREFERRED_PSTATE[PREFERRED_PSTATE_NUM_VALUES] =
        {
                PREFERRED_PSTATE_ADAPTIVE,
                PREFERRED_PSTATE_PREFER_MAX,
                PREFERRED_PSTATE_PREFER_MIN,
                PREFERRED_PSTATE_MIN,
                PREFERRED_PSTATE_MAX,
        };

EValues_PS_FRAMERATE_LIMITER g_valuesPS_FRAMERATE_LIMITER[PS_FRAMERATE_LIMITER_NUM_VALUES] =
        {
                PS_FRAMERATE_LIMITER_DISABLED,
                PS_FRAMERATE_LIMITER_FPS_20,
                PS_FRAMERATE_LIMITER_FPS_30,
                PS_FRAMERATE_LIMITER_FPS_40,
                PS_FRAMERATE_LIMITER_FPSMASK,
                PS_FRAMERATE_LIMITER_FORCE_OPTIMUS_POLICY,
                PS_FRAMERATE_LIMITER_DISALLOWED,
                PS_FRAMERATE_LIMITER_THRESHOLD,
                PS_FRAMERATE_LIMITER_TEMPERATURE,
                PS_FRAMERATE_LIMITER_POWER,
                PS_FRAMERATE_LIMITER_MODEMASK,
                PS_FRAMERATE_LIMITER_ACCURATE,
                PS_FRAMERATE_LIMITER_ALLOW_WINDOWED,
                PS_FRAMERATE_LIMITER_FORCEON,
                PS_FRAMERATE_LIMITER_ENABLED,
                PS_FRAMERATE_LIMITER_MASK,
        };

EValues_SHIM_IGPU_TRANSCODING g_valuesSHIM_IGPU_TRANSCODING[SHIM_IGPU_TRANSCODING_NUM_VALUES] =
        {
                SHIM_IGPU_TRANSCODING_DISABLE,
                SHIM_IGPU_TRANSCODING_ENABLE,
        };

EValues_SHIM_MCCOMPAT g_valuesSHIM_MCCOMPAT[SHIM_MCCOMPAT_NUM_VALUES] =
        {
                SHIM_MCCOMPAT_INTEGRATED,
                SHIM_MCCOMPAT_ENABLE,
                SHIM_MCCOMPAT_USER_EDITABLE,
                SHIM_MCCOMPAT_MASK,
                SHIM_MCCOMPAT_VIDEO_MASK,
                SHIM_MCCOMPAT_VARYING_BIT,
                SHIM_MCCOMPAT_AUTO_SELECT,
                SHIM_MCCOMPAT_OVERRIDE_BIT,
        };

EValues_SHIM_RENDERING_MODE g_valuesSHIM_RENDERING_MODE[SHIM_RENDERING_MODE_NUM_VALUES] =
        {
                SHIM_RENDERING_MODE_INTEGRATED,
                SHIM_RENDERING_MODE_ENABLE,
                SHIM_RENDERING_MODE_USER_EDITABLE,
                SHIM_RENDERING_MODE_MASK,
                SHIM_RENDERING_MODE_VIDEO_MASK,
                SHIM_RENDERING_MODE_VARYING_BIT,
                SHIM_RENDERING_MODE_AUTO_SELECT,
                SHIM_RENDERING_MODE_OVERRIDE_BIT,
        };

EValues_SHIM_RENDERING_OPTIONS g_valuesSHIM_RENDERING_OPTIONS[SHIM_RENDERING_OPTIONS_NUM_VALUES] =
        {
                SHIM_RENDERING_OPTIONS_DEFAULT_RENDERING_MODE,
                SHIM_RENDERING_OPTIONS_DISABLE_ASYNC_PRESENT,
                SHIM_RENDERING_OPTIONS_EHSHELL_DETECT,
                SHIM_RENDERING_OPTIONS_FLASHPLAYER_HOST_DETECT,
                SHIM_RENDERING_OPTIONS_VIDEO_DRM_APP_DETECT,
                SHIM_RENDERING_OPTIONS_IGNORE_OVERRIDES,
                SHIM_RENDERING_OPTIONS_CHILDPROCESS_DETECT,
                SHIM_RENDERING_OPTIONS_ENABLE_DWM_ASYNC_PRESENT,
                SHIM_RENDERING_OPTIONS_PARENTPROCESS_DETECT,
                SHIM_RENDERING_OPTIONS_ALLOW_INHERITANCE,
                SHIM_RENDERING_OPTIONS_DISABLE_WRAPPERS,
                SHIM_RENDERING_OPTIONS_DISABLE_DXGI_WRAPPERS,
                SHIM_RENDERING_OPTIONS_PRUNE_UNSUPPORTED_FORMATS,
                SHIM_RENDERING_OPTIONS_ENABLE_ALPHA_FORMAT,
                SHIM_RENDERING_OPTIONS_IGPU_TRANSCODING,
                SHIM_RENDERING_OPTIONS_DISABLE_CUDA,
                SHIM_RENDERING_OPTIONS_ALLOW_CP_CAPS_FOR_VIDEO,
                SHIM_RENDERING_OPTIONS_ENABLE_NEW_HOOKING,
                SHIM_RENDERING_OPTIONS_DISABLE_DURING_SECURE_BOOT,
        };

EValues_SLI_GPU_COUNT g_valuesSLI_GPU_COUNT[SLI_GPU_COUNT_NUM_VALUES] =
        {
                SLI_GPU_COUNT_AUTOSELECT,
                SLI_GPU_COUNT_ONE,
                SLI_GPU_COUNT_TWO,
                SLI_GPU_COUNT_THREE,
                SLI_GPU_COUNT_FOUR,
        };

EValues_SLI_PREDEFINED_GPU_COUNT g_valuesSLI_PREDEFINED_GPU_COUNT[SLI_PREDEFINED_GPU_COUNT_NUM_VALUES] =
        {
                SLI_PREDEFINED_GPU_COUNT_AUTOSELECT,
                SLI_PREDEFINED_GPU_COUNT_ONE,
                SLI_PREDEFINED_GPU_COUNT_TWO,
                SLI_PREDEFINED_GPU_COUNT_THREE,
                SLI_PREDEFINED_GPU_COUNT_FOUR,
        };

EValues_SLI_PREDEFINED_GPU_COUNT_DX10 g_valuesSLI_PREDEFINED_GPU_COUNT_DX10[SLI_PREDEFINED_GPU_COUNT_DX10_NUM_VALUES] =
        {
                SLI_PREDEFINED_GPU_COUNT_DX10_AUTOSELECT,
                SLI_PREDEFINED_GPU_COUNT_DX10_ONE,
                SLI_PREDEFINED_GPU_COUNT_DX10_TWO,
                SLI_PREDEFINED_GPU_COUNT_DX10_THREE,
                SLI_PREDEFINED_GPU_COUNT_DX10_FOUR,
        };

EValues_SLI_PREDEFINED_MODE g_valuesSLI_PREDEFINED_MODE[SLI_PREDEFINED_MODE_NUM_VALUES] =
        {
                SLI_PREDEFINED_MODE_AUTOSELECT,
                SLI_PREDEFINED_MODE_FORCE_SINGLE,
                SLI_PREDEFINED_MODE_FORCE_AFR,
                SLI_PREDEFINED_MODE_FORCE_AFR2,
                SLI_PREDEFINED_MODE_FORCE_SFR,
                SLI_PREDEFINED_MODE_FORCE_AFR_OF_SFR__FALLBACK_3AFR,
        };

EValues_SLI_PREDEFINED_MODE_DX10 g_valuesSLI_PREDEFINED_MODE_DX10[SLI_PREDEFINED_MODE_DX10_NUM_VALUES] =
        {
                SLI_PREDEFINED_MODE_DX10_AUTOSELECT,
                SLI_PREDEFINED_MODE_DX10_FORCE_SINGLE,
                SLI_PREDEFINED_MODE_DX10_FORCE_AFR,
                SLI_PREDEFINED_MODE_DX10_FORCE_AFR2,
                SLI_PREDEFINED_MODE_DX10_FORCE_SFR,
                SLI_PREDEFINED_MODE_DX10_FORCE_AFR_OF_SFR__FALLBACK_3AFR,
        };

EValues_SLI_RENDERING_MODE g_valuesSLI_RENDERING_MODE[SLI_RENDERING_MODE_NUM_VALUES] =
        {
                SLI_RENDERING_MODE_AUTOSELECT,
                SLI_RENDERING_MODE_FORCE_SINGLE,
                SLI_RENDERING_MODE_FORCE_AFR,
                SLI_RENDERING_MODE_FORCE_AFR2,
                SLI_RENDERING_MODE_FORCE_SFR,
                SLI_RENDERING_MODE_FORCE_AFR_OF_SFR__FALLBACK_3AFR,
        };

EValues_VSYNC_BEHAVIOR_FLAGS g_valuesVSYNC_BEHAVIOR_FLAGS[VSYNC_BEHAVIOR_FLAGS_NUM_VALUES] =
        {
                VSYNC_BEHAVIOR_FLAGS_NONE,
                VSYNC_BEHAVIOR_FLAGS_DEFAULT,
                VSYNC_BEHAVIOR_FLAGS_IGNORE_FLIPINTERVAL_MULTIPLE,
        };

EValues_WKS_API_STEREO_EYES_EXCHANGE g_valuesWKS_API_STEREO_EYES_EXCHANGE[WKS_API_STEREO_EYES_EXCHANGE_NUM_VALUES] =
        {
                WKS_API_STEREO_EYES_EXCHANGE_OFF,
                WKS_API_STEREO_EYES_EXCHANGE_ON,
        };

EValues_WKS_API_STEREO_MODE g_valuesWKS_API_STEREO_MODE[WKS_API_STEREO_MODE_NUM_VALUES] =
        {
                WKS_API_STEREO_MODE_SHUTTER_GLASSES,
                WKS_API_STEREO_MODE_VERTICAL_INTERLACED,
                WKS_API_STEREO_MODE_TWINVIEW,
                WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_AUTO,
                WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_DAC0,
                WKS_API_STEREO_MODE_NV17_SHUTTER_GLASSES_DAC1,
                WKS_API_STEREO_MODE_COLOR_LINE,
                WKS_API_STEREO_MODE_COLOR_INTERLEAVED,
                WKS_API_STEREO_MODE_ANAGLYPH,
                WKS_API_STEREO_MODE_HORIZONTAL_INTERLACED,
                WKS_API_STEREO_MODE_SIDE_FIELD,
                WKS_API_STEREO_MODE_SUB_FIELD,
                WKS_API_STEREO_MODE_CHECKERBOARD,
                WKS_API_STEREO_MODE_INVERSE_CHECKERBOARD,
                WKS_API_STEREO_MODE_TRIDELITY_SL,
                WKS_API_STEREO_MODE_TRIDELITY_MV,
                WKS_API_STEREO_MODE_SEEFRONT,
                WKS_API_STEREO_MODE_STEREO_MIRROR,
                WKS_API_STEREO_MODE_FRAME_SEQUENTIAL,
                WKS_API_STEREO_MODE_AUTODETECT_PASSIVE_MODE,
                WKS_API_STEREO_MODE_AEGIS_DT_FRAME_SEQUENTIAL,
                WKS_API_STEREO_MODE_OEM_EMITTER_FRAME_SEQUENTIAL,
                WKS_API_STEREO_MODE_USE_HW_DEFAULT,
                WKS_API_STEREO_MODE_DEFAULT_GL,
        };

EValues_WKS_FEATURE_SUPPORT_CONTROL g_valuesWKS_FEATURE_SUPPORT_CONTROL[WKS_FEATURE_SUPPORT_CONTROL_NUM_VALUES] =
        {
                WKS_FEATURE_SUPPORT_CONTROL_OFF,
                WKS_FEATURE_SUPPORT_CONTROL_SRS_1714_WIN8_STEREO,
        };

EValues_WKS_STEREO_DONGLE_SUPPORT g_valuesWKS_STEREO_DONGLE_SUPPORT[WKS_STEREO_DONGLE_SUPPORT_NUM_VALUES] =
        {
                WKS_STEREO_DONGLE_SUPPORT_OFF,
                WKS_STEREO_DONGLE_SUPPORT_DAC,
                WKS_STEREO_DONGLE_SUPPORT_DLP,
        };

EValues_WKS_STEREO_SUPPORT g_valuesWKS_STEREO_SUPPORT[WKS_STEREO_SUPPORT_NUM_VALUES] =
        {
                WKS_STEREO_SUPPORT_OFF,
                WKS_STEREO_SUPPORT_ON,
        };

EValues_AO_MODE g_valuesAO_MODE[AO_MODE_NUM_VALUES] =
        {
                AO_MODE_OFF,
                AO_MODE_LOW,
                AO_MODE_MEDIUM,
                AO_MODE_HIGH,
        };

EValues_AO_MODE_ACTIVE g_valuesAO_MODE_ACTIVE[AO_MODE_ACTIVE_NUM_VALUES] =
        {
                AO_MODE_ACTIVE_DISABLED,
                AO_MODE_ACTIVE_ENABLED,
        };

EValues_PRERENDERLIMIT g_valuesPRERENDERLIMIT[PRERENDERLIMIT_NUM_VALUES] =
        {
                PRERENDERLIMIT_MIN,
                PRERENDERLIMIT_MAX,
                PRERENDERLIMIT_APP_CONTROLLED,
        };

EValues_PS_DYNAMIC_TILING g_valuesPS_DYNAMIC_TILING[PS_DYNAMIC_TILING_NUM_VALUES] =
        {
                PS_DYNAMIC_TILING_OFF,
                PS_DYNAMIC_TILING_ON,
        };

EValues_PS_TEXFILTER_ANISO_OPTS2 g_valuesPS_TEXFILTER_ANISO_OPTS2[PS_TEXFILTER_ANISO_OPTS2_NUM_VALUES] =
        {
                PS_TEXFILTER_ANISO_OPTS2_OFF,
                PS_TEXFILTER_ANISO_OPTS2_ON,
        };

EValues_PS_TEXFILTER_BILINEAR_IN_ANISO g_valuesPS_TEXFILTER_BILINEAR_IN_ANISO[PS_TEXFILTER_BILINEAR_IN_ANISO_NUM_VALUES] =
        {
                PS_TEXFILTER_BILINEAR_IN_ANISO_OFF,
                PS_TEXFILTER_BILINEAR_IN_ANISO_ON,
        };

EValues_PS_TEXFILTER_DISABLE_TRILIN_SLOPE g_valuesPS_TEXFILTER_DISABLE_TRILIN_SLOPE[PS_TEXFILTER_DISABLE_TRILIN_SLOPE_NUM_VALUES] =
        {
                PS_TEXFILTER_DISABLE_TRILIN_SLOPE_OFF,
                PS_TEXFILTER_DISABLE_TRILIN_SLOPE_ON,
        };

EValues_PS_TEXFILTER_NO_NEG_LODBIAS g_valuesPS_TEXFILTER_NO_NEG_LODBIAS[PS_TEXFILTER_NO_NEG_LODBIAS_NUM_VALUES] =
        {
                PS_TEXFILTER_NO_NEG_LODBIAS_OFF,
                PS_TEXFILTER_NO_NEG_LODBIAS_ON,
        };

EValues_QUALITY_ENHANCEMENTS g_valuesQUALITY_ENHANCEMENTS[QUALITY_ENHANCEMENTS_NUM_VALUES] =
        {
                QUALITY_ENHANCEMENTS_HIGHQUALITY,
                QUALITY_ENHANCEMENTS_QUALITY,
                QUALITY_ENHANCEMENTS_PERFORMANCE,
                QUALITY_ENHANCEMENTS_HIGHPERFORMANCE,
        };

EValues_REFRESH_RATE_OVERRIDE g_valuesREFRESH_RATE_OVERRIDE[REFRESH_RATE_OVERRIDE_NUM_VALUES] =
        {
                REFRESH_RATE_OVERRIDE_APPLICATION_CONTROLLED,
                REFRESH_RATE_OVERRIDE_HIGHEST_AVAILABLE,
        };

EValues_SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE g_valuesSET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE[SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_NUM_VALUES] =
        {
                SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_OFF,
                SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_ON,
        };

EValues_SET_VAB_DATA g_valuesSET_VAB_DATA[SET_VAB_DATA_NUM_VALUES] =
        {
                SET_VAB_DATA_ZERO,
                SET_VAB_DATA_UINT_ONE,
                SET_VAB_DATA_FLOAT_ONE,
                SET_VAB_DATA_FLOAT_POS_INF,
                SET_VAB_DATA_FLOAT_NAN,
                SET_VAB_DATA_USE_API_DEFAULTS,
        };

EValues_VSYNCMODE g_valuesVSYNCMODE[VSYNCMODE_NUM_VALUES] =
        {
                VSYNCMODE_PASSIVE,
                VSYNCMODE_FORCEOFF,
                VSYNCMODE_FORCEON,
                VSYNCMODE_FLIPINTERVAL2,
                VSYNCMODE_FLIPINTERVAL3,
                VSYNCMODE_FLIPINTERVAL4,
        };

EValues_VSYNCTEARCONTROL g_valuesVSYNCTEARCONTROL[VSYNCTEARCONTROL_NUM_VALUES] =
        {
                VSYNCTEARCONTROL_DISABLE,
                VSYNCTEARCONTROL_ENABLE,
        };


SettingDWORDNameString mapSettingDWORD[TOTAL_DWORD_SETTING_NUM] =
        {
                {OGL_AA_LINE_GAMMA_ID,                        OGL_AA_LINE_GAMMA_STRING,                        4,  (NvU32 *) g_valuesOGL_AA_LINE_GAMMA,                        OGL_AA_LINE_GAMMA_DISABLED},
                {OGL_DEEP_COLOR_SCANOUT_ID,                   OGL_DEEP_COLOR_SCANOUT_STRING,                   2,  (NvU32 *) g_valuesOGL_DEEP_COLOR_SCANOUT,                   OGL_DEEP_COLOR_SCANOUT_ENABLE},
                {OGL_DEFAULT_SWAP_INTERVAL_ID,                OGL_DEFAULT_SWAP_INTERVAL_STRING,                9,  (NvU32 *) g_valuesOGL_DEFAULT_SWAP_INTERVAL,                OGL_DEFAULT_SWAP_INTERVAL_VSYNC_ONE},
                {OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_ID,     OGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL_STRING,     2,  (NvU32 *) g_valuesOGL_DEFAULT_SWAP_INTERVAL_FRACTIONAL,     0x00000000},
                {OGL_DEFAULT_SWAP_INTERVAL_SIGN_ID,           OGL_DEFAULT_SWAP_INTERVAL_SIGN_STRING,           2,  (NvU32 *) g_valuesOGL_DEFAULT_SWAP_INTERVAL_SIGN,           OGL_DEFAULT_SWAP_INTERVAL_SIGN_POSITIVE},
                {OGL_EVENT_LOG_SEVERITY_THRESHOLD_ID,         OGL_EVENT_LOG_SEVERITY_THRESHOLD_STRING,         5,  (NvU32 *) g_valuesOGL_EVENT_LOG_SEVERITY_THRESHOLD,         OGL_EVENT_LOG_SEVERITY_THRESHOLD_CRITICAL},
                {OGL_EXTENSION_STRING_VERSION_ID,             OGL_EXTENSION_STRING_VERSION_STRING,             0,  NULL,                                                       0x00000000},
                {OGL_FORCE_BLIT_ID,                           OGL_FORCE_BLIT_STRING,                           2,  (NvU32 *) g_valuesOGL_FORCE_BLIT,                           OGL_FORCE_BLIT_OFF},
                {OGL_FORCE_STEREO_ID,                         OGL_FORCE_STEREO_STRING,                         2,  (NvU32 *) g_valuesOGL_FORCE_STEREO,                         OGL_FORCE_STEREO_OFF},
                {OGL_MAX_FRAMES_ALLOWED_ID,                   OGL_MAX_FRAMES_ALLOWED_STRING,                   0,  NULL,                                                       0x00000002},
                {OGL_MULTIMON_ID,                             OGL_MULTIMON_STRING,                             8,  (NvU32 *) g_valuesOGL_MULTIMON,                             OGL_MULTIMON_PERFORMANCE_LCD},
                {OGL_OVERLAY_PIXEL_TYPE_ID,                   OGL_OVERLAY_PIXEL_TYPE_STRING,                   4,  (NvU32 *) g_valuesOGL_OVERLAY_PIXEL_TYPE,                   OGL_OVERLAY_PIXEL_TYPE_CI},
                {OGL_OVERLAY_SUPPORT_ID,                      OGL_OVERLAY_SUPPORT_STRING,                      3,  (NvU32 *) g_valuesOGL_OVERLAY_SUPPORT,                      OGL_OVERLAY_SUPPORT_OFF},
                {OGL_QUALITY_ENHANCEMENTS_ID,                 OGL_QUALITY_ENHANCEMENTS_STRING,                 4,  (NvU32 *) g_valuesOGL_QUALITY_ENHANCEMENTS,                 OGL_QUALITY_ENHANCEMENTS_QUAL},
                {OGL_SINGLE_BACKDEPTH_BUFFER_ID,              OGL_SINGLE_BACKDEPTH_BUFFER_STRING,              3,  (NvU32 *) g_valuesOGL_SINGLE_BACKDEPTH_BUFFER,              OGL_SINGLE_BACKDEPTH_BUFFER_DISABLE},
                {OGL_THREAD_CONTROL_ID,                       OGL_THREAD_CONTROL_STRING,                       4,  (NvU32 *) g_valuesOGL_THREAD_CONTROL,                       0x00000000},
                {OGL_TRIPLE_BUFFER_ID,                        OGL_TRIPLE_BUFFER_STRING,                        2,  (NvU32 *) g_valuesOGL_TRIPLE_BUFFER,                        OGL_TRIPLE_BUFFER_DISABLED},
                {OGL_VIDEO_EDITING_MODE_ID,                   OGL_VIDEO_EDITING_MODE_STRING,                   2,  (NvU32 *) g_valuesOGL_VIDEO_EDITING_MODE,                   OGL_VIDEO_EDITING_MODE_DISABLE},
                {AA_BEHAVIOR_FLAGS_ID,                        AA_BEHAVIOR_FLAGS_STRING,                        18, (NvU32 *) g_valuesAA_BEHAVIOR_FLAGS,                        AA_BEHAVIOR_FLAGS_DEFAULT},
                {AA_MODE_ALPHATOCOVERAGE_ID,                  AA_MODE_ALPHATOCOVERAGE_STRING,                  4,  (NvU32 *) g_valuesAA_MODE_ALPHATOCOVERAGE,                  0x00000000},
                {AA_MODE_GAMMACORRECTION_ID,                  AA_MODE_GAMMACORRECTION_STRING,                  8,  (NvU32 *) g_valuesAA_MODE_GAMMACORRECTION,                  0x00000000},
                {AA_MODE_METHOD_ID,                           AA_MODE_METHOD_STRING,                           50, (NvU32 *) g_valuesAA_MODE_METHOD,                           AA_MODE_METHOD_NONE},
                {AA_MODE_REPLAY_ID,                           AA_MODE_REPLAY_STRING,                           19, (NvU32 *) g_valuesAA_MODE_REPLAY,                           0x00000000},
                {AA_MODE_SELECTOR_ID,                         AA_MODE_SELECTOR_STRING,                         5,  (NvU32 *) g_valuesAA_MODE_SELECTOR,                         AA_MODE_SELECTOR_APP_CONTROL},
                {AA_MODE_SELECTOR_SLIAA_ID,                   AA_MODE_SELECTOR_SLIAA_STRING,                   2,  (NvU32 *) g_valuesAA_MODE_SELECTOR_SLIAA,                   AA_MODE_SELECTOR_SLIAA_DISABLED},
                {ANISO_MODE_LEVEL_ID,                         ANISO_MODE_LEVEL_STRING,                         5,  (NvU32 *) g_valuesANISO_MODE_LEVEL,                         ANISO_MODE_LEVEL_DEFAULT},
                {ANISO_MODE_SELECTOR_ID,                      ANISO_MODE_SELECTOR_STRING,                      6,  (NvU32 *) g_valuesANISO_MODE_SELECTOR,                      ANISO_MODE_SELECTOR_DEFAULT},
                {APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_ID, APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_STRING, 6,  (NvU32 *) g_valuesAPPLICATION_PROFILE_NOTIFICATION_TIMEOUT, APPLICATION_PROFILE_NOTIFICATION_TIMEOUT_DISABLED},
                {APPLICATION_STEAM_ID_ID,                     APPLICATION_STEAM_ID_STRING,                     0,  NULL,                                                       0x00000000},
                {CPL_HIDDEN_PROFILE_ID,                       CPL_HIDDEN_PROFILE_STRING,                       2,  (NvU32 *) g_valuesCPL_HIDDEN_PROFILE,                       CPL_HIDDEN_PROFILE_DISABLED},
                {EXPORT_PERF_COUNTERS_ID,                     EXPORT_PERF_COUNTERS_STRING,                     2,  (NvU32 *) g_valuesEXPORT_PERF_COUNTERS,                     EXPORT_PERF_COUNTERS_OFF},
                {FXAA_ALLOW_ID,                               FXAA_ALLOW_STRING,                               2,  (NvU32 *) g_valuesFXAA_ALLOW,                               FXAA_ALLOW_ALLOWED},
                {FXAA_ENABLE_ID,                              FXAA_ENABLE_STRING,                              2,  (NvU32 *) g_valuesFXAA_ENABLE,                              FXAA_ENABLE_OFF},
                {FXAA_INDICATOR_ENABLE_ID,                    FXAA_INDICATOR_ENABLE_STRING,                    2,  (NvU32 *) g_valuesFXAA_INDICATOR_ENABLE,                    FXAA_INDICATOR_ENABLE_OFF},
                {MCSFRSHOWSPLIT_ID,                           MCSFRSHOWSPLIT_STRING,                           2,  (NvU32 *) g_valuesMCSFRSHOWSPLIT,                           MCSFRSHOWSPLIT_DISABLED},
                {OPTIMUS_DEBUG_ID,                            OPTIMUS_DEBUG_STRING,                            2,  (NvU32 *) g_valuesOPTIMUS_DEBUG,                            0x00000000},
                {OPTIMUS_MAXAA_ID,                            OPTIMUS_MAXAA_STRING,                            2,  (NvU32 *) g_valuesOPTIMUS_MAXAA,                            0x00000000},
                {PHYSXINDICATOR_ID,                           PHYSXINDICATOR_STRING,                           2,  (NvU32 *) g_valuesPHYSXINDICATOR,                           PHYSXINDICATOR_DISABLED},
                {PREFERRED_PSTATE_ID,                         PREFERRED_PSTATE_STRING,                         5,  (NvU32 *) g_valuesPREFERRED_PSTATE,                         PREFERRED_PSTATE_ADAPTIVE},
                {PS_FRAMERATE_LIMITER_ID,                     PS_FRAMERATE_LIMITER_STRING,                     16, (NvU32 *) g_valuesPS_FRAMERATE_LIMITER,                     PS_FRAMERATE_LIMITER_DISABLED},
                {SHIM_IGPU_TRANSCODING_ID,                    SHIM_IGPU_TRANSCODING_STRING,                    2,  (NvU32 *) g_valuesSHIM_IGPU_TRANSCODING,                    SHIM_IGPU_TRANSCODING_DISABLE},
                {SHIM_MAXRES_ID,                              SHIM_MAXRES_STRING,                              0,  NULL,                                                       0x00000000},
                {SHIM_MCCOMPAT_ID,                            SHIM_MCCOMPAT_STRING,                            8,  (NvU32 *) g_valuesSHIM_MCCOMPAT,                            SHIM_MCCOMPAT_AUTO_SELECT},
                {SHIM_RENDERING_MODE_ID,                      SHIM_RENDERING_MODE_STRING,                      8,  (NvU32 *) g_valuesSHIM_RENDERING_MODE,                      SHIM_RENDERING_MODE_AUTO_SELECT},
                {SHIM_RENDERING_OPTIONS_ID,                   SHIM_RENDERING_OPTIONS_STRING,                   19, (NvU32 *) g_valuesSHIM_RENDERING_OPTIONS,                   SHIM_RENDERING_OPTIONS_DEFAULT_RENDERING_MODE},
                {SLI_GPU_COUNT_ID,                            SLI_GPU_COUNT_STRING,                            5,  (NvU32 *) g_valuesSLI_GPU_COUNT,                            SLI_GPU_COUNT_AUTOSELECT},
                {SLI_PREDEFINED_GPU_COUNT_ID,                 SLI_PREDEFINED_GPU_COUNT_STRING,                 5,  (NvU32 *) g_valuesSLI_PREDEFINED_GPU_COUNT,                 SLI_PREDEFINED_GPU_COUNT_AUTOSELECT},
                {SLI_PREDEFINED_GPU_COUNT_DX10_ID,            SLI_PREDEFINED_GPU_COUNT_DX10_STRING,            5,  (NvU32 *) g_valuesSLI_PREDEFINED_GPU_COUNT_DX10,            SLI_PREDEFINED_GPU_COUNT_DX10_AUTOSELECT},
                {SLI_PREDEFINED_MODE_ID,                      SLI_PREDEFINED_MODE_STRING,                      6,  (NvU32 *) g_valuesSLI_PREDEFINED_MODE,                      SLI_PREDEFINED_MODE_AUTOSELECT},
                {SLI_PREDEFINED_MODE_DX10_ID,                 SLI_PREDEFINED_MODE_DX10_STRING,                 6,  (NvU32 *) g_valuesSLI_PREDEFINED_MODE_DX10,                 SLI_PREDEFINED_MODE_DX10_AUTOSELECT},
                {SLI_RENDERING_MODE_ID,                       SLI_RENDERING_MODE_STRING,                       6,  (NvU32 *) g_valuesSLI_RENDERING_MODE,                       SLI_RENDERING_MODE_AUTOSELECT},
                {VSYNC_BEHAVIOR_FLAGS_ID,                     VSYNC_BEHAVIOR_FLAGS_STRING,                     3,  (NvU32 *) g_valuesVSYNC_BEHAVIOR_FLAGS,                     VSYNC_BEHAVIOR_FLAGS_DEFAULT},
                {WKS_API_STEREO_EYES_EXCHANGE_ID,             WKS_API_STEREO_EYES_EXCHANGE_STRING,             2,  (NvU32 *) g_valuesWKS_API_STEREO_EYES_EXCHANGE,             WKS_API_STEREO_EYES_EXCHANGE_OFF},
                {WKS_API_STEREO_MODE_ID,                      WKS_API_STEREO_MODE_STRING,                      24, (NvU32 *) g_valuesWKS_API_STEREO_MODE,                      WKS_API_STEREO_MODE_SHUTTER_GLASSES},
                {WKS_FEATURE_SUPPORT_CONTROL_ID,              WKS_FEATURE_SUPPORT_CONTROL_STRING,              2,  (NvU32 *) g_valuesWKS_FEATURE_SUPPORT_CONTROL,              WKS_FEATURE_SUPPORT_CONTROL_OFF},
                {WKS_STEREO_DONGLE_SUPPORT_ID,                WKS_STEREO_DONGLE_SUPPORT_STRING,                3,  (NvU32 *) g_valuesWKS_STEREO_DONGLE_SUPPORT,                WKS_STEREO_DONGLE_SUPPORT_OFF},
                {WKS_STEREO_SUPPORT_ID,                       WKS_STEREO_SUPPORT_STRING,                       2,  (NvU32 *) g_valuesWKS_STEREO_SUPPORT,                       WKS_STEREO_SUPPORT_OFF},
                {AO_MODE_ID,                                  AO_MODE_STRING,                                  4,  (NvU32 *) g_valuesAO_MODE,                                  AO_MODE_OFF},
                {AO_MODE_ACTIVE_ID,                           AO_MODE_ACTIVE_STRING,                           2,  (NvU32 *) g_valuesAO_MODE_ACTIVE,                           AO_MODE_ACTIVE_DISABLED},
                {PRERENDERLIMIT_ID,                           PRERENDERLIMIT_STRING,                           3,  (NvU32 *) g_valuesPRERENDERLIMIT,                           PRERENDERLIMIT_APP_CONTROLLED},
                {PS_DYNAMIC_TILING_ID,                        PS_DYNAMIC_TILING_STRING,                        2,  (NvU32 *) g_valuesPS_DYNAMIC_TILING,                        PS_DYNAMIC_TILING_OFF},
                {PS_TEXFILTER_ANISO_OPTS2_ID,                 PS_TEXFILTER_ANISO_OPTS2_STRING,                 2,  (NvU32 *) g_valuesPS_TEXFILTER_ANISO_OPTS2,                 PS_TEXFILTER_ANISO_OPTS2_OFF},
                {PS_TEXFILTER_BILINEAR_IN_ANISO_ID,           PS_TEXFILTER_BILINEAR_IN_ANISO_STRING,           2,  (NvU32 *) g_valuesPS_TEXFILTER_BILINEAR_IN_ANISO,           PS_TEXFILTER_BILINEAR_IN_ANISO_OFF},
                {PS_TEXFILTER_DISABLE_TRILIN_SLOPE_ID,        PS_TEXFILTER_DISABLE_TRILIN_SLOPE_STRING,        2,  (NvU32 *) g_valuesPS_TEXFILTER_DISABLE_TRILIN_SLOPE,        PS_TEXFILTER_DISABLE_TRILIN_SLOPE_OFF},
                {PS_TEXFILTER_NO_NEG_LODBIAS_ID,              PS_TEXFILTER_NO_NEG_LODBIAS_STRING,              2,  (NvU32 *) g_valuesPS_TEXFILTER_NO_NEG_LODBIAS,              PS_TEXFILTER_NO_NEG_LODBIAS_OFF},
                {QUALITY_ENHANCEMENTS_ID,                     QUALITY_ENHANCEMENTS_STRING,                     4,  (NvU32 *) g_valuesQUALITY_ENHANCEMENTS,                     QUALITY_ENHANCEMENTS_QUALITY},
                {REFRESH_RATE_OVERRIDE_ID,                    REFRESH_RATE_OVERRIDE_STRING,                    2,  (NvU32 *) g_valuesREFRESH_RATE_OVERRIDE,                    REFRESH_RATE_OVERRIDE_APPLICATION_CONTROLLED},
                {SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_ID,   SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_STRING,   2,  (NvU32 *) g_valuesSET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE,   SET_POWER_THROTTLE_FOR_PCIe_COMPLIANCE_OFF},
                {SET_VAB_DATA_ID,                             SET_VAB_DATA_STRING,                             6,  (NvU32 *) g_valuesSET_VAB_DATA,                             SET_VAB_DATA_USE_API_DEFAULTS},
                {VSYNCMODE_ID,                                VSYNCMODE_STRING,                                6,  (NvU32 *) g_valuesVSYNCMODE,                                VSYNCMODE_PASSIVE},
                {VSYNCTEARCONTROL_ID,                         VSYNCTEARCONTROL_STRING,                         2,  (NvU32 *) g_valuesVSYNCTEARCONTROL,                         VSYNCTEARCONTROL_DISABLE},
        };

SettingWSTRINGNameString mapSettingWSTRING[TOTAL_WSTRING_SETTING_NUM] =
        {
                {OGL_IMPLICIT_GPU_AFFINITY_ID, OGL_IMPLICIT_GPU_AFFINITY_STRING, 1, (const wchar_t **) g_valuesOGL_IMPLICIT_GPU_AFFINITY, L"autoselect"},
                {CUDA_EXCLUDED_GPUS_ID,        CUDA_EXCLUDED_GPUS_STRING,        1, (const wchar_t **) g_valuesCUDA_EXCLUDED_GPUS,        L"none"},
                {D3DOGL_GPU_MAX_POWER_ID,      D3DOGL_GPU_MAX_POWER_STRING,      1, (const wchar_t **) g_valuesD3DOGL_GPU_MAX_POWER,      L"0"},
                {ICAFE_LOGO_CONFIG_ID,         ICAFE_LOGO_CONFIG_STRING,         0, NULL,                                                 L""},
        };

