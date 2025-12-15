/* ====================================================================== */
/* CALYX C BUNDLE - LLM OPTIMIZED FORMAT */
/* ====================================================================== */

/* METADATA SECTION */
const char* CALYX_METADATA = {
  "format_version": "calyx-c-1.0",
  "total_files": 97,
  "total_headers": 14,
  "layers": {
    "UTILITY": 97
  },
  "external_includes": [
    "../cJSON.c",
    "../cJSON.h",
    "../cJSON_Utils.h",
    "../examples/unity_config.h",
    "Mockstanky.h",
    "Types.h",
    "ctype.h",
    "float.h",
    "four.h",
    "funky.h",
    "limits.h",
    "locale.h",
    "math.h",
    "one.h",
    "setjmp.h",
    "somethingelse.h",
    "stanky.h",
    "stddef.h",
    "stdint.h",
    "stdio.h",
    "stdlib.h",
    "string.h",
    "three.h",
    "two.h",
    "whatever.h"
  ],
  "generated_at": "2025-12-15T08:09:58.167604Z"
};

/* ====================================================================== */
/* FILE MAP (name → metadata) */
/* ====================================================================== */
/* FILE_MAP structure would be defined here */
/* In C, we'd use an array of structs or similar */

/*
FILE MAP:
  cJSON.h:
    layer: UTILITY
    functions: []
    defines: ['cJSON__h', '__WINDOWS__', 'CJSON_CDECL', 'CJSON_STDCALL', 'CJSON_EXPORT_SYMBOLS', 'CJSON_PUBLIC', 'CJSON_PUBLIC', 'CJSON_PUBLIC', 'CJSON_CDECL', 'CJSON_STDCALL', 'CJSON_PUBLIC', 'CJSON_PUBLIC', 'CJSON_VERSION_MAJOR', 'CJSON_VERSION_MINOR', 'CJSON_VERSION_PATCH', 'cJSON_Invalid', 'cJSON_False', 'cJSON_True', 'cJSON_NULL', 'cJSON_Number', 'cJSON_String', 'cJSON_Array', 'cJSON_Object', 'cJSON_Raw', 'cJSON_IsReference', 'cJSON_StringIsConst', 'CJSON_NESTING_LIMIT', 'CJSON_CIRCULAR_LIMIT', 'cJSON_SetIntValue', 'cJSON_SetNumberValue', 'cJSON_SetBoolValue', 'cJSON_ArrayForEach']
  cJSON_Utils.h:
    layer: UTILITY
    functions: []
    defines: ['cJSON_Utils__h']
  cJSON_Utils.c:
    layer: UTILITY
    functions: ['compare_strings', 'compare_double', 'compare_pointers', 'if', 'pointer_encoded_length', 'encode_string_as_pointer', 'if', 'get_array_item', 'decode_array_index_from_pointer', 'get_item_from_pointer', 'if', 'decode_pointer_inplace', 'if', 'detach_item_from_array', 'if', 'detach_path', 'if', 'sort_list', 'sort_object', 'compare_json', 'insert_item_in_array', 'get_object_item', 'decode_patch_operation', 'overwrite_item', 'apply_patch', 'if', 'if', 'if', 'compose_patch', 'create_patches', 'if', 'if', 'merge_patch', 'generate_merge_patch', 'if']
    defines: ['_CRT_SECURE_NO_DEPRECATE', 'true', 'false']
    header: cJSON_Utils.h
  cJSON.c:
    layer: UTILITY
    functions: ['case_insensitive_strcmp', 'internal_free', 'cJSON_New_Item', 'get_decimal_point', 'parse_number', 'if', 'if', 'update_offset', 'compare_double', 'print_number', 'if', 'parse_hex4', 'if', 'if', 'utf16_literal_to_utf8', 'if', 'if', 'if', 'parse_string', 'print_string_ptr', 'print_string', 'buffer_skip_whitespace', 'skip_utf8_bom', 'if', 'print', 'parse_value', 'print_value', 'parse_array', 'print_array', 'parse_object', 'print_object', 'get_object_item', 'suffix_object', 'create_reference', 'add_item_to_array', 'add_item_to_object', 'if', 'replace_item_in_object', 'if', 'cJSON_Duplicate_rec', 'skip_oneline_comment', 'skip_multiline_comment', 'minify_string', 'if']
    defines: ['_CRT_SECURE_NO_DEPRECATE', 'true', 'false', 'isinf', 'isnan', 'NAN', 'NAN', 'internal_malloc', 'internal_free', 'internal_realloc', 'static_strlen', 'can_read', 'can_access_at_index', 'cannot_access_at_index', 'buffer_at_offset', 'cjson_min']
    header: cJSON.h
  test.c:
    layer: UTILITY
    functions: ['print_preallocated', 'create_objects', 'main']
    defines: []
  fuzzing/fuzz_main.c:
    layer: UTILITY
    functions: ['main']
    defines: []
  fuzzing/afl.c:
    layer: UTILITY
    functions: ['read_file', 'main']
    defines: []
  fuzzing/cjson_read_fuzzer.c:
    layer: UTILITY
    functions: ['LLVMFuzzerTestOneInput']
    defines: []
  tests/unity/src/unity_internals.h:
    layer: UTILITY
    functions: []
    defines: ['UNITY_INTERNALS_H', 'UNITY_INT_WIDTH', 'UNITY_INT_WIDTH', 'UNITY_INT_WIDTH', 'UNITY_INT_WIDTH', 'UNITY_LONG_WIDTH', 'UNITY_LONG_WIDTH', 'UNITY_LONG_WIDTH', 'UNITY_LONG_WIDTH', 'UNITY_POINTER_WIDTH', 'UNITY_POINTER_WIDTH', 'UNITY_POINTER_WIDTH', 'UNITY_POINTER_WIDTH', 'UNITY_SUPPORT_64', 'UNITY_PTR_TO_INT', 'UNITY_DISPLAY_STYLE_POINTER', 'UNITY_PTR_TO_INT', 'UNITY_DISPLAY_STYLE_POINTER', 'UNITY_PTR_TO_INT', 'UNITY_DISPLAY_STYLE_POINTER', 'UNITY_PTR_ATTRIBUTE', 'UNITY_INTERNAL_PTR', 'UNITY_EXCLUDE_DOUBLE', 'UNITY_EXCLUDE_FLOAT_PRINT', 'UNITY_FLOAT_PRECISION', 'UNITY_FLOAT_TYPE', 'isinf', 'isnan', 'UNITY_EXCLUDE_DOUBLE', 'UNITY_DOUBLE_TYPE', 'UNITY_DOUBLE_PRECISION', 'UNITY_DOUBLE_TYPE', 'UNITY_OUTPUT_CHAR', 'UNITY_OUTPUT_FLUSH', 'UNITY_OUTPUT_FLUSH', 'UNITY_FLUSH_CALL', 'UNITY_FLUSH_CALL', 'UNITY_PRINT_EOL', 'UNITY_OUTPUT_START', 'UNITY_OUTPUT_COMPLETE', 'UNITY_LINE_TYPE', 'UNITY_COUNTER_TYPE', 'UNITY_WEAK_ATTRIBUTE', 'UNITY_DISPLAY_RANGE_INT', 'UNITY_DISPLAY_RANGE_UINT', 'UNITY_DISPLAY_RANGE_HEX', 'UNITY_CLR_DETAILS', 'UNITY_SET_DETAIL', 'UNITY_SET_DETAILS', 'UNITY_CLR_DETAILS', 'UNITY_SET_DETAIL', 'UNITY_SET_DETAILS', 'UNITY_DETAIL1_NAME', 'UNITY_DETAIL2_NAME', 'TEST_PROTECT', 'TEST_ABORT', 'TEST_PROTECT', 'TEST_ABORT', 'RUN_TEST', 'RUN_TEST_FIRST', 'RUN_TEST_FIRST_HELPER', 'RUN_TEST_SECOND', 'RUN_TEST_SECOND_HELPER', 'RUN_TEST', 'RUN_TEST', 'TEST_LINE_NUM', 'TEST_IS_IGNORED', 'UNITY_NEW_TEST', 'UNITY_BEGIN', 'UNITY_END', 'UNITY_TEST_FAIL', 'UNITY_TEST_IGNORE', 'UNITY_TEST_ASSERT', 'UNITY_TEST_ASSERT_NULL', 'UNITY_TEST_ASSERT_NOT_NULL', 'UNITY_TEST_ASSERT_EQUAL_INT', 'UNITY_TEST_ASSERT_EQUAL_INT8', 'UNITY_TEST_ASSERT_EQUAL_INT16', 'UNITY_TEST_ASSERT_EQUAL_INT32', 'UNITY_TEST_ASSERT_EQUAL_UINT', 'UNITY_TEST_ASSERT_EQUAL_UINT8', 'UNITY_TEST_ASSERT_EQUAL_UINT16', 'UNITY_TEST_ASSERT_EQUAL_UINT32', 'UNITY_TEST_ASSERT_EQUAL_HEX8', 'UNITY_TEST_ASSERT_EQUAL_HEX16', 'UNITY_TEST_ASSERT_EQUAL_HEX32', 'UNITY_TEST_ASSERT_BITS', 'UNITY_TEST_ASSERT_GREATER_THAN_INT', 'UNITY_TEST_ASSERT_GREATER_THAN_INT8', 'UNITY_TEST_ASSERT_GREATER_THAN_INT16', 'UNITY_TEST_ASSERT_GREATER_THAN_INT32', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT8', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT16', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT32', 'UNITY_TEST_ASSERT_GREATER_THAN_HEX8', 'UNITY_TEST_ASSERT_GREATER_THAN_HEX16', 'UNITY_TEST_ASSERT_GREATER_THAN_HEX32', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT8', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT16', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT32', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT8', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT16', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT32', 'UNITY_TEST_ASSERT_SMALLER_THAN_HEX8', 'UNITY_TEST_ASSERT_SMALLER_THAN_HEX16', 'UNITY_TEST_ASSERT_SMALLER_THAN_HEX32', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT8', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT16', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT32', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT8', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT16', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT32', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX8', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX16', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX32', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT8', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT16', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT32', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT8', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT16', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT32', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX8', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX16', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX32', 'UNITY_TEST_ASSERT_INT_WITHIN', 'UNITY_TEST_ASSERT_INT8_WITHIN', 'UNITY_TEST_ASSERT_INT16_WITHIN', 'UNITY_TEST_ASSERT_INT32_WITHIN', 'UNITY_TEST_ASSERT_UINT_WITHIN', 'UNITY_TEST_ASSERT_UINT8_WITHIN', 'UNITY_TEST_ASSERT_UINT16_WITHIN', 'UNITY_TEST_ASSERT_UINT32_WITHIN', 'UNITY_TEST_ASSERT_HEX8_WITHIN', 'UNITY_TEST_ASSERT_HEX16_WITHIN', 'UNITY_TEST_ASSERT_HEX32_WITHIN', 'UNITY_TEST_ASSERT_EQUAL_PTR', 'UNITY_TEST_ASSERT_EQUAL_STRING', 'UNITY_TEST_ASSERT_EQUAL_STRING_LEN', 'UNITY_TEST_ASSERT_EQUAL_MEMORY', 'UNITY_TEST_ASSERT_EQUAL_INT_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_INT8_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_INT16_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_INT32_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT8_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT16_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT32_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_HEX16_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_PTR_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_STRING_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_INT', 'UNITY_TEST_ASSERT_EACH_EQUAL_INT8', 'UNITY_TEST_ASSERT_EACH_EQUAL_INT16', 'UNITY_TEST_ASSERT_EACH_EQUAL_INT32', 'UNITY_TEST_ASSERT_EACH_EQUAL_UINT', 'UNITY_TEST_ASSERT_EACH_EQUAL_UINT8', 'UNITY_TEST_ASSERT_EACH_EQUAL_UINT16', 'UNITY_TEST_ASSERT_EACH_EQUAL_UINT32', 'UNITY_TEST_ASSERT_EACH_EQUAL_HEX8', 'UNITY_TEST_ASSERT_EACH_EQUAL_HEX16', 'UNITY_TEST_ASSERT_EACH_EQUAL_HEX32', 'UNITY_TEST_ASSERT_EACH_EQUAL_PTR', 'UNITY_TEST_ASSERT_EACH_EQUAL_STRING', 'UNITY_TEST_ASSERT_EACH_EQUAL_MEMORY', 'UNITY_TEST_ASSERT_EQUAL_INT64', 'UNITY_TEST_ASSERT_EQUAL_UINT64', 'UNITY_TEST_ASSERT_EQUAL_HEX64', 'UNITY_TEST_ASSERT_EQUAL_INT64_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT64_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_HEX64_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_INT64', 'UNITY_TEST_ASSERT_EACH_EQUAL_UINT64', 'UNITY_TEST_ASSERT_EACH_EQUAL_HEX64', 'UNITY_TEST_ASSERT_INT64_WITHIN', 'UNITY_TEST_ASSERT_UINT64_WITHIN', 'UNITY_TEST_ASSERT_HEX64_WITHIN', 'UNITY_TEST_ASSERT_GREATER_THAN_INT64', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT64', 'UNITY_TEST_ASSERT_GREATER_THAN_HEX64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX64', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT64', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT64', 'UNITY_TEST_ASSERT_SMALLER_THAN_HEX64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX64', 'UNITY_TEST_ASSERT_EQUAL_INT64', 'UNITY_TEST_ASSERT_EQUAL_UINT64', 'UNITY_TEST_ASSERT_EQUAL_HEX64', 'UNITY_TEST_ASSERT_EQUAL_INT64_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_UINT64_ARRAY', 'UNITY_TEST_ASSERT_EQUAL_HEX64_ARRAY', 'UNITY_TEST_ASSERT_INT64_WITHIN', 'UNITY_TEST_ASSERT_UINT64_WITHIN', 'UNITY_TEST_ASSERT_HEX64_WITHIN', 'UNITY_TEST_ASSERT_GREATER_THAN_INT64', 'UNITY_TEST_ASSERT_GREATER_THAN_UINT64', 'UNITY_TEST_ASSERT_GREATER_THAN_HEX64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT64', 'UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX64', 'UNITY_TEST_ASSERT_SMALLER_THAN_INT64', 'UNITY_TEST_ASSERT_SMALLER_THAN_UINT64', 'UNITY_TEST_ASSERT_SMALLER_THAN_HEX64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT64', 'UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX64', 'UNITY_TEST_ASSERT_FLOAT_WITHIN', 'UNITY_TEST_ASSERT_EQUAL_FLOAT', 'UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_FLOAT', 'UNITY_TEST_ASSERT_FLOAT_IS_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NEG_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NAN', 'UNITY_TEST_ASSERT_FLOAT_IS_DETERMINATE', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_NEG_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE', 'UNITY_TEST_ASSERT_FLOAT_WITHIN', 'UNITY_TEST_ASSERT_EQUAL_FLOAT', 'UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_FLOAT', 'UNITY_TEST_ASSERT_FLOAT_IS_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NEG_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NAN', 'UNITY_TEST_ASSERT_FLOAT_IS_DETERMINATE', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_NEG_INF', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN', 'UNITY_TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE', 'UNITY_TEST_ASSERT_DOUBLE_WITHIN', 'UNITY_TEST_ASSERT_EQUAL_DOUBLE', 'UNITY_TEST_ASSERT_EQUAL_DOUBLE_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_DOUBLE', 'UNITY_TEST_ASSERT_DOUBLE_IS_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NEG_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NAN', 'UNITY_TEST_ASSERT_DOUBLE_IS_DETERMINATE', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NAN', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE', 'UNITY_TEST_ASSERT_DOUBLE_WITHIN', 'UNITY_TEST_ASSERT_EQUAL_DOUBLE', 'UNITY_TEST_ASSERT_EQUAL_DOUBLE_ARRAY', 'UNITY_TEST_ASSERT_EACH_EQUAL_DOUBLE', 'UNITY_TEST_ASSERT_DOUBLE_IS_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NEG_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NAN', 'UNITY_TEST_ASSERT_DOUBLE_IS_DETERMINATE', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NAN', 'UNITY_TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE']
  tests/unity/src/unity.h:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'suiteSetUp', 'suiteTearDown', 'setUp', 'tearDown', 'suiteSetUp', 'suiteTearDown']
    defines: ['UNITY_FRAMEWORK_H', 'UNITY', 'TEST_FAIL_MESSAGE', 'TEST_FAIL', 'TEST_IGNORE_MESSAGE', 'TEST_IGNORE', 'TEST_ONLY', 'TEST_PASS', 'TEST_FILE', 'TEST_ASSERT', 'TEST_ASSERT_TRUE', 'TEST_ASSERT_UNLESS', 'TEST_ASSERT_FALSE', 'TEST_ASSERT_NULL', 'TEST_ASSERT_NOT_NULL', 'TEST_ASSERT_EQUAL_INT', 'TEST_ASSERT_EQUAL_INT8', 'TEST_ASSERT_EQUAL_INT16', 'TEST_ASSERT_EQUAL_INT32', 'TEST_ASSERT_EQUAL_INT64', 'TEST_ASSERT_EQUAL', 'TEST_ASSERT_NOT_EQUAL', 'TEST_ASSERT_EQUAL_UINT', 'TEST_ASSERT_EQUAL_UINT8', 'TEST_ASSERT_EQUAL_UINT16', 'TEST_ASSERT_EQUAL_UINT32', 'TEST_ASSERT_EQUAL_UINT64', 'TEST_ASSERT_EQUAL_HEX', 'TEST_ASSERT_EQUAL_HEX8', 'TEST_ASSERT_EQUAL_HEX16', 'TEST_ASSERT_EQUAL_HEX32', 'TEST_ASSERT_EQUAL_HEX64', 'TEST_ASSERT_BITS', 'TEST_ASSERT_BITS_HIGH', 'TEST_ASSERT_BITS_LOW', 'TEST_ASSERT_BIT_HIGH', 'TEST_ASSERT_BIT_LOW', 'TEST_ASSERT_GREATER_THAN', 'TEST_ASSERT_GREATER_THAN_INT', 'TEST_ASSERT_GREATER_THAN_INT8', 'TEST_ASSERT_GREATER_THAN_INT16', 'TEST_ASSERT_GREATER_THAN_INT32', 'TEST_ASSERT_GREATER_THAN_INT64', 'TEST_ASSERT_GREATER_THAN_UINT', 'TEST_ASSERT_GREATER_THAN_UINT8', 'TEST_ASSERT_GREATER_THAN_UINT16', 'TEST_ASSERT_GREATER_THAN_UINT32', 'TEST_ASSERT_GREATER_THAN_UINT64', 'TEST_ASSERT_GREATER_THAN_HEX8', 'TEST_ASSERT_GREATER_THAN_HEX16', 'TEST_ASSERT_GREATER_THAN_HEX32', 'TEST_ASSERT_GREATER_THAN_HEX64', 'TEST_ASSERT_LESS_THAN', 'TEST_ASSERT_LESS_THAN_INT', 'TEST_ASSERT_LESS_THAN_INT8', 'TEST_ASSERT_LESS_THAN_INT16', 'TEST_ASSERT_LESS_THAN_INT32', 'TEST_ASSERT_LESS_THAN_INT64', 'TEST_ASSERT_LESS_THAN_UINT', 'TEST_ASSERT_LESS_THAN_UINT8', 'TEST_ASSERT_LESS_THAN_UINT16', 'TEST_ASSERT_LESS_THAN_UINT32', 'TEST_ASSERT_LESS_THAN_UINT64', 'TEST_ASSERT_LESS_THAN_HEX8', 'TEST_ASSERT_LESS_THAN_HEX16', 'TEST_ASSERT_LESS_THAN_HEX32', 'TEST_ASSERT_LESS_THAN_HEX64', 'TEST_ASSERT_GREATER_OR_EQUAL', 'TEST_ASSERT_GREATER_OR_EQUAL_INT', 'TEST_ASSERT_GREATER_OR_EQUAL_INT8', 'TEST_ASSERT_GREATER_OR_EQUAL_INT16', 'TEST_ASSERT_GREATER_OR_EQUAL_INT32', 'TEST_ASSERT_GREATER_OR_EQUAL_INT64', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT8', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT16', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT32', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT64', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX8', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX16', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX32', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX64', 'TEST_ASSERT_LESS_OR_EQUAL', 'TEST_ASSERT_LESS_OR_EQUAL_INT', 'TEST_ASSERT_LESS_OR_EQUAL_INT8', 'TEST_ASSERT_LESS_OR_EQUAL_INT16', 'TEST_ASSERT_LESS_OR_EQUAL_INT32', 'TEST_ASSERT_LESS_OR_EQUAL_INT64', 'TEST_ASSERT_LESS_OR_EQUAL_UINT', 'TEST_ASSERT_LESS_OR_EQUAL_UINT8', 'TEST_ASSERT_LESS_OR_EQUAL_UINT16', 'TEST_ASSERT_LESS_OR_EQUAL_UINT32', 'TEST_ASSERT_LESS_OR_EQUAL_UINT64', 'TEST_ASSERT_LESS_OR_EQUAL_HEX8', 'TEST_ASSERT_LESS_OR_EQUAL_HEX16', 'TEST_ASSERT_LESS_OR_EQUAL_HEX32', 'TEST_ASSERT_LESS_OR_EQUAL_HEX64', 'TEST_ASSERT_INT_WITHIN', 'TEST_ASSERT_INT8_WITHIN', 'TEST_ASSERT_INT16_WITHIN', 'TEST_ASSERT_INT32_WITHIN', 'TEST_ASSERT_INT64_WITHIN', 'TEST_ASSERT_UINT_WITHIN', 'TEST_ASSERT_UINT8_WITHIN', 'TEST_ASSERT_UINT16_WITHIN', 'TEST_ASSERT_UINT32_WITHIN', 'TEST_ASSERT_UINT64_WITHIN', 'TEST_ASSERT_HEX_WITHIN', 'TEST_ASSERT_HEX8_WITHIN', 'TEST_ASSERT_HEX16_WITHIN', 'TEST_ASSERT_HEX32_WITHIN', 'TEST_ASSERT_HEX64_WITHIN', 'TEST_ASSERT_EQUAL_PTR', 'TEST_ASSERT_EQUAL_STRING', 'TEST_ASSERT_EQUAL_STRING_LEN', 'TEST_ASSERT_EQUAL_MEMORY', 'TEST_ASSERT_EQUAL_INT_ARRAY', 'TEST_ASSERT_EQUAL_INT8_ARRAY', 'TEST_ASSERT_EQUAL_INT16_ARRAY', 'TEST_ASSERT_EQUAL_INT32_ARRAY', 'TEST_ASSERT_EQUAL_INT64_ARRAY', 'TEST_ASSERT_EQUAL_UINT_ARRAY', 'TEST_ASSERT_EQUAL_UINT8_ARRAY', 'TEST_ASSERT_EQUAL_UINT16_ARRAY', 'TEST_ASSERT_EQUAL_UINT32_ARRAY', 'TEST_ASSERT_EQUAL_UINT64_ARRAY', 'TEST_ASSERT_EQUAL_HEX_ARRAY', 'TEST_ASSERT_EQUAL_HEX8_ARRAY', 'TEST_ASSERT_EQUAL_HEX16_ARRAY', 'TEST_ASSERT_EQUAL_HEX32_ARRAY', 'TEST_ASSERT_EQUAL_HEX64_ARRAY', 'TEST_ASSERT_EQUAL_PTR_ARRAY', 'TEST_ASSERT_EQUAL_STRING_ARRAY', 'TEST_ASSERT_EQUAL_MEMORY_ARRAY', 'TEST_ASSERT_EACH_EQUAL_INT', 'TEST_ASSERT_EACH_EQUAL_INT8', 'TEST_ASSERT_EACH_EQUAL_INT16', 'TEST_ASSERT_EACH_EQUAL_INT32', 'TEST_ASSERT_EACH_EQUAL_INT64', 'TEST_ASSERT_EACH_EQUAL_UINT', 'TEST_ASSERT_EACH_EQUAL_UINT8', 'TEST_ASSERT_EACH_EQUAL_UINT16', 'TEST_ASSERT_EACH_EQUAL_UINT32', 'TEST_ASSERT_EACH_EQUAL_UINT64', 'TEST_ASSERT_EACH_EQUAL_HEX', 'TEST_ASSERT_EACH_EQUAL_HEX8', 'TEST_ASSERT_EACH_EQUAL_HEX16', 'TEST_ASSERT_EACH_EQUAL_HEX32', 'TEST_ASSERT_EACH_EQUAL_HEX64', 'TEST_ASSERT_EACH_EQUAL_PTR', 'TEST_ASSERT_EACH_EQUAL_STRING', 'TEST_ASSERT_EACH_EQUAL_MEMORY', 'TEST_ASSERT_FLOAT_WITHIN', 'TEST_ASSERT_EQUAL_FLOAT', 'TEST_ASSERT_EQUAL_FLOAT_ARRAY', 'TEST_ASSERT_EACH_EQUAL_FLOAT', 'TEST_ASSERT_FLOAT_IS_INF', 'TEST_ASSERT_FLOAT_IS_NEG_INF', 'TEST_ASSERT_FLOAT_IS_NAN', 'TEST_ASSERT_FLOAT_IS_DETERMINATE', 'TEST_ASSERT_FLOAT_IS_NOT_INF', 'TEST_ASSERT_FLOAT_IS_NOT_NEG_INF', 'TEST_ASSERT_FLOAT_IS_NOT_NAN', 'TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE', 'TEST_ASSERT_DOUBLE_WITHIN', 'TEST_ASSERT_EQUAL_DOUBLE', 'TEST_ASSERT_EQUAL_DOUBLE_ARRAY', 'TEST_ASSERT_EACH_EQUAL_DOUBLE', 'TEST_ASSERT_DOUBLE_IS_INF', 'TEST_ASSERT_DOUBLE_IS_NEG_INF', 'TEST_ASSERT_DOUBLE_IS_NAN', 'TEST_ASSERT_DOUBLE_IS_DETERMINATE', 'TEST_ASSERT_DOUBLE_IS_NOT_INF', 'TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF', 'TEST_ASSERT_DOUBLE_IS_NOT_NAN', 'TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE', 'TEST_ASSERT_MESSAGE', 'TEST_ASSERT_TRUE_MESSAGE', 'TEST_ASSERT_UNLESS_MESSAGE', 'TEST_ASSERT_FALSE_MESSAGE', 'TEST_ASSERT_NULL_MESSAGE', 'TEST_ASSERT_NOT_NULL_MESSAGE', 'TEST_ASSERT_EQUAL_INT_MESSAGE', 'TEST_ASSERT_EQUAL_INT8_MESSAGE', 'TEST_ASSERT_EQUAL_INT16_MESSAGE', 'TEST_ASSERT_EQUAL_INT32_MESSAGE', 'TEST_ASSERT_EQUAL_INT64_MESSAGE', 'TEST_ASSERT_EQUAL_MESSAGE', 'TEST_ASSERT_NOT_EQUAL_MESSAGE', 'TEST_ASSERT_EQUAL_UINT_MESSAGE', 'TEST_ASSERT_EQUAL_UINT8_MESSAGE', 'TEST_ASSERT_EQUAL_UINT16_MESSAGE', 'TEST_ASSERT_EQUAL_UINT32_MESSAGE', 'TEST_ASSERT_EQUAL_UINT64_MESSAGE', 'TEST_ASSERT_EQUAL_HEX_MESSAGE', 'TEST_ASSERT_EQUAL_HEX8_MESSAGE', 'TEST_ASSERT_EQUAL_HEX16_MESSAGE', 'TEST_ASSERT_EQUAL_HEX32_MESSAGE', 'TEST_ASSERT_EQUAL_HEX64_MESSAGE', 'TEST_ASSERT_BITS_MESSAGE', 'TEST_ASSERT_BITS_HIGH_MESSAGE', 'TEST_ASSERT_BITS_LOW_MESSAGE', 'TEST_ASSERT_BIT_HIGH_MESSAGE', 'TEST_ASSERT_BIT_LOW_MESSAGE', 'TEST_ASSERT_GREATER_THAN_MESSAGE', 'TEST_ASSERT_GREATER_THAN_INT_MESSAGE', 'TEST_ASSERT_GREATER_THAN_INT8_MESSAGE', 'TEST_ASSERT_GREATER_THAN_INT16_MESSAGE', 'TEST_ASSERT_GREATER_THAN_INT32_MESSAGE', 'TEST_ASSERT_GREATER_THAN_INT64_MESSAGE', 'TEST_ASSERT_GREATER_THAN_UINT_MESSAGE', 'TEST_ASSERT_GREATER_THAN_UINT8_MESSAGE', 'TEST_ASSERT_GREATER_THAN_UINT16_MESSAGE', 'TEST_ASSERT_GREATER_THAN_UINT32_MESSAGE', 'TEST_ASSERT_GREATER_THAN_UINT64_MESSAGE', 'TEST_ASSERT_GREATER_THAN_HEX8_MESSAGE', 'TEST_ASSERT_GREATER_THAN_HEX16_MESSAGE', 'TEST_ASSERT_GREATER_THAN_HEX32_MESSAGE', 'TEST_ASSERT_GREATER_THAN_HEX64_MESSAGE', 'TEST_ASSERT_LESS_THAN_MESSAGE', 'TEST_ASSERT_LESS_THAN_INT_MESSAGE', 'TEST_ASSERT_LESS_THAN_INT8_MESSAGE', 'TEST_ASSERT_LESS_THAN_INT16_MESSAGE', 'TEST_ASSERT_LESS_THAN_INT32_MESSAGE', 'TEST_ASSERT_LESS_THAN_INT64_MESSAGE', 'TEST_ASSERT_LESS_THAN_UINT_MESSAGE', 'TEST_ASSERT_LESS_THAN_UINT8_MESSAGE', 'TEST_ASSERT_LESS_THAN_UINT16_MESSAGE', 'TEST_ASSERT_LESS_THAN_UINT32_MESSAGE', 'TEST_ASSERT_LESS_THAN_UINT64_MESSAGE', 'TEST_ASSERT_LESS_THAN_HEX8_MESSAGE', 'TEST_ASSERT_LESS_THAN_HEX16_MESSAGE', 'TEST_ASSERT_LESS_THAN_HEX32_MESSAGE', 'TEST_ASSERT_LESS_THAN_HEX64_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_INT_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_INT8_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_INT16_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_INT32_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_INT64_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT8_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT16_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT32_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_UINT64_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX8_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX16_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX32_MESSAGE', 'TEST_ASSERT_GREATER_OR_EQUAL_HEX64_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_INT_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_INT8_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_INT16_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_INT32_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_INT64_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_UINT_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_UINT8_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_UINT16_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_UINT32_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_UINT64_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_HEX8_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_HEX16_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_HEX32_MESSAGE', 'TEST_ASSERT_LESS_OR_EQUAL_HEX64_MESSAGE', 'TEST_ASSERT_INT_WITHIN_MESSAGE', 'TEST_ASSERT_INT8_WITHIN_MESSAGE', 'TEST_ASSERT_INT16_WITHIN_MESSAGE', 'TEST_ASSERT_INT32_WITHIN_MESSAGE', 'TEST_ASSERT_INT64_WITHIN_MESSAGE', 'TEST_ASSERT_UINT_WITHIN_MESSAGE', 'TEST_ASSERT_UINT8_WITHIN_MESSAGE', 'TEST_ASSERT_UINT16_WITHIN_MESSAGE', 'TEST_ASSERT_UINT32_WITHIN_MESSAGE', 'TEST_ASSERT_UINT64_WITHIN_MESSAGE', 'TEST_ASSERT_HEX_WITHIN_MESSAGE', 'TEST_ASSERT_HEX8_WITHIN_MESSAGE', 'TEST_ASSERT_HEX16_WITHIN_MESSAGE', 'TEST_ASSERT_HEX32_WITHIN_MESSAGE', 'TEST_ASSERT_HEX64_WITHIN_MESSAGE', 'TEST_ASSERT_EQUAL_PTR_MESSAGE', 'TEST_ASSERT_EQUAL_STRING_MESSAGE', 'TEST_ASSERT_EQUAL_STRING_LEN_MESSAGE', 'TEST_ASSERT_EQUAL_MEMORY_MESSAGE', 'TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_INT8_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_INT16_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_INT32_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_INT64_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_UINT_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_UINT8_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_UINT16_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_UINT32_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_UINT64_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_HEX_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_HEX8_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_HEX16_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_HEX32_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_HEX64_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_PTR_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_STRING_ARRAY_MESSAGE', 'TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_INT_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_INT8_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_INT16_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_INT32_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_INT64_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_UINT_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_UINT8_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_UINT16_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_UINT32_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_UINT64_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_HEX_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_HEX8_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_HEX16_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_HEX32_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_HEX64_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_PTR_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_STRING_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_MEMORY_MESSAGE', 'TEST_ASSERT_FLOAT_WITHIN_MESSAGE', 'TEST_ASSERT_EQUAL_FLOAT_MESSAGE', 'TEST_ASSERT_EQUAL_FLOAT_ARRAY_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_FLOAT_MESSAGE', 'TEST_ASSERT_FLOAT_IS_INF_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NEG_INF_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NAN_MESSAGE', 'TEST_ASSERT_FLOAT_IS_DETERMINATE_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NOT_INF_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NOT_NEG_INF_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NOT_NAN_MESSAGE', 'TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE_MESSAGE', 'TEST_ASSERT_DOUBLE_WITHIN_MESSAGE', 'TEST_ASSERT_EQUAL_DOUBLE_MESSAGE', 'TEST_ASSERT_EQUAL_DOUBLE_ARRAY_MESSAGE', 'TEST_ASSERT_EACH_EQUAL_DOUBLE_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_INF_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NEG_INF_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NAN_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_DETERMINATE_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NOT_INF_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NOT_NAN_MESSAGE', 'TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE_MESSAGE']
  tests/unity/examples/unity_config.h:
    layer: UTILITY
    functions: []
    defines: ['UNITY_CONFIG_H', 'UNITY_INCLUDE_DOUBLE']
  tests/common.h:
    layer: UTILITY
    functions: ['reset']
    defines: ['CJSON_TESTS_COMMON_H', 'assert_has_type', 'assert_has_no_reference', 'assert_has_no_const_string', 'assert_has_valuestring', 'assert_has_no_valuestring', 'assert_has_string', 'assert_has_no_string', 'assert_not_in_list', 'assert_has_child', 'assert_has_no_child', 'assert_is_invalid']
  tests/minify_tests.c:
    layer: UTILITY
    functions: ['cjson_minify_should_not_overflow_buffer', 'cjson_minify_should_not_modify_strings', 'cjson_minify_should_minify_json', 'cjson_minify_should_not_loop_infinitely', 'main']
    defines: []
  tests/parse_number.c:
    layer: UTILITY
    functions: ['assert_is_number', 'assert_parse_number', 'assert_parse_big_number', 'parse_number_should_parse_zero', 'parse_number_should_parse_negative_integers', 'parse_number_should_parse_positive_integers', 'parse_number_should_parse_positive_reals', 'parse_number_should_parse_negative_reals', 'parse_number_should_parse_big_numbers', 'main']
    defines: []
  tests/old_utils_tests.c:
    layer: UTILITY
    functions: ['json_pointer_tests', 'misc_tests', 'sort_tests', 'merge_tests', 'generate_merge_tests', 'main']
    defines: []
  tests/print_value.c:
    layer: UTILITY
    functions: ['assert_print_value', 'print_value_should_print_null', 'print_value_should_print_true', 'print_value_should_print_false', 'print_value_should_print_number', 'print_value_should_print_string', 'print_value_should_print_array', 'print_value_should_print_object', 'main']
    defines: []
  tests/parse_with_opts.c:
    layer: UTILITY
    functions: ['parse_with_opts_should_handle_null', 'parse_with_opts_should_handle_empty_strings', 'parse_with_opts_should_handle_incomplete_json', 'parse_with_opts_should_require_null_if_requested', 'parse_with_opts_should_return_parse_end', 'parse_with_opts_should_parse_utf8_bom', 'main']
    defines: []
  tests/parse_array.c:
    layer: UTILITY
    functions: ['assert_is_array', 'assert_not_array', 'assert_parse_array', 'parse_array_should_parse_empty_arrays', 'parse_array_should_parse_arrays_with_one_element', 'parse_array_should_parse_arrays_with_multiple_elements', 'parse_array_should_not_parse_non_arrays', 'main']
    defines: []
  tests/print_array.c:
    layer: UTILITY
    functions: ['assert_print_array', 'print_array_should_print_empty_arrays', 'print_array_should_print_arrays_with_one_element', 'print_array_should_print_arrays_with_multiple_elements', 'main']
    defines: []
  tests/parse_hex4.c:
    layer: UTILITY
    functions: ['parse_hex4_should_parse_all_combinations', 'parse_hex4_should_parse_mixed_case', 'main']
    defines: []
  tests/misc_utils_tests.c:
    layer: UTILITY
    functions: ['cjson_utils_functions_shouldnt_crash_with_null_pointers', 'main']
    defines: []
  tests/cjson_add.c:
    layer: UTILITY
    functions: ['normal_free', 'cjson_add_null_should_add_null', 'cjson_add_null_should_fail_with_null_pointers', 'cjson_add_null_should_fail_on_allocation_failure', 'cjson_add_true_should_add_true', 'cjson_add_true_should_fail_with_null_pointers', 'cjson_add_true_should_fail_on_allocation_failure', 'cjson_create_int_array_should_fail_on_allocation_failure', 'cjson_create_float_array_should_fail_on_allocation_failure', 'cjson_create_double_array_should_fail_on_allocation_failure', 'cjson_create_string_array_should_fail_on_allocation_failure', 'cjson_add_false_should_add_false', 'cjson_add_false_should_fail_with_null_pointers', 'cjson_add_false_should_fail_on_allocation_failure', 'cjson_add_bool_should_add_bool', 'cjson_add_bool_should_fail_with_null_pointers', 'cjson_add_bool_should_fail_on_allocation_failure', 'cjson_add_number_should_add_number', 'cjson_add_number_should_fail_with_null_pointers', 'cjson_add_number_should_fail_on_allocation_failure', 'cjson_add_string_should_add_string', 'cjson_add_string_should_fail_with_null_pointers', 'cjson_add_string_should_fail_on_allocation_failure', 'cjson_add_raw_should_add_raw', 'cjson_add_raw_should_fail_with_null_pointers', 'cjson_add_raw_should_fail_on_allocation_failure', 'cJSON_add_object_should_add_object', 'cjson_add_object_should_fail_with_null_pointers', 'cjson_add_object_should_fail_on_allocation_failure', 'cJSON_add_array_should_add_array', 'cjson_add_array_should_fail_with_null_pointers', 'cjson_add_array_should_fail_on_allocation_failure', 'main']
    defines: []
  tests/print_string.c:
    layer: UTILITY
    functions: ['assert_print_string', 'print_string_should_print_empty_strings', 'print_string_should_print_ascii', 'print_string_should_print_utf8', 'main']
    defines: []
  tests/json_patch_tests.c:
    layer: UTILITY
    functions: ['parse_test_file', 'test_apply_patch', 'test_generate_test', 'cjson_utils_should_pass_json_patch_test_tests', 'cjson_utils_should_pass_json_patch_test_spec_tests', 'cjson_utils_should_pass_json_patch_test_cjson_utils_tests', 'main']
    defines: []
  tests/compare_tests.c:
    layer: UTILITY
    functions: ['compare_from_string', 'cjson_compare_should_compare_null_pointer_as_not_equal', 'cjson_compare_should_compare_invalid_as_not_equal', 'cjson_compare_should_compare_numbers', 'cjson_compare_should_compare_booleans', 'cjson_compare_should_compare_null', 'cjson_compare_should_not_accept_invalid_types', 'cjson_compare_should_compare_strings', 'cjson_compare_should_compare_raw', 'cjson_compare_should_compare_arrays', 'cjson_compare_should_compare_objects', 'main']
    defines: []
  tests/readme_examples.c:
    layer: UTILITY
    functions: ['create_monitor_with_helpers', 'supports_full_hd', 'create_monitor_should_create_a_monitor', 'create_monitor_with_helpers_should_create_a_monitor', 'supports_full_hd_should_check_for_full_hd_support', 'main']
    defines: []
  tests/misc_tests.c:
    layer: UTILITY
    functions: ['cjson_array_foreach_should_loop_over_arrays', 'cjson_array_foreach_should_not_dereference_null_pointer', 'cjson_get_object_item_should_get_object_items', 'cjson_get_object_item_case_sensitive_should_get_object_items', 'cjson_get_object_item_should_not_crash_with_array', 'cjson_get_object_item_case_sensitive_should_not_crash_with_array', 'typecheck_functions_should_check_type', 'cjson_should_not_parse_to_deeply_nested_jsons', 'cjson_should_not_follow_too_deep_circular_references', 'cjson_set_number_value_should_set_numbers', 'cjson_detach_item_via_pointer_should_detach_items', 'cjson_detach_item_via_pointer_should_return_null_if_item_prev_is_null', 'cjson_replace_item_via_pointer_should_replace_items', 'cjson_replace_item_in_object_should_preserve_name', 'cjson_functions_should_not_crash_with_null_pointers', 'cjson_set_valuestring_should_return_null_if_strings_overlap', 'ensure_should_fail_on_failed_realloc', 'skip_utf8_bom_should_skip_bom', 'skip_utf8_bom_should_not_skip_bom_if_not_at_beginning', 'cjson_get_string_value_should_get_a_string', 'cjson_get_number_value_should_get_a_number', 'cjson_create_string_reference_should_create_a_string_reference', 'cjson_create_object_reference_should_create_an_object_reference', 'cjson_create_array_reference_should_create_an_array_reference', 'cjson_add_item_to_object_or_array_should_not_add_itself', 'cjson_add_item_to_object_should_not_use_after_free_when_string_is_aliased', 'cjson_delete_item_from_array_should_not_broken_list_structure', 'cjson_set_valuestring_to_object_should_not_leak_memory', 'cjson_set_bool_value_must_not_break_objects', 'cjson_parse_big_numbers_should_not_report_error', 'main']
    defines: []
  tests/parse_examples.c:
    layer: UTILITY
    functions: ['parse_file', 'do_test', 'file_test1_should_be_parsed_and_printed', 'file_test2_should_be_parsed_and_printed', 'file_test3_should_be_parsed_and_printed', 'file_test4_should_be_parsed_and_printed', 'file_test5_should_be_parsed_and_printed', 'file_test6_should_not_be_parsed', 'file_test7_should_be_parsed_and_printed', 'file_test8_should_be_parsed_and_printed', 'file_test9_should_be_parsed_and_printed', 'file_test10_should_be_parsed_and_printed', 'file_test11_should_be_parsed_and_printed', 'test12_should_not_be_parsed', 'test13_should_be_parsed_without_null_termination', 'test15_should_not_heap_buffer_overflow', 'main']
    defines: ['TEST_DIR_PATH']
  tests/parse_value.c:
    layer: UTILITY
    functions: ['assert_is_value', 'assert_parse_value', 'parse_value_should_parse_null', 'parse_value_should_parse_true', 'parse_value_should_parse_false', 'parse_value_should_parse_number', 'parse_value_should_parse_string', 'parse_value_should_parse_array', 'parse_value_should_parse_object', 'main']
    defines: []
  tests/parse_string.c:
    layer: UTILITY
    functions: ['assert_is_string', 'assert_parse_string', 'assert_not_parse_string', 'parse_string_should_parse_strings', 'parse_string_should_parse_utf16_surrogate_pairs', 'parse_string_should_not_parse_non_strings', 'parse_string_should_not_parse_invalid_backslash', 'parse_string_should_not_overflow_with_closing_backslash', 'parse_string_should_parse_bug_94', 'main']
    defines: []
  tests/print_number.c:
    layer: UTILITY
    functions: ['assert_print_number', 'print_number_should_print_zero', 'print_number_should_print_negative_integers', 'print_number_should_print_positive_integers', 'print_number_should_print_positive_reals', 'print_number_should_print_negative_reals', 'print_number_should_print_non_number', 'main']
    defines: []
  tests/unity_setup.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown']
    defines: []
  tests/unity/src/unity.c:
    layer: UTILITY
    functions: ['UnityPrint', 'if', 'if', 'if', 'UnityPrintLen', 'if', 'if', 'UnityPrintNumberByStyle', 'if', 'UnityPrintNumber', 'UnityPrintNumberUnsigned', 'UnityPrintNumberHex', 'UnityPrintMask', 'UnityPrintFloat', 'UnityTestResultsBegin', 'UnityTestResultsFailBegin', 'UnityConcludeTest', 'if', 'UnityAddMsgIfSpecified', 'UnityPrintExpectedAndActualStrings', 'UnityPrintExpectedAndActualStringsLen', 'UnityIsOneArrayNull', 'UnityAssertBits', 'UnityAssertEqualNumber', 'UnityAssertGreaterOrLessOrEqualNumber', 'UnityAssertEqualIntArray', 'UnityFloatsWithin', 'UnityAssertEqualFloatArray', 'UnityAssertFloatsWithin', 'UnityAssertFloatSpecial', 'UnityDoublesWithin', 'UnityAssertEqualDoubleArray', 'UnityAssertDoublesWithin', 'UnityAssertDoubleSpecial', 'UnityAssertNumbersWithin', 'UnityAssertEqualString', 'UnityAssertEqualStringLen', 'UnityAssertEqualStringArray', 'UnityAssertEqualMemory', 'UnityNumToPtr', 'UnityFloatToPtr', 'UnityDoubleToPtr', 'UnityFail', 'UnityIgnore', 'UnityDefaultTestRun', 'UnityBegin', 'UnityEnd', 'UnityParseOptions', 'IsStringInBiggerString', 'UnityStringArgumentMatches', 'UnityTestMatches']
    defines: ['UNITY_INCLUDE_SETUP_STUBS', 'UNITY_FAIL_AND_BAIL', 'UNITY_IGNORE_AND_BAIL', 'RETURN_IF_FAIL_OR_IGNORE', 'UnityPrintPointlessAndBail', 'UNITY_FLOAT_OR_DOUBLE_WITHIN', 'UNITY_NAN_CHECK', 'UNITY_NAN_CHECK', 'UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT', 'UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT']
    header: unity.h
  tests/unity/test/testdata/CException.h:
    layer: UTILITY
    functions: []
    defines: ['CEXCEPTION_H', 'CEXCEPTION_BEING_USED', 'CEXCEPTION_NONE', 'CEXCEPTION_T', 'Try', 'Catch']
  tests/unity/test/testdata/Defs.h:
    layer: UTILITY
    functions: []
    defines: ['DEF_H', 'EXTERN_DECL']
  tests/unity/test/testdata/testRunnerGenerator.c:
    layer: UTILITY
    functions: ['putcharSpy', 'setUp', 'tearDown', 'custom_setup', 'custom_teardown', 'test_ThisTestAlwaysPasses', 'test_ThisTestAlwaysFails', 'test_ThisTestAlwaysIgnored', 'qwiktest_ThisTestPassesWhenNoSetupRan', 'qwiktest_ThisTestPassesWhenNoTeardownRan', 'spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan', 'spec_ThisTestPassesWhenNormalSetupRan', 'spec_ThisTestPassesWhenNormalTeardownRan', 'custtest_ThisTestPassesWhenCustomSetupRan', 'custtest_ThisTestPassesWhenCustomTeardownRan', 'test_NotBeConfusedByLongComplicatedStrings', 'should_RunTestsStartingWithShouldByDefault', 'paratest_ShouldHandleParameterizedTests', 'paratest_ShouldHandleParameterizedTests2', 'paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid', 'paratest_ShouldHandleParameterizedTestsThatFail', 'extest_ShouldHandleCExceptionInTest', 'main', 'suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan']
    defines: ['TEST_CASE']
  tests/unity/test/testdata/mockMock.h:
    layer: UTILITY
    functions: []
    defines: ['MOCK_MOCK_H']
  tests/unity/test/testdata/testRunnerGeneratorWithMocks.c:
    layer: UTILITY
    functions: ['putcharSpy', 'setUp', 'tearDown', 'custom_setup', 'custom_teardown', 'test_ThisTestAlwaysPasses', 'test_ThisTestAlwaysFails', 'test_ThisTestAlwaysIgnored', 'qwiktest_ThisTestPassesWhenNoSetupRan', 'qwiktest_ThisTestPassesWhenNoTeardownRan', 'spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan', 'spec_ThisTestPassesWhenNormalSetupRan', 'spec_ThisTestPassesWhenNormalTeardownRan', 'custtest_ThisTestPassesWhenCustomSetupRan', 'custtest_ThisTestPassesWhenCustomTeardownRan', 'test_NotBeConfusedByLongComplicatedStrings', 'should_RunTestsStartingWithShouldByDefault', 'paratest_ShouldHandleParameterizedTests', 'paratest_ShouldHandleParameterizedTests2', 'paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid', 'paratest_ShouldHandleParameterizedTestsThatFail', 'extest_ShouldHandleCExceptionInTest', 'main', 'suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan', 'test_ShouldCallMockInitAndVerifyFunctionsForEachTest']
    defines: ['TEST_CASE']
  tests/unity/test/testdata/testRunnerGeneratorSmall.c:
    layer: UTILITY
    functions: ['putcharSpy', 'setUp', 'tearDown', 'custom_setup', 'custom_teardown', 'test_ThisTestAlwaysPasses', 'test_ThisTestAlwaysFails', 'test_ThisTestAlwaysIgnored', 'spec_ThisTestPassesWhenNormalSetupRan', 'spec_ThisTestPassesWhenNormalTeardownRan']
    defines: ['TEST_CASE']
  tests/unity/test/tests/testparameterized.c:
    layer: UTILITY
    functions: ['putcharSpy', 'setUp', 'tearDown', 'test_TheseShouldAllPass', 'test_TheseShouldAllFail', 'test_TheseAreEveryOther', 'test_NormalPassesStillWork', 'test_NormalFailsStillWork']
    defines: ['TEST_CASE', 'EXPECT_ABORT_BEGIN', 'VERIFY_FAILS_END', 'VERIFY_IGNORES_END']
  tests/unity/test/tests/testunity.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'testUnitySizeInitializationReminder', 'testPassShouldEndImmediatelyWithPass', 'testTrue', 'testFalse', 'testPreviousPass', 'testNotVanilla', 'testNotTrue', 'testNotFalse', 'testNotUnless', 'testNotNotEqual', 'testFail', 'testIsNull', 'testIsNullShouldFailIfNot', 'testNotNullShouldFailIfNULL', 'testIgnore', 'testIgnoreMessage', 'testNotEqualInts', 'testNotEqualInt8s', 'testNotEqualInt16s', 'testNotEqualInt32s', 'testNotEqualBits', 'testNotEqualUInts', 'testNotEqualUInt8s', 'testNotEqualUInt16s', 'testNotEqualUInt32s', 'testNotEqualHex8s', 'testNotEqualHex8sIfSigned', 'testNotEqualHex16s', 'testNotEqualHex16sIfSigned', 'testNotEqualHex32s', 'testNotEqualHex32sIfSigned', 'testEqualInts', 'testEqualInt8s', 'testEqualInt8sWhenThereAreDifferencesOutside8Bits', 'testEqualInt16s', 'testEqualInt16sNegatives', 'testEqualInt16sWhenThereAreDifferencesOutside16Bits', 'testEqualInt32s', 'testEqualInt32sNegatives', 'testEqualUints', 'testEqualUint8s', 'testEqualUint8sWhenThereAreDifferencesOutside8Bits', 'testEqualUint16s', 'testEqualUint16sWhenThereAreDifferencesOutside16Bits', 'testEqualUint32s', 'testNotEqual', 'testEqualHex8s', 'testEqualHex8sWhenThereAreDifferencesOutside8Bits', 'testEqualHex8sNegatives', 'testEqualHex16s', 'testEqualHex16sWhenThereAreDifferencesOutside16Bits', 'testEqualHex32s', 'testEqualBits', 'testNotEqualBitHigh', 'testNotEqualBitLow', 'testNotEqualBitsHigh', 'testNotEqualBitsLow', 'testEqualShorts', 'testEqualUShorts', 'testEqualChars', 'testEqualUChars', 'testEqualPointers', 'testNotEqualPointers', 'testIntsWithinDelta', 'testIntsWithinDeltaAndCustomMessage', 'testIntsNotWithinDelta', 'testIntsNotWithinDeltaAndCustomMessage', 'testUIntsWithinDelta', 'testUIntsWithinDeltaAndCustomMessage', 'testUIntsNotWithinDelta', 'testUIntsNotWithinDeltaAndCustomMessage', 'testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirst', 'testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirstAndCustomMessage', 'testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirst', 'testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirstAndCustomMessage', 'testHEX32sWithinDelta', 'testHEX32sWithinDeltaAndCustomMessage', 'testHEX32sNotWithinDelta', 'testHEX32sNotWithinDeltaAndCustomMessage', 'testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPass', 'testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage', 'testHEX16sWithinDelta', 'testHEX16sWithinDeltaAndCustomMessage', 'testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits', 'testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage', 'testHEX16sNotWithinDelta', 'testHEX16sNotWithinDeltaAndCustomMessage', 'testHEX8sWithinDelta', 'testHEX8sWithinDeltaAndCustomMessage', 'testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits', 'testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage', 'testHEX8sNotWithinDelta', 'testHEX8sNotWithinDeltaAndCustomMessage', 'testUINT32sWithinDelta', 'testUINT32sWithinDeltaAndCustomMessage', 'testUINT32sNotWithinDelta', 'testUINT32sNotWithinDeltaAndCustomMessage', 'testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPass', 'testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage', 'testUINT16sWithinDelta', 'testUINT16sWithinDeltaAndCustomMessage', 'testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits', 'testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage', 'testUINT16sNotWithinDelta', 'testUINT16sNotWithinDeltaAndCustomMessage', 'testUINT8sWithinDelta', 'testUINT8sWithinDeltaAndCustomMessage', 'testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits', 'testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage', 'testUINT8sNotWithinDelta', 'testUINT8sNotWithinDeltaAndCustomMessage', 'testINT32sWithinDelta', 'testINT32sWithinDeltaAndCustomMessage', 'testINT32sNotWithinDelta', 'testINT32sNotWithinDeltaAndDifferenceOverflows', 'testINT32sNotWithinDeltaAndCustomMessage', 'testINT16sWithinDelta', 'testINT16sWithinDeltaAndCustomMessage', 'testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits', 'testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage', 'testINT16sNotWithinDelta', 'testINT16sNotWithinDeltaAndCustomMessage', 'testINT8sWithinDelta', 'testINT8sWithinDeltaAndCustomMessage', 'testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits', 'testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage', 'testINT8sNotWithinDelta', 'testINT8sNotWithinDeltaAndCustomMessage', 'testGreaterThan', 'testGreaterThanINT', 'testGreaterThanINT8', 'testGreaterThanINT16', 'testGreaterThanINT32', 'testGreaterThanUINT', 'testGreaterThanUINT8', 'testGreaterThanUINT16', 'testGreaterThanUINT32', 'testGreaterThanHEX8', 'testGreaterThanHEX16', 'testGreaterThanHEX32', 'testNotGreaterThan', 'testLessThan', 'testLessThanINT', 'testLessThanINT8', 'testLessThanINT16', 'testLessThanINT32', 'testLessThanUINT', 'testLessThanUINT8', 'testLessThanUINT16', 'testLessThanUINT32', 'testLessThanHEX8', 'testLessThanHEX16', 'testLessThanHEX32', 'testNotLessThan', 'testEqualStrings', 'testEqualStringsLen', 'testEqualStringsWithCarriageReturnsAndLineFeeds', 'testNotEqualString1', 'testNotEqualStringLen1', 'testNotEqualString2', 'testNotEqualStringLen2', 'testNotEqualString3', 'testNotEqualStringLen3', 'testNotEqualString4', 'testNotEqualStringLen4', 'testNotEqualString5', 'testNotEqualString_ExpectedStringIsNull', 'testNotEqualStringLen_ExpectedStringIsNull', 'testNotEqualString_ActualStringIsNull', 'testNotEqualStringLen_ActualStringIsNull', 'testEqualStringArrays', 'testNotEqualStringArray1', 'testNotEqualStringArray2', 'testNotEqualStringArray3', 'testNotEqualStringArray4', 'testNotEqualStringArray5', 'testNotEqualStringArray6', 'testEqualStringArrayIfBothNulls', 'testNotEqualStringArrayLengthZero', 'testEqualStringEachEqual', 'testNotEqualStringEachEqual1', 'testNotEqualStringEachEqual2', 'testNotEqualStringEachEqual3', 'testNotEqualStringEachEqual4', 'testNotEqualStringEachEqual5', 'testEqualMemory', 'testNotEqualMemory1', 'testNotEqualMemory2', 'testNotEqualMemory3', 'testNotEqualMemory4', 'testNotEqualMemoryLengthZero', 'testEqualIntArrays', 'testNotEqualIntArraysNullExpected', 'testNotEqualIntArraysNullActual', 'testNotEqualIntArrays1', 'testNotEqualIntArrays2', 'testNotEqualIntArrays3', 'testNotEqualIntArraysLengthZero', 'testEqualIntEachEqual', 'testNotEqualIntEachEqualNullActual', 'testNotEqualIntEachEqual1', 'testNotEqualIntEachEqual2', 'testNotEqualIntEachEqual3', 'testNotEqualEachEqualLengthZero', 'testEqualPtrArrays', 'testNotEqualPtrArraysNullExpected', 'testNotEqualPtrArraysNullActual', 'testNotEqualPtrArrays1', 'testNotEqualPtrArrays2', 'testNotEqualPtrArrays3', 'testEqualPtrEachEqual', 'testNotEqualPtrEachEqualNullExpected', 'testNotEqualPtrEachEqualNullActual', 'testNotEqualPtrEachEqual1', 'testNotEqualPtrEachEqual2', 'testNotEqualPtrEachEqual3', 'testEqualInt8Arrays', 'testNotEqualInt8Arrays', 'testEqualInt8EachEqual', 'testNotEqualInt8EachEqual', 'testEqualUIntArrays', 'testNotEqualUIntArrays1', 'testNotEqualUIntArrays2', 'testNotEqualUIntArrays3', 'testEqualUIntEachEqual', 'testNotEqualUIntEachEqual1', 'testNotEqualUIntEachEqual2', 'testNotEqualUIntEachEqual3', 'testEqualInt16Arrays', 'testNotEqualInt16Arrays', 'testEqualInt16EachEqual', 'testNotEqualInt16EachEqual', 'testEqualInt32Arrays', 'testNotEqualInt32Arrays', 'testEqualInt32EachEqual', 'testNotEqualInt32EachEqual', 'testEqualUINT8Arrays', 'testNotEqualUINT8Arrays1', 'testNotEqualUINT8Arrays2', 'testNotEqualUINT8Arrays3', 'testEqualUINT16Arrays', 'testNotEqualUINT16Arrays1', 'testNotEqualUINT16Arrays2', 'testNotEqualUINT16Arrays3', 'testEqualUINT32Arrays', 'testNotEqualUINT32Arrays1', 'testNotEqualUINT32Arrays2', 'testNotEqualUINT32Arrays3', 'testEqualHEXArrays', 'testNotEqualHEXArrays1', 'testNotEqualHEXArrays2', 'testNotEqualHEXArrays3', 'testEqualHEX32Arrays', 'testNotEqualHEX32Arrays1', 'testNotEqualHEX32Arrays2', 'testNotEqualHEX32Arrays3', 'testEqualHEX16Arrays', 'testNotEqualHEX16Arrays1', 'testNotEqualHEX16Arrays2', 'testNotEqualHEX16Arrays3', 'testEqualHEX8Arrays', 'testNotEqualHEX8Arrays1', 'testNotEqualHEX8Arrays2', 'testNotEqualHEX8Arrays3', 'testEqualUINT8EachEqual', 'testNotEqualUINT8EachEqual1', 'testNotEqualUINT8EachEqual2', 'testNotEqualUINT8EachEqual3', 'testEqualUINT16EachEqual', 'testNotEqualUINT16EachEqual1', 'testNotEqualUINT16EachEqual2', 'testNotEqualUINT16EachEqual3', 'testEqualUINT32EachEqual', 'testNotEqualUINT32EachEqual1', 'testNotEqualUINT32EachEqual2', 'testNotEqualUINT32EachEqual3', 'testEqualHEXEachEqual', 'testNotEqualHEXEachEqual1', 'testNotEqualHEXEachEqual2', 'testNotEqualHEXEachEqual3', 'testEqualHEX32EachEqual', 'testNotEqualHEX32EachEqual1', 'testNotEqualHEX32EachEqual2', 'testNotEqualHEX32EachEqual3', 'testEqualHEX16EachEqual', 'testNotEqualHEX16EachEqual1', 'testNotEqualHEX16EachEqual2', 'testNotEqualHEX16EachEqual3', 'testEqualHEX8EachEqual', 'testNotEqualHEX8EachEqual1', 'testNotEqualHEX8EachEqual2', 'testNotEqualHEX8EachEqual3', 'testEqualMemoryArrays', 'testNotEqualMemoryArraysExpectedNull', 'testNotEqualMemoryArraysActualNull', 'testNotEqualMemoryArrays1', 'testNotEqualMemoryArrays2', 'testNotEqualMemoryArrays3', 'testEqualMemoryEachEqual', 'testNotEqualMemoryEachEqualExpectedNull', 'testNotEqualMemoryEachEqualActualNull', 'testNotEqualMemoryEachEqual1', 'testNotEqualMemoryEachEqual2', 'testNotEqualMemoryEachEqual3', 'testProtection', 'testIgnoredAndThenFailInTearDown', 'startPutcharSpy', 'endPutcharSpy', 'putcharSpy', 'testFailureCountIncrementsAndIsReturnedAtEnd', 'testCstringsEscapeSequence', 'testHexPrintsUpToMaxNumberOfNibbles', 'testPrintNumbers32', 'testPrintNumbersUnsigned32', 'testPrintNumbersInt64', 'testPrintNumbersUInt64', 'testEqualHex64s', 'testEqualUint64s', 'testEqualInt64s', 'testNotEqualHex64s', 'testNotEqualUint64s', 'testNotEqualInt64s', 'testNotEqualHex64sIfSigned', 'testHEX64sWithinDelta', 'testHEX64sNotWithinDelta', 'testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass', 'testUINT64sWithinDelta', 'testUINT64sNotWithinDelta', 'testUINT64sNotWithinDeltaEvenThoughASignedIntWouldPass', 'testINT64sWithinDelta', 'testINT64sNotWithinDelta', 'testINT64sNotWithinDeltaAndDifferenceOverflows', 'testEqualHEX64Arrays', 'testEqualUint64Arrays', 'testEqualInt64Arrays', 'testNotEqualHEX64Arrays1', 'testNotEqualHEX64Arrays2', 'testNotEqualUint64Arrays', 'testNotEqualInt64Arrays', 'testFloatsWithinDelta', 'testFloatsNotWithinDelta', 'testFloatsEqual', 'testFloatsNotEqual', 'testFloatsNotEqualNegative1', 'testFloatsNotEqualNegative2', 'testFloatsNotEqualActualNaN', 'testFloatsNotEqualExpectedNaN', 'testFloatsEqualBothNaN', 'testFloatsNotEqualInfNaN', 'testFloatsNotEqualNaNInf', 'testFloatsNotEqualActualInf', 'testFloatsNotEqualExpectedInf', 'testFloatsEqualBothInf', 'testFloatsNotEqualPlusMinusInf', 'testFloatIsPosInf1', 'testFloatIsPosInf2', 'testFloatIsNegInf1', 'testFloatIsNegInf2', 'testFloatIsNotPosInf1', 'testFloatIsNotPosInf2', 'testFloatIsNotNegInf', 'testFloatIsNan1', 'testFloatIsNan2', 'testFloatIsNotNan1', 'testFloatIsNotNan2', 'testFloatInfIsNotNan', 'testFloatNanIsNotInf', 'testFloatIsDeterminate1', 'testFloatIsDeterminate2', 'testFloatIsNotDeterminate1', 'testFloatIsNotDeterminate2', 'testFloatTraitFailsOnInvalidTrait', 'testEqualFloatArrays', 'testNotEqualFloatArraysExpectedNull', 'testNotEqualFloatArraysActualNull', 'testNotEqualFloatArrays1', 'testNotEqualFloatArrays2', 'testNotEqualFloatArrays3', 'testNotEqualFloatArraysNegative1', 'testNotEqualFloatArraysNegative2', 'testNotEqualFloatArraysNegative3', 'testEqualFloatArraysNaN', 'testEqualFloatArraysInf', 'testNotEqualFloatArraysLengthZero', 'testEqualFloatEachEqual', 'testNotEqualFloatEachEqualActualNull', 'testNotEqualFloatEachEqual1', 'testNotEqualFloatEachEqual2', 'testNotEqualFloatEachEqual3', 'testNotEqualFloatEachEqualNegative1', 'testNotEqualFloatEachEqualNegative2', 'testNotEqualFloatEachEqualNegative3', 'testEqualFloatEachEqualNaN', 'testEqualFloatEachEqualInf', 'testNotEqualFloatEachEqualLengthZero', 'testFloatPrinting', 'testFloatPrintingInfinityAndNaN', 'printFloatValue', 'testFloatPrintingRandomSamples', 'testDoublesWithinDelta', 'testDoublesNotWithinDelta', 'testDoublesEqual', 'testDoublesNotEqual', 'testDoublesNotEqualNegative1', 'testDoublesNotEqualNegative2', 'testDoublesNotEqualActualNaN', 'testDoublesNotEqualExpectedNaN', 'testDoublesEqualBothNaN', 'testDoublesNotEqualInfNaN', 'testDoublesNotEqualNaNInf', 'testDoublesNotEqualActualInf', 'testDoublesNotEqualExpectedInf', 'testDoublesEqualBothInf', 'testDoublesNotEqualPlusMinusInf', 'testDoubleIsPosInf1', 'testDoubleIsPosInf2', 'testDoubleIsNegInf1', 'testDoubleIsNegInf2', 'testDoubleIsNotPosInf1', 'testDoubleIsNotPosInf2', 'testDoubleIsNotNegInf', 'testDoubleIsNan1', 'testDoubleIsNan2', 'testDoubleIsNotNan1', 'testDoubleIsNotNan2', 'testDoubleInfIsNotNan', 'testDoubleNanIsNotInf', 'testDoubleIsDeterminate1', 'testDoubleIsDeterminate2', 'testDoubleIsNotDeterminate1', 'testDoubleIsNotDeterminate2', 'testDoubleTraitFailsOnInvalidTrait', 'testEqualDoubleArrays', 'testNotEqualDoubleArraysExpectedNull', 'testNotEqualDoubleArraysActualNull', 'testNotEqualDoubleArrays1', 'testNotEqualDoubleArrays2', 'testNotEqualDoubleArrays3', 'testNotEqualDoubleArraysNegative1', 'testNotEqualDoubleArraysNegative2', 'testNotEqualDoubleArraysNegative3', 'testEqualDoubleArraysNaN', 'testEqualDoubleArraysInf', 'testNotEqualDoubleArraysLengthZero', 'testEqualDoubleEachEqual', 'testNotEqualDoubleEachEqualActualNull', 'testNotEqualDoubleEachEqual1', 'testNotEqualDoubleEachEqual2', 'testNotEqualDoubleEachEqual3', 'testNotEqualDoubleEachEqualNegative1', 'testNotEqualDoubleEachEqualNegative2', 'testNotEqualDoubleEachEqualNegative3', 'testEqualDoubleEachEqualNaN', 'testEqualDoubleEachEqualInf', 'testNotEqualDoubleEachEqualLengthZero', 'testDoublePrinting', 'testDoublePrintingInfinityAndNaN', 'testThatDetailsCanBeHandleOneDetail', 'testThatDetailsCanHandleTestFail', 'testThatDetailsCanBeHandleTwoDetails', 'testThatDetailsCanBeHandleSingleDetailClearingTwoDetails']
    defines: ['EXPECT_ABORT_BEGIN', 'VERIFY_FAILS_END', 'VERIFY_IGNORES_END', 'USING_SPY_AS', 'ASSIGN_VALUE', 'VAL_putcharSpy', 'EXPAND_AND_USE_2ND', 'SECOND_PARAM', 'USING_OUTPUT_SPY', 'SPY_BUFFER_MAX', 'TEST_ASSERT_EQUAL_PRINT_NUMBERS', 'TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS', 'TEST_ASSERT_EQUAL_PRINT_FLOATING']
  tests/unity/test/expectdata/testsample_run1.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/testdata/cmock.h:
    layer: UTILITY
    functions: ['CMock_Guts_MemFreeFinal', 'mockMock_Init', 'mockMock_Verify', 'mockMock_Destroy']
    defines: ['CMOCK_H']
  tests/unity/test/expectdata/testsample_mock_yaml.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'suite_setup', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_new2.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'suite_setup', 'suite_teardown', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_new1.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_cmd.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_def.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_param.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST_NO_ARGS', 'RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_run2.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'suite_setup', 'suite_teardown', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_new2.c:
    layer: UTILITY
    functions: ['suite_setup', 'suite_teardown', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_param.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST_NO_ARGS', 'RUN_TEST']
  tests/unity/test/expectdata/testsample_head1.h:
    layer: UTILITY
    functions: []
    defines: ['_TESTSAMPLE_HEAD1_H']
  tests/unity/test/expectdata/testsample_head1.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
    header: testsample_head1.h
  tests/unity/test/expectdata/testsample_def.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_run1.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_yaml.c:
    layer: UTILITY
    functions: ['suite_setup', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_cmd.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_run2.c:
    layer: UTILITY
    functions: ['suite_setup', 'suite_teardown', 'resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_new1.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/test/expectdata/testsample_mock_head1.h:
    layer: UTILITY
    functions: []
    defines: ['_TESTSAMPLE_MOCK_HEAD1_H']
  tests/unity/test/expectdata/testsample_mock_head1.c:
    layer: UTILITY
    functions: ['CMock_Init', 'CMock_Verify', 'CMock_Destroy', 'resetTest', 'main']
    defines: ['RUN_TEST']
    header: testsample_mock_head1.h
  tests/unity/extras/fixture/src/unity_fixture_malloc_overrides.h:
    layer: UTILITY
    functions: []
    defines: ['UNITY_FIXTURE_MALLOC_OVERRIDES_H_', 'UNITY_INTERNAL_HEAP_SIZE_BYTES', 'UNITY_FIXTURE_MALLOC', 'UNITY_FIXTURE_FREE', 'malloc', 'calloc', 'realloc', 'free']
  tests/unity/extras/fixture/src/unity_fixture_internals.h:
    layer: UTILITY
    functions: []
    defines: ['UNITY_FIXTURE_INTERNALS_H_', 'UNITY_MAX_POINTERS']
  tests/unity/extras/fixture/src/unity_fixture.h:
    layer: UTILITY
    functions: []
    defines: ['UNITY_FIXTURE_H_', 'TEST_GROUP', 'TEST_SETUP', 'TEST_TEAR_DOWN', 'TEST', 'IGNORE_TEST', 'RUN_TEST_CASE', 'TEST_GROUP_RUNNER', 'RUN_TEST_GROUP', 'UT_PTR_SET', 'TEST_ASSERT_POINTERS_EQUAL', 'TEST_ASSERT_BYTES_EQUAL', 'FAIL', 'CHECK', 'LONGS_EQUAL', 'STRCMP_EQUAL', 'DOUBLES_EQUAL']
  tests/unity/extras/fixture/src/unity_fixture.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'announceTestRun', 'UnityMain', 'selected', 'testSelected', 'groupSelected', 'UnityTestRunner', 'UnityIgnoreTest', 'UnityMalloc_StartTest', 'UnityMalloc_EndTest', 'UnityMalloc_MakeMallocFailAfterCount', 'isOverrun', 'release_memory', 'unity_free', 'UnityPointer_Init', 'UnityPointer_Set', 'UnityPointer_UndoAllSets', 'UnityGetCommandLineOptions', 'if', 'if', 'if', 'UnityConcludeFixtureTest', 'if']
    defines: ['MALLOC_DONT_FAIL']
    header: unity_fixture.h
  tests/unity/extras/fixture/test/template_fixture_tests.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/extras/fixture/test/unity_output_Spy.h:
    layer: UTILITY
    functions: []
    defines: ['D_unity_output_Spy_H']
  tests/unity/extras/fixture/test/unity_output_Spy.c:
    layer: UTILITY
    functions: ['UnityOutputCharSpy_Create', 'UnityOutputCharSpy_Destroy', 'UnityOutputCharSpy_OutputChar', 'UnityOutputCharSpy_Get', 'UnityOutputCharSpy_Enable']
    defines: []
    header: unity_output_Spy.h
  tests/unity/extras/fixture/test/unity_fixture_Test.c:
    layer: UTILITY
    functions: []
    defines: ['EXPECT_ABORT_BEGIN', 'EXPECT_ABORT_END', 'USING_SPY_AS', 'ASSIGN_VALUE', 'VAL_UnityOutputCharSpy_OutputChar', 'EXPAND_AND_USE_2ND', 'SECOND_PARAM', 'USING_OUTPUT_SPY', 'UnityOutputCharSpy_OutputChar', 'USING_OUTPUT_SPY', 'TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER']
  tests/unity/extras/fixture/test/unity_fixture_TestRunner.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/extras/fixture/test/main/AllTests.c:
    layer: UTILITY
    functions: ['runAllTests', 'main']
    defines: []
  tests/unity/examples/example_3/src/ProductionCode2.h:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_3/src/ProductionCode2.c:
    layer: UTILITY
    functions: []
    defines: []
    header: ProductionCode2.h
  tests/unity/examples/example_3/src/ProductionCode.h:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_3/src/ProductionCode.c:
    layer: UTILITY
    functions: ['FindFunction_WhichIsBroken', 'FunctionWhichReturnsLocalVariable']
    defines: []
    header: ProductionCode.h
  tests/unity/examples/example_3/test/TestProductionCode2.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'test_IgnoredTest', 'test_AnotherIgnoredTest', 'test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented']
    defines: []
  tests/unity/examples/example_3/test/TestProductionCode.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode', 'test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed']
    defines: []
  tests/unity/examples/example_3/helper/UnityHelper.h:
    layer: UTILITY
    functions: []
    defines: ['_TESTHELPER_H', 'UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T', 'TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T']
  tests/unity/examples/example_3/helper/UnityHelper.c:
    layer: UTILITY
    functions: ['AssertEqualExampleStruct']
    defines: []
    header: UnityHelper.h
  tests/unity/examples/example_1/src/ProductionCode2.c:
    layer: UTILITY
    functions: []
    defines: []
    header: ProductionCode2.h
  tests/unity/examples/example_1/src/ProductionCode.c:
    layer: UTILITY
    functions: ['FindFunction_WhichIsBroken', 'FunctionWhichReturnsLocalVariable']
    defines: []
    header: ProductionCode.h
  tests/unity/examples/example_1/test/TestProductionCode2.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'test_IgnoredTest', 'test_AnotherIgnoredTest', 'test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented']
    defines: []
  tests/unity/examples/example_1/test/TestProductionCode.c:
    layer: UTILITY
    functions: ['setUp', 'tearDown', 'test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode', 'test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain', 'test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed']
    defines: []
  tests/unity/examples/example_1/test/test_runners/TestProductionCode_Runner.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/examples/example_1/test/test_runners/TestProductionCode2_Runner.c:
    layer: UTILITY
    functions: ['resetTest', 'main']
    defines: ['RUN_TEST']
  tests/unity/examples/example_2/src/ProductionCode2.c:
    layer: UTILITY
    functions: []
    defines: []
    header: ProductionCode2.h
  tests/unity/examples/example_2/src/ProductionCode.c:
    layer: UTILITY
    functions: ['FindFunction_WhichIsBroken', 'FunctionWhichReturnsLocalVariable']
    defines: []
    header: ProductionCode.h
  tests/unity/examples/example_2/test/TestProductionCode2.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_2/test/TestProductionCode.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_2/test/test_runners/TestProductionCode_Runner.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_2/test/test_runners/all_tests.c:
    layer: UTILITY
    functions: ['RunAllTests', 'main']
    defines: []
  tests/unity/examples/example_2/test/test_runners/TestProductionCode2_Runner.c:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_1/src/ProductionCode2.h:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_1/src/ProductionCode.h:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_2/src/ProductionCode2.h:
    layer: UTILITY
    functions: []
    defines: []
  tests/unity/examples/example_2/src/ProductionCode.h:
    layer: UTILITY
    functions: []
    defines: []
*/

/* ====================================================================== */
/* DEPENDENCY GRAPH (file → [dependencies]) */
/* ====================================================================== */
/*
DEPENDENCY GRAPH:
  cJSON_Utils.c: ['cJSON_Utils.h']
  cJSON.c: ['cJSON.h']
  test.c: ['cJSON.h']
  fuzzing/fuzz_main.c: []
  fuzzing/afl.c: []
  fuzzing/cjson_read_fuzzer.c: []
  tests/minify_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_number.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/old_utils_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/print_value.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_with_opts.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_array.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/print_array.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_hex4.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/misc_utils_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/cjson_add.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/print_string.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/json_patch_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/compare_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/readme_examples.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/misc_tests.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_examples.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_value.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/parse_string.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/print_number.c: ['tests/unity/src/unity.h', 'tests/unity/examples/unity_config.h', 'tests/common.h']
  tests/unity_setup.c: []
  tests/unity/src/unity.c: ['tests/unity/src/unity.h']
  tests/unity/test/testdata/testRunnerGenerator.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/src/unity.h', 'tests/unity/test/testdata/Defs.h']
  tests/unity/test/testdata/testRunnerGeneratorWithMocks.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/test/testdata/mockMock.h', 'tests/unity/src/unity.h', 'tests/unity/test/testdata/Defs.h']
  tests/unity/test/testdata/testRunnerGeneratorSmall.c: ['tests/unity/src/unity.h', 'tests/unity/test/testdata/Defs.h']
  tests/unity/test/tests/testparameterized.c: ['tests/unity/src/unity.h']
  tests/unity/test/tests/testunity.c: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_run1.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_yaml.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_new2.c: ['tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_new1.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_cmd.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_def.c: ['tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_param.c: ['tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_run2.c: ['tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_new2.c: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_param.c: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_head1.c: ['tests/unity/test/expectdata/testsample_head1.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_def.c: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_run1.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_yaml.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_cmd.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_run2.c: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_new1.c: ['tests/unity/test/testdata/CException.h', 'tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_head1.c: ['tests/unity/test/expectdata/testsample_mock_head1.h', 'tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/extras/fixture/src/unity_fixture.c: ['tests/unity/src/unity_internals.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/extras/fixture/test/template_fixture_tests.c: ['tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/extras/fixture/test/unity_output_Spy.c: ['tests/unity/extras/fixture/test/unity_output_Spy.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/extras/fixture/test/unity_fixture_Test.c: ['tests/unity/extras/fixture/test/unity_output_Spy.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/extras/fixture/test/unity_fixture_TestRunner.c: ['tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/extras/fixture/test/main/AllTests.c: ['tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/examples/example_3/src/ProductionCode2.c: ['tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_3/src/ProductionCode.c: ['tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_3/test/TestProductionCode2.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_3/test/TestProductionCode.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_3/helper/UnityHelper.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/helper/UnityHelper.h']
  tests/unity/examples/example_1/src/ProductionCode2.c: ['tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_1/src/ProductionCode.c: ['tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_1/test/TestProductionCode2.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_1/test/TestProductionCode.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_1/test/test_runners/TestProductionCode_Runner.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_1/test/test_runners/TestProductionCode2_Runner.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_2/src/ProductionCode2.c: ['tests/unity/examples/example_3/src/ProductionCode2.h']
  tests/unity/examples/example_2/src/ProductionCode.c: ['tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_2/test/TestProductionCode2.c: ['tests/unity/src/unity.h', 'tests/unity/examples/example_3/src/ProductionCode2.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/examples/example_2/test/TestProductionCode.c: ['tests/unity/src/unity.h', 'tests/unity/extras/fixture/src/unity_fixture.h', 'tests/unity/examples/example_3/src/ProductionCode.h']
  tests/unity/examples/example_2/test/test_runners/TestProductionCode_Runner.c: ['tests/unity/src/unity.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/examples/example_2/test/test_runners/all_tests.c: ['tests/unity/extras/fixture/src/unity_fixture.h']
  tests/unity/examples/example_2/test/test_runners/TestProductionCode2_Runner.c: ['tests/unity/src/unity.h', 'tests/unity/extras/fixture/src/unity_fixture.h']
  cJSON.h: []
  cJSON_Utils.h: ['cJSON.h']
  tests/common.h: []
  tests/unity/src/unity_internals.h: []
  tests/unity/src/unity.h: ['tests/unity/src/unity_internals.h']
  tests/unity/examples/unity_config.h: []
  tests/unity/test/testdata/CException.h: []
  tests/unity/test/testdata/mockMock.h: []
  tests/unity/test/testdata/Defs.h: []
  tests/unity/test/testdata/cmock.h: []
  tests/unity/test/expectdata/testsample_head1.h: ['tests/unity/src/unity.h']
  tests/unity/test/expectdata/testsample_mock_head1.h: ['tests/unity/test/testdata/cmock.h', 'tests/unity/src/unity.h']
  tests/unity/extras/fixture/src/unity_fixture_internals.h: []
  tests/unity/extras/fixture/src/unity_fixture.h: ['tests/unity/src/unity_internals.h', 'tests/unity/src/unity.h', 'tests/unity/extras/fixture/src/unity_fixture_malloc_overrides.h', 'tests/unity/extras/fixture/src/unity_fixture_internals.h']
  tests/unity/extras/fixture/src/unity_fixture_malloc_overrides.h: []
  tests/unity/extras/fixture/test/unity_output_Spy.h: []
  tests/unity/examples/example_3/src/ProductionCode2.h: []
  tests/unity/examples/example_3/src/ProductionCode.h: []
  tests/unity/examples/example_3/helper/UnityHelper.h: []
  tests/unity/examples/example_1/src/ProductionCode2.h: []
  tests/unity/examples/example_1/src/ProductionCode.h: []
  tests/unity/examples/example_2/src/ProductionCode2.h: []
  tests/unity/examples/example_2/src/ProductionCode.h: []
*/

/* ====================================================================== */
/* FILE CONTENTS (PRESERVED EXACTLY) */
/* ====================================================================== */

/* HEADER FILES */
/* ------------------------------------------------------------ */
/* HEADER: cJSON_Utils.h */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#ifndef cJSON_Utils__h
#define cJSON_Utils__h

#ifdef __cplusplus
extern "C"
{
#endif

#include "cJSON.h"

/* Implement RFC6901 (https://tools.ietf.org/html/rfc6901) JSON Pointer spec. */
CJSON_PUBLIC(cJSON *) cJSONUtils_GetPointer(cJSON * const object, const char *pointer);
CJSON_PUBLIC(cJSON *) cJSONUtils_GetPointerCaseSensitive(cJSON * const object, const char *pointer);

/* Implement RFC6902 (https://tools.ietf.org/html/rfc6902) JSON Patch spec. */
/* NOTE: This modifies objects in 'from' and 'to' by sorting the elements by their key */
CJSON_PUBLIC(cJSON *) cJSONUtils_GeneratePatches(cJSON * const from, cJSON * const to);
CJSON_PUBLIC(cJSON *) cJSONUtils_GeneratePatchesCaseSensitive(cJSON * const from, cJSON * const to);
/* Utility for generating patch array entries. */
CJSON_PUBLIC(void) cJSONUtils_AddPatchToArray(cJSON * const array, const char * const operation, const char * const path, const cJSON * const value);
/* Returns 0 for success. */
CJSON_PUBLIC(int) cJSONUtils_ApplyPatches(cJSON * const object, const cJSON * const patches);
CJSON_PUBLIC(int) cJSONUtils_ApplyPatchesCaseSensitive(cJSON * const object, const cJSON * const patches);

/*
// Note that ApplyPatches is NOT atomic on failure. To implement an atomic ApplyPatches, use:
//int cJSONUtils_AtomicApplyPatches(cJSON **object, cJSON *patches)
//{
//    cJSON *modme = cJSON_Duplicate(*object, 1);
//    int error = cJSONUtils_ApplyPatches(modme, patches);
//    if (!error)
//    {
//        cJSON_Delete(*object);
//        *object = modme;
//    }
//    else
//    {
//        cJSON_Delete(modme);
//    }
//
//    return error;
//}
// Code not added to library since this strategy is a LOT slower.
*/

/* Implement RFC7386 (https://tools.ietf.org/html/rfc7396) JSON Merge Patch spec. */
/* target will be modified by patch. return value is new ptr for target. */
CJSON_PUBLIC(cJSON *) cJSONUtils_MergePatch(cJSON *target, const cJSON * const patch);
CJSON_PUBLIC(cJSON *) cJSONUtils_MergePatchCaseSensitive(cJSON *target, const cJSON * const patch);
/* generates a patch to move from -> to */
/* NOTE: This modifies objects in 'from' and 'to' by sorting the elements by their key */
CJSON_PUBLIC(cJSON *) cJSONUtils_GenerateMergePatch(cJSON * const from, cJSON * const to);
CJSON_PUBLIC(cJSON *) cJSONUtils_GenerateMergePatchCaseSensitive(cJSON * const from, cJSON * const to);

/* Given a root object and a target object, construct a pointer from one to the other. */
CJSON_PUBLIC(char *) cJSONUtils_FindPointerFromObjectTo(const cJSON * const object, const cJSON * const target);

/* Sorts the members of the object into alphabetical order. */
CJSON_PUBLIC(void) cJSONUtils_SortObject(cJSON * const object);
CJSON_PUBLIC(void) cJSONUtils_SortObjectCaseSensitive(cJSON * const object);

#ifdef __cplusplus
}
#endif

#endif


/* HEADER: cJSON.h */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#ifndef cJSON__h
#define cJSON__h

#ifdef __cplusplus
extern "C"
{
#endif

#if !defined(__WINDOWS__) && (defined(WIN32) || defined(WIN64) || defined(_MSC_VER) || defined(_WIN32))
#define __WINDOWS__
#endif

#ifdef __WINDOWS__

/* When compiling for windows, we specify a specific calling convention to avoid issues where we are being called from a project with a different default calling convention.  For windows you have 3 define options:

CJSON_HIDE_SYMBOLS - Define this in the case where you don't want to ever dllexport symbols
CJSON_EXPORT_SYMBOLS - Define this on library build when you want to dllexport symbols (default)
CJSON_IMPORT_SYMBOLS - Define this if you want to dllimport symbol

For *nix builds that support visibility attribute, you can define similar behavior by

setting default visibility to hidden by adding
-fvisibility=hidden (for gcc)
or
-xldscope=hidden (for sun cc)
to CFLAGS

then using the CJSON_API_VISIBILITY flag to "export" the same symbols the way CJSON_EXPORT_SYMBOLS does

*/

#define CJSON_CDECL __cdecl
#define CJSON_STDCALL __stdcall

/* export symbols by default, this is necessary for copy pasting the C and header file */
#if !defined(CJSON_HIDE_SYMBOLS) && !defined(CJSON_IMPORT_SYMBOLS) && !defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_EXPORT_SYMBOLS
#endif

#if defined(CJSON_HIDE_SYMBOLS)
#define CJSON_PUBLIC(type)   type CJSON_STDCALL
#elif defined(CJSON_EXPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllexport) type CJSON_STDCALL
#elif defined(CJSON_IMPORT_SYMBOLS)
#define CJSON_PUBLIC(type)   __declspec(dllimport) type CJSON_STDCALL
#endif
#else /* !__WINDOWS__ */
#define CJSON_CDECL
#define CJSON_STDCALL

#if (defined(__GNUC__) || defined(__SUNPRO_CC) || defined (__SUNPRO_C)) && defined(CJSON_API_VISIBILITY)
#define CJSON_PUBLIC(type)   __attribute__((visibility("default"))) type
#else
#define CJSON_PUBLIC(type) type
#endif
#endif

/* project version */
#define CJSON_VERSION_MAJOR 1
#define CJSON_VERSION_MINOR 7
#define CJSON_VERSION_PATCH 19

#include <stddef.h>

/* cJSON Types: */
#define cJSON_Invalid (0)
#define cJSON_False  (1 << 0)
#define cJSON_True   (1 << 1)
#define cJSON_NULL   (1 << 2)
#define cJSON_Number (1 << 3)
#define cJSON_String (1 << 4)
#define cJSON_Array  (1 << 5)
#define cJSON_Object (1 << 6)
#define cJSON_Raw    (1 << 7) /* raw json */

#define cJSON_IsReference 256
#define cJSON_StringIsConst 512

/* The cJSON structure: */
typedef struct cJSON
{
    /* next/prev allow you to walk array/object chains. Alternatively, use GetArraySize/GetArrayItem/GetObjectItem */
    struct cJSON *next;
    struct cJSON *prev;
    /* An array or object item will have a child pointer pointing to a chain of the items in the array/object. */
    struct cJSON *child;

    /* The type of the item, as above. */
    int type;

    /* The item's string, if type==cJSON_String  and type == cJSON_Raw */
    char *valuestring;
    /* writing to valueint is DEPRECATED, use cJSON_SetNumberValue instead */
    int valueint;
    /* The item's number, if type==cJSON_Number */
    double valuedouble;

    /* The item's name string, if this item is the child of, or is in the list of subitems of an object. */
    char *string;
} cJSON;

typedef struct cJSON_Hooks
{
      /* malloc/free are CDECL on Windows regardless of the default calling convention of the compiler, so ensure the hooks allow passing those functions directly. */
      void *(CJSON_CDECL *malloc_fn)(size_t sz);
      void (CJSON_CDECL *free_fn)(void *ptr);
} cJSON_Hooks;

typedef int cJSON_bool;

/* Limits how deeply nested arrays/objects can be before cJSON rejects to parse them.
 * This is to prevent stack overflows. */
#ifndef CJSON_NESTING_LIMIT
#define CJSON_NESTING_LIMIT 1000
#endif

/* Limits the length of circular references can be before cJSON rejects to parse them.
 * This is to prevent stack overflows. */
#ifndef CJSON_CIRCULAR_LIMIT
#define CJSON_CIRCULAR_LIMIT 10000
#endif

/* returns the version of cJSON as a string */
CJSON_PUBLIC(const char*) cJSON_Version(void);

/* Supply malloc, realloc and free functions to cJSON */
CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks);

/* Memory Management: the caller is always responsible to free the results from all variants of cJSON_Parse (with cJSON_Delete) and cJSON_Print (with stdlib free, cJSON_Hooks.free_fn, or cJSON_free as appropriate). The exception is cJSON_PrintPreallocated, where the caller has full responsibility of the buffer. */
/* Supply a block of JSON, and this returns a cJSON object you can interrogate. */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length);
/* ParseWithOpts allows you to require (and check) that the JSON is null terminated, and to retrieve the pointer to the final byte parsed. */
/* If you supply a ptr in return_parse_end and parsing fails, then return_parse_end will contain a pointer to the error so will match cJSON_GetErrorPtr(). */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated);
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated);

/* Render a cJSON entity to text for transfer/storage. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item);
/* Render a cJSON entity to text for transfer/storage without any formatting. */
CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item);
/* Render a cJSON entity to text using a buffered strategy. prebuffer is a guess at the final size. guessing well reduces reallocation. fmt=0 gives unformatted, =1 gives formatted */
CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt);
/* Render a cJSON entity to text using a buffer already allocated in memory with given length. Returns 1 on success and 0 on failure. */
/* NOTE: cJSON is not always 100% accurate in estimating how much memory it will use, so to be safe allocate 5 bytes more than you actually need */
CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format);
/* Delete a cJSON entity and all subentities. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item);

/* Returns the number of items in an array (or object). */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array);
/* Retrieve item number "index" from array "array". Returns NULL if unsuccessful. */
CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index);
/* Get item "string" from object. Case insensitive. */
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string);
CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string);
/* For analysing failed parses. This returns a pointer to the parse error. You'll probably need to look a few chars back to make sense of it. Defined when cJSON_Parse() returns 0. 0 when cJSON_Parse() succeeds. */
CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void);

/* Check item type and return its value */
CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item);
CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item);

/* These functions check the type of an item */
CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item);
CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item);

/* These calls create a cJSON item of the appropriate type. */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean);
CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num);
CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string);
/* raw json */
CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw);
CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void);

/* Create a string where valuestring references a string so
 * it will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string);
/* Create an object/array that only references it's elements so
 * they will not be freed by cJSON_Delete */
CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child);
CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child);

/* These utilities create an Array of count items.
 * The parameter count cannot be greater than the number of elements in the number array, otherwise array access will be out of bounds.*/
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count);
CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count);

/* Append item to the specified array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item);
/* Use this when string is definitely const (i.e. a literal, or as good as), and will definitely survive the cJSON object.
 * WARNING: When this function was used, make sure to always check that (item->type & cJSON_StringIsConst) is zero before
 * writing to `item->string` */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item);
/* Append reference to item to the specified array/object. Use this when you want to add an existing cJSON to a new cJSON, but don't want to corrupt your existing cJSON. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item);
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item);

/* Remove/Detach items from Arrays/Objects. */
CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string);
CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string);

/* Update array items. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem); /* Shifts pre-existing items to the right. */
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object,const char *string,cJSON *newitem);
CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object,const char *string,cJSON *newitem);

/* Duplicate a cJSON item */
CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse);
/* Duplicate will create a new, identical cJSON item to the one you pass, in new memory that will
 * need to be released. With recurse!=0, it will duplicate any children connected to the item.
 * The item->next and ->prev pointers are always zero on return from Duplicate. */
/* Recursively compare two cJSON items for equality. If either a or b is NULL or invalid, they will be considered unequal.
 * case_sensitive determines if object keys are treated case sensitive (1) or case insensitive (0) */
CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive);

/* Minify a strings, remove blank characters(such as ' ', '\t', '\r', '\n') from strings.
 * The input pointer json cannot point to a read-only address area, such as a string constant, 
 * but should point to a readable and writable address area. */
CJSON_PUBLIC(void) cJSON_Minify(char *json);

/* Helper functions for creating and adding items to an object at the same time.
 * They return the added item or NULL on failure. */
CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean);
CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number);
CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string);
CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw);
CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name);

/* When assigning an integer value, it needs to be propagated to valuedouble too. */
#define cJSON_SetIntValue(object, number) ((object) ? (object)->valueint = (object)->valuedouble = (number) : (number))
/* helper for the cJSON_SetNumberValue macro */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number);
#define cJSON_SetNumberValue(object, number) ((object != NULL) ? cJSON_SetNumberHelper(object, (double)number) : (number))
/* Change the valuestring of a cJSON_String object, only takes effect when type of object is cJSON_String */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring);

/* If the object is not a boolean type this does nothing and returns cJSON_Invalid else it returns the new type*/
#define cJSON_SetBoolValue(object, boolValue) ( \
    (object != NULL && ((object)->type & (cJSON_False|cJSON_True))) ? \
    (object)->type=((object)->type &(~(cJSON_False|cJSON_True)))|((boolValue)?cJSON_True:cJSON_False) : \
    cJSON_Invalid\
)

/* Macro for iterating over an array or object */
#define cJSON_ArrayForEach(element, array) for(element = (array != NULL) ? (array)->child : NULL; element != NULL; element = element->next)

/* malloc/free objects using the malloc/free functions that have been set with cJSON_InitHooks */
CJSON_PUBLIC(void *) cJSON_malloc(size_t size);
CJSON_PUBLIC(void) cJSON_free(void *object);

#ifdef __cplusplus
}
#endif

#endif


/* HEADER: tests/unity/src/unity.h */
/* ------------------------------------------------------------ */
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007-14 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#ifndef UNITY_FRAMEWORK_H
#define UNITY_FRAMEWORK_H
#define UNITY

#ifdef __cplusplus
extern "C"
{
#endif

#include "unity_internals.h"

/*-------------------------------------------------------
 * Test Setup / Teardown
 *-------------------------------------------------------*/

/* These functions are intended to be called before and after each test. */
void setUp(void);
void tearDown(void);

/* These functions are intended to be called at the beginning and end of an
 * entire test suite.  suiteTearDown() is passed the number of tests that
 * failed, and its return value becomes the exit code of main(). */
void suiteSetUp(void);
int suiteTearDown(int num_failures);

/* If the compiler supports it, the following block provides stub
 * implementations of the above functions as weak symbols.  Note that on
 * some platforms (MinGW for example), weak function implementations need
 * to be in the same translation unit they are called from.  This can be
 * achieved by defining UNITY_INCLUDE_SETUP_STUBS before including unity.h. */
#ifdef UNITY_INCLUDE_SETUP_STUBS
  #ifdef UNITY_WEAK_ATTRIBUTE
    UNITY_WEAK_ATTRIBUTE void setUp(void) { }
    UNITY_WEAK_ATTRIBUTE void tearDown(void) { }
    UNITY_WEAK_ATTRIBUTE void suiteSetUp(void) { }
    UNITY_WEAK_ATTRIBUTE int suiteTearDown(int num_failures) { return num_failures; }
  #elif defined(UNITY_WEAK_PRAGMA)
    #pragma weak setUp
    void setUp(void) { }
    #pragma weak tearDown
    void tearDown(void) { }
    #pragma weak suiteSetUp
    void suiteSetUp(void) { }
    #pragma weak suiteTearDown
    int suiteTearDown(int num_failures) { return num_failures; }
  #endif
#endif

/*-------------------------------------------------------
 * Configuration Options
 *-------------------------------------------------------
 * All options described below should be passed as a compiler flag to all files using Unity. If you must add #defines, place them BEFORE the #include above.

 * Integers/longs/pointers
 *     - Unity attempts to automatically discover your integer sizes
 *       - define UNITY_EXCLUDE_STDINT_H to stop attempting to look in <stdint.h>
 *       - define UNITY_EXCLUDE_LIMITS_H to stop attempting to look in <limits.h>
 *     - If you cannot use the automatic methods above, you can force Unity by using these options:
 *       - define UNITY_SUPPORT_64
 *       - set UNITY_INT_WIDTH
 *       - set UNITY_LONG_WIDTH
 *       - set UNITY_POINTER_WIDTH

 * Floats
 *     - define UNITY_EXCLUDE_FLOAT to disallow floating point comparisons
 *     - define UNITY_FLOAT_PRECISION to specify the precision to use when doing TEST_ASSERT_EQUAL_FLOAT
 *     - define UNITY_FLOAT_TYPE to specify doubles instead of single precision floats
 *     - define UNITY_INCLUDE_DOUBLE to allow double floating point comparisons
 *     - define UNITY_EXCLUDE_DOUBLE to disallow double floating point comparisons (default)
 *     - define UNITY_DOUBLE_PRECISION to specify the precision to use when doing TEST_ASSERT_EQUAL_DOUBLE
 *     - define UNITY_DOUBLE_TYPE to specify something other than double
 *     - define UNITY_EXCLUDE_FLOAT_PRINT to trim binary size, won't print floating point values in errors

 * Output
 *     - by default, Unity prints to standard out with putchar.  define UNITY_OUTPUT_CHAR(a) with a different function if desired
 *     - define UNITY_DIFFERENTIATE_FINAL_FAIL to print FAILED (vs. FAIL) at test end summary - for automated search for failure

 * Optimization
 *     - by default, line numbers are stored in unsigned shorts.  Define UNITY_LINE_TYPE with a different type if your files are huge
 *     - by default, test and failure counters are unsigned shorts.  Define UNITY_COUNTER_TYPE with a different type if you want to save space or have more than 65535 Tests.

 * Test Cases
 *     - define UNITY_SUPPORT_TEST_CASES to include the TEST_CASE macro, though really it's mostly about the runner generator script

 * Parameterized Tests
 *     - you'll want to create a define of TEST_CASE(...) which basically evaluates to nothing

 * Tests with Arguments
 *     - you'll want to define UNITY_USE_COMMAND_LINE_ARGS if you have the test runner passing arguments to Unity

 *-------------------------------------------------------
 * Basic Fail and Ignore
 *-------------------------------------------------------*/

#define TEST_FAIL_MESSAGE(message)                                                                 UNITY_TEST_FAIL(__LINE__, (message))
#define TEST_FAIL()                                                                                UNITY_TEST_FAIL(__LINE__, NULL)
#define TEST_IGNORE_MESSAGE(message)                                                               UNITY_TEST_IGNORE(__LINE__, (message))
#define TEST_IGNORE()                                                                              UNITY_TEST_IGNORE(__LINE__, NULL)
#define TEST_ONLY()

/* It is not necessary for you to call PASS. A PASS condition is assumed if nothing fails.
 * This method allows you to abort a test immediately with a PASS state, ignoring the remainder of the test. */
#define TEST_PASS()                                                                                TEST_ABORT()

/* This macro does nothing, but it is useful for build tools (like Ceedling) to make use of this to figure out
 * which files should be linked to in order to perform a test. Use it like TEST_FILE("sandwiches.c") */
#define TEST_FILE(a)

/*-------------------------------------------------------
 * Test Asserts (simple)
 *-------------------------------------------------------*/

/* Boolean */
#define TEST_ASSERT(condition)                                                                     UNITY_TEST_ASSERT(       (condition), __LINE__, " Expression Evaluated To FALSE")
#define TEST_ASSERT_TRUE(condition)                                                                UNITY_TEST_ASSERT(       (condition), __LINE__, " Expected TRUE Was FALSE")
#define TEST_ASSERT_UNLESS(condition)                                                              UNITY_TEST_ASSERT(      !(condition), __LINE__, " Expression Evaluated To TRUE")
#define TEST_ASSERT_FALSE(condition)                                                               UNITY_TEST_ASSERT(      !(condition), __LINE__, " Expected FALSE Was TRUE")
#define TEST_ASSERT_NULL(pointer)                                                                  UNITY_TEST_ASSERT_NULL(    (pointer), __LINE__, " Expected NULL")
#define TEST_ASSERT_NOT_NULL(pointer)                                                              UNITY_TEST_ASSERT_NOT_NULL((pointer), __LINE__, " Expected Non-NULL")

/* Integers (of all sizes) */
#define TEST_ASSERT_EQUAL_INT(expected, actual)                                                    UNITY_TEST_ASSERT_EQUAL_INT((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT8(expected, actual)                                                   UNITY_TEST_ASSERT_EQUAL_INT8((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT16(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_INT16((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT32(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_INT32((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT64(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_INT64((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL(expected, actual)                                                        UNITY_TEST_ASSERT_EQUAL_INT((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_NOT_EQUAL(expected, actual)                                                    UNITY_TEST_ASSERT(((expected) !=  (actual)), __LINE__, " Expected Not-Equal")
#define TEST_ASSERT_EQUAL_UINT(expected, actual)                                                   UNITY_TEST_ASSERT_EQUAL_UINT( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT8(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_UINT8( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT16(expected, actual)                                                 UNITY_TEST_ASSERT_EQUAL_UINT16( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT32(expected, actual)                                                 UNITY_TEST_ASSERT_EQUAL_UINT32( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT64(expected, actual)                                                 UNITY_TEST_ASSERT_EQUAL_UINT64( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX(expected, actual)                                                    UNITY_TEST_ASSERT_EQUAL_HEX32((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX8(expected, actual)                                                   UNITY_TEST_ASSERT_EQUAL_HEX8( (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX16(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_HEX16((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX32(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_HEX32((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX64(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_HEX64((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_BITS(mask, expected, actual)                                                   UNITY_TEST_ASSERT_BITS((mask), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_BITS_HIGH(mask, actual)                                                        UNITY_TEST_ASSERT_BITS((mask), (UNITY_UINT32)(-1), (actual), __LINE__, NULL)
#define TEST_ASSERT_BITS_LOW(mask, actual)                                                         UNITY_TEST_ASSERT_BITS((mask), (UNITY_UINT32)(0), (actual), __LINE__, NULL)
#define TEST_ASSERT_BIT_HIGH(bit, actual)                                                          UNITY_TEST_ASSERT_BITS(((UNITY_UINT32)1 << (bit)), (UNITY_UINT32)(-1), (actual), __LINE__, NULL)
#define TEST_ASSERT_BIT_LOW(bit, actual)                                                           UNITY_TEST_ASSERT_BITS(((UNITY_UINT32)1 << (bit)), (UNITY_UINT32)(0), (actual), __LINE__, NULL)

/* Integer Greater Than/ Less Than (of all sizes) */
#define TEST_ASSERT_GREATER_THAN(threshold, actual)                                                UNITY_TEST_ASSERT_GREATER_THAN_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_INT(threshold, actual)                                            UNITY_TEST_ASSERT_GREATER_THAN_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_INT8(threshold, actual)                                           UNITY_TEST_ASSERT_GREATER_THAN_INT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_INT16(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_INT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_INT32(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_INT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_INT64(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_INT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_UINT(threshold, actual)                                           UNITY_TEST_ASSERT_GREATER_THAN_UINT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_UINT8(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_UINT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_UINT16(threshold, actual)                                         UNITY_TEST_ASSERT_GREATER_THAN_UINT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_UINT32(threshold, actual)                                         UNITY_TEST_ASSERT_GREATER_THAN_UINT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_UINT64(threshold, actual)                                         UNITY_TEST_ASSERT_GREATER_THAN_UINT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_HEX8(threshold, actual)                                           UNITY_TEST_ASSERT_GREATER_THAN_HEX8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_HEX16(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_HEX16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_HEX32(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_HEX32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_THAN_HEX64(threshold, actual)                                          UNITY_TEST_ASSERT_GREATER_THAN_HEX64((threshold), (actual), __LINE__, NULL)

#define TEST_ASSERT_LESS_THAN(threshold, actual)                                                   UNITY_TEST_ASSERT_SMALLER_THAN_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_INT(threshold, actual)                                               UNITY_TEST_ASSERT_SMALLER_THAN_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_INT8(threshold, actual)                                              UNITY_TEST_ASSERT_SMALLER_THAN_INT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_INT16(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_INT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_INT32(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_INT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_INT64(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_INT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_UINT(threshold, actual)                                              UNITY_TEST_ASSERT_SMALLER_THAN_UINT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_UINT8(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_UINT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_UINT16(threshold, actual)                                            UNITY_TEST_ASSERT_SMALLER_THAN_UINT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_UINT32(threshold, actual)                                            UNITY_TEST_ASSERT_SMALLER_THAN_UINT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_UINT64(threshold, actual)                                            UNITY_TEST_ASSERT_SMALLER_THAN_UINT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_HEX8(threshold, actual)                                              UNITY_TEST_ASSERT_SMALLER_THAN_HEX8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_HEX16(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_HEX16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_HEX32(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_HEX32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_THAN_HEX64(threshold, actual)                                             UNITY_TEST_ASSERT_SMALLER_THAN_HEX64((threshold), (actual), __LINE__, NULL)

#define TEST_ASSERT_GREATER_OR_EQUAL(threshold, actual)                                            UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_INT(threshold, actual)                                        UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_INT8(threshold, actual)                                       UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_INT16(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_INT32(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_INT64(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT(threshold, actual)                                       UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT8(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT16(threshold, actual)                                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT32(threshold, actual)                                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT64(threshold, actual)                                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX8(threshold, actual)                                       UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX16(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX32(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX64(threshold, actual)                                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX64((threshold), (actual), __LINE__, NULL)

#define TEST_ASSERT_LESS_OR_EQUAL(threshold, actual)                                               UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_INT(threshold, actual)                                           UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_INT8(threshold, actual)                                          UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_INT16(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_INT32(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_INT64(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_UINT(threshold, actual)                                          UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_UINT8(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_UINT16(threshold, actual)                                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_UINT32(threshold, actual)                                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_UINT64(threshold, actual)                                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT64((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_HEX8(threshold, actual)                                          UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX8((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_HEX16(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX16((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_HEX32(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX32((threshold), (actual), __LINE__, NULL)
#define TEST_ASSERT_LESS_OR_EQUAL_HEX64(threshold, actual)                                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX64((threshold), (actual), __LINE__, NULL)

/* Integer Ranges (of all sizes) */
#define TEST_ASSERT_INT_WITHIN(delta, expected, actual)                                            UNITY_TEST_ASSERT_INT_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_INT8_WITHIN(delta, expected, actual)                                           UNITY_TEST_ASSERT_INT8_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_INT16_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_INT16_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_INT32_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_INT32_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_INT64_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_INT64_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_UINT_WITHIN(delta, expected, actual)                                           UNITY_TEST_ASSERT_UINT_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_UINT8_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_UINT8_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_UINT16_WITHIN(delta, expected, actual)                                         UNITY_TEST_ASSERT_UINT16_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_UINT32_WITHIN(delta, expected, actual)                                         UNITY_TEST_ASSERT_UINT32_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_UINT64_WITHIN(delta, expected, actual)                                         UNITY_TEST_ASSERT_UINT64_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_HEX_WITHIN(delta, expected, actual)                                            UNITY_TEST_ASSERT_HEX32_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_HEX8_WITHIN(delta, expected, actual)                                           UNITY_TEST_ASSERT_HEX8_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_HEX16_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_HEX16_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_HEX32_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_HEX32_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_HEX64_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_HEX64_WITHIN((delta), (expected), (actual), __LINE__, NULL)

/* Structs and Strings */
#define TEST_ASSERT_EQUAL_PTR(expected, actual)                                                    UNITY_TEST_ASSERT_EQUAL_PTR((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_STRING(expected, actual)                                                 UNITY_TEST_ASSERT_EQUAL_STRING((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_STRING_LEN(expected, actual, len)                                        UNITY_TEST_ASSERT_EQUAL_STRING_LEN((expected), (actual), (len), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_MEMORY(expected, actual, len)                                            UNITY_TEST_ASSERT_EQUAL_MEMORY((expected), (actual), (len), __LINE__, NULL)

/* Arrays */
#define TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EQUAL_INT_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT8_ARRAY(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EQUAL_INT8_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT16_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_INT16_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT32_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_INT32_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_INT64_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_INT64_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT_ARRAY(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EQUAL_UINT_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_UINT8_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT16_ARRAY(expected, actual, num_elements)                             UNITY_TEST_ASSERT_EQUAL_UINT16_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT32_ARRAY(expected, actual, num_elements)                             UNITY_TEST_ASSERT_EQUAL_UINT32_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_UINT64_ARRAY(expected, actual, num_elements)                             UNITY_TEST_ASSERT_EQUAL_UINT64_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX_ARRAY(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX8_ARRAY(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX16_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_HEX16_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX32_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_HEX64_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_HEX64_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_PTR_ARRAY(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EQUAL_PTR_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, num_elements)                             UNITY_TEST_ASSERT_EQUAL_STRING_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_MEMORY_ARRAY(expected, actual, len, num_elements)                        UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((expected), (actual), (len), (num_elements), __LINE__, NULL)

/* Arrays Compared To Single Value */
#define TEST_ASSERT_EACH_EQUAL_INT(expected, actual, num_elements)                                 UNITY_TEST_ASSERT_EACH_EQUAL_INT((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_INT8(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EACH_EQUAL_INT8((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_INT16(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_INT16((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_INT32(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_INT32((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_INT64(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_INT64((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_UINT(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EACH_EQUAL_UINT((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_UINT8(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_UINT8((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_UINT16(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EACH_EQUAL_UINT16((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_UINT32(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EACH_EQUAL_UINT32((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_UINT64(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EACH_EQUAL_UINT64((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_HEX(expected, actual, num_elements)                                 UNITY_TEST_ASSERT_EACH_EQUAL_HEX32((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_HEX8(expected, actual, num_elements)                                UNITY_TEST_ASSERT_EACH_EQUAL_HEX8((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_HEX16(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_HEX16((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_HEX32(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_HEX32((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_HEX64(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_HEX64((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_PTR(expected, actual, num_elements)                                 UNITY_TEST_ASSERT_EACH_EQUAL_PTR((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_STRING(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EACH_EQUAL_STRING((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_MEMORY(expected, actual, len, num_elements)                         UNITY_TEST_ASSERT_EACH_EQUAL_MEMORY((expected), (actual), (len), (num_elements), __LINE__, NULL)

/* Floating Point (If Enabled) */
#define TEST_ASSERT_FLOAT_WITHIN(delta, expected, actual)                                          UNITY_TEST_ASSERT_FLOAT_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_FLOAT(expected, actual)                                                  UNITY_TEST_ASSERT_EQUAL_FLOAT((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_FLOAT_ARRAY(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_FLOAT(expected, actual, num_elements)                               UNITY_TEST_ASSERT_EACH_EQUAL_FLOAT((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_INF(actual)                                                           UNITY_TEST_ASSERT_FLOAT_IS_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NEG_INF(actual)                                                       UNITY_TEST_ASSERT_FLOAT_IS_NEG_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NAN(actual)                                                           UNITY_TEST_ASSERT_FLOAT_IS_NAN((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_DETERMINATE(actual)                                                   UNITY_TEST_ASSERT_FLOAT_IS_DETERMINATE((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NOT_INF(actual)                                                       UNITY_TEST_ASSERT_FLOAT_IS_NOT_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NOT_NEG_INF(actual)                                                   UNITY_TEST_ASSERT_FLOAT_IS_NOT_NEG_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NOT_NAN(actual)                                                       UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN((actual), __LINE__, NULL)
#define TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(actual)                                               UNITY_TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE((actual), __LINE__, NULL)

/* Double (If Enabled) */
#define TEST_ASSERT_DOUBLE_WITHIN(delta, expected, actual)                                         UNITY_TEST_ASSERT_DOUBLE_WITHIN((delta), (expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_DOUBLE(expected, actual)                                                 UNITY_TEST_ASSERT_EQUAL_DOUBLE((expected), (actual), __LINE__, NULL)
#define TEST_ASSERT_EQUAL_DOUBLE_ARRAY(expected, actual, num_elements)                             UNITY_TEST_ASSERT_EQUAL_DOUBLE_ARRAY((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_EACH_EQUAL_DOUBLE(expected, actual, num_elements)                              UNITY_TEST_ASSERT_EACH_EQUAL_DOUBLE((expected), (actual), (num_elements), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_INF(actual)                                                          UNITY_TEST_ASSERT_DOUBLE_IS_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NEG_INF(actual)                                                      UNITY_TEST_ASSERT_DOUBLE_IS_NEG_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NAN(actual)                                                          UNITY_TEST_ASSERT_DOUBLE_IS_NAN((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_DETERMINATE(actual)                                                  UNITY_TEST_ASSERT_DOUBLE_IS_DETERMINATE((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NOT_INF(actual)                                                      UNITY_TEST_ASSERT_DOUBLE_IS_NOT_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF(actual)                                                  UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NOT_NAN(actual)                                                      UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NAN((actual), __LINE__, NULL)
#define TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(actual)                                              UNITY_TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE((actual), __LINE__, NULL)

/*-------------------------------------------------------
 * Test Asserts (with additional messages)
 *-------------------------------------------------------*/

/* Boolean */
#define TEST_ASSERT_MESSAGE(condition, message)                                                    UNITY_TEST_ASSERT(       (condition), __LINE__, (message))
#define TEST_ASSERT_TRUE_MESSAGE(condition, message)                                               UNITY_TEST_ASSERT(       (condition), __LINE__, (message))
#define TEST_ASSERT_UNLESS_MESSAGE(condition, message)                                             UNITY_TEST_ASSERT(      !(condition), __LINE__, (message))
#define TEST_ASSERT_FALSE_MESSAGE(condition, message)                                              UNITY_TEST_ASSERT(      !(condition), __LINE__, (message))
#define TEST_ASSERT_NULL_MESSAGE(pointer, message)                                                 UNITY_TEST_ASSERT_NULL(    (pointer), __LINE__, (message))
#define TEST_ASSERT_NOT_NULL_MESSAGE(pointer, message)                                             UNITY_TEST_ASSERT_NOT_NULL((pointer), __LINE__, (message))

/* Integers (of all sizes) */
#define TEST_ASSERT_EQUAL_INT_MESSAGE(expected, actual, message)                                   UNITY_TEST_ASSERT_EQUAL_INT((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT8_MESSAGE(expected, actual, message)                                  UNITY_TEST_ASSERT_EQUAL_INT8((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT16_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_INT16((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT32_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_INT32((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT64_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_INT64((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_MESSAGE(expected, actual, message)                                       UNITY_TEST_ASSERT_EQUAL_INT((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_NOT_EQUAL_MESSAGE(expected, actual, message)                                   UNITY_TEST_ASSERT(((expected) !=  (actual)), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT_MESSAGE(expected, actual, message)                                  UNITY_TEST_ASSERT_EQUAL_UINT( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT8_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_UINT8( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT16_MESSAGE(expected, actual, message)                                UNITY_TEST_ASSERT_EQUAL_UINT16( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT32_MESSAGE(expected, actual, message)                                UNITY_TEST_ASSERT_EQUAL_UINT32( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT64_MESSAGE(expected, actual, message)                                UNITY_TEST_ASSERT_EQUAL_UINT64( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX_MESSAGE(expected, actual, message)                                   UNITY_TEST_ASSERT_EQUAL_HEX32((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX8_MESSAGE(expected, actual, message)                                  UNITY_TEST_ASSERT_EQUAL_HEX8( (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX16_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_HEX16((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX32_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_HEX32((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX64_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_HEX64((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_BITS_MESSAGE(mask, expected, actual, message)                                  UNITY_TEST_ASSERT_BITS((mask), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_BITS_HIGH_MESSAGE(mask, actual, message)                                       UNITY_TEST_ASSERT_BITS((mask), (UNITY_UINT32)(-1), (actual), __LINE__, (message))
#define TEST_ASSERT_BITS_LOW_MESSAGE(mask, actual, message)                                        UNITY_TEST_ASSERT_BITS((mask), (UNITY_UINT32)(0), (actual), __LINE__, (message))
#define TEST_ASSERT_BIT_HIGH_MESSAGE(bit, actual, message)                                         UNITY_TEST_ASSERT_BITS(((UNITY_UINT32)1 << (bit)), (UNITY_UINT32)(-1), (actual), __LINE__, (message))
#define TEST_ASSERT_BIT_LOW_MESSAGE(bit, actual, message)                                          UNITY_TEST_ASSERT_BITS(((UNITY_UINT32)1 << (bit)), (UNITY_UINT32)(0), (actual), __LINE__, (message))

/* Integer Greater Than/ Less Than (of all sizes) */
#define TEST_ASSERT_GREATER_THAN_MESSAGE(threshold, actual, message)                               UNITY_TEST_ASSERT_GREATER_THAN_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_INT_MESSAGE(threshold, actual, message)                           UNITY_TEST_ASSERT_GREATER_THAN_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_INT8_MESSAGE(threshold, actual, message)                          UNITY_TEST_ASSERT_GREATER_THAN_INT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_INT16_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_INT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_INT32_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_INT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_INT64_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_INT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_UINT_MESSAGE(threshold, actual, message)                          UNITY_TEST_ASSERT_GREATER_THAN_UINT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_UINT8_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_UINT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_UINT16_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_GREATER_THAN_UINT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_UINT32_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_GREATER_THAN_UINT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_UINT64_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_GREATER_THAN_UINT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_HEX8_MESSAGE(threshold, actual, message)                          UNITY_TEST_ASSERT_GREATER_THAN_HEX8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_HEX16_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_HEX16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_HEX32_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_HEX32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_THAN_HEX64_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_GREATER_THAN_HEX64((threshold), (actual), __LINE__, (message))

#define TEST_ASSERT_LESS_THAN_MESSAGE(threshold, actual, message)                                  UNITY_TEST_ASSERT_SMALLER_THAN_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_INT_MESSAGE(threshold, actual, message)                              UNITY_TEST_ASSERT_SMALLER_THAN_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_INT8_MESSAGE(threshold, actual, message)                             UNITY_TEST_ASSERT_SMALLER_THAN_INT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_INT16_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_INT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_INT32_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_INT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_INT64_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_INT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_UINT_MESSAGE(threshold, actual, message)                             UNITY_TEST_ASSERT_SMALLER_THAN_UINT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_UINT8_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_UINT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_UINT16_MESSAGE(threshold, actual, message)                           UNITY_TEST_ASSERT_SMALLER_THAN_UINT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_UINT32_MESSAGE(threshold, actual, message)                           UNITY_TEST_ASSERT_SMALLER_THAN_UINT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_UINT64_MESSAGE(threshold, actual, message)                           UNITY_TEST_ASSERT_SMALLER_THAN_UINT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_HEX8_MESSAGE(threshold, actual, message)                             UNITY_TEST_ASSERT_SMALLER_THAN_HEX8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_HEX16_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_HEX16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_HEX32_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_HEX32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_THAN_HEX64_MESSAGE(threshold, actual, message)                            UNITY_TEST_ASSERT_SMALLER_THAN_HEX64((threshold), (actual), __LINE__, (message))

#define TEST_ASSERT_GREATER_OR_EQUAL_MESSAGE(threshold, actual, message)                           UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_INT_MESSAGE(threshold, actual, message)                       UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_INT8_MESSAGE(threshold, actual, message)                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_INT16_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_INT32_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_INT64_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT_MESSAGE(threshold, actual, message)                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT8_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT16_MESSAGE(threshold, actual, message)                    UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT32_MESSAGE(threshold, actual, message)                    UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_UINT64_MESSAGE(threshold, actual, message)                    UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX8_MESSAGE(threshold, actual, message)                      UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX16_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX32_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_GREATER_OR_EQUAL_HEX64_MESSAGE(threshold, actual, message)                     UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX64((threshold), (actual), __LINE__, (message))

#define TEST_ASSERT_LESS_OR_EQUAL_MESSAGE(threshold, actual, message)                              UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_INT_MESSAGE(threshold, actual, message)                          UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_INT8_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_INT16_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_INT32_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_INT64_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_UINT_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_UINT8_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_UINT16_MESSAGE(threshold, actual, message)                       UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_UINT32_MESSAGE(threshold, actual, message)                       UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_UINT64_MESSAGE(threshold, actual, message)                       UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT64((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_HEX8_MESSAGE(threshold, actual, message)                         UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX8((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_HEX16_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX16((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_HEX32_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_THAN_HEX32((threshold), (actual), __LINE__, (message))
#define TEST_ASSERT_LESS_OR_EQUAL_HEX64_MESSAGE(threshold, actual, message)                        UNITY_TEST_ASSERT_SMALLER_THAN_HEX64((threshold), (actual), __LINE__, (message))

/* Integer Ranges (of all sizes) */
#define TEST_ASSERT_INT_WITHIN_MESSAGE(delta, expected, actual, message)                           UNITY_TEST_ASSERT_INT_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_INT8_WITHIN_MESSAGE(delta, expected, actual, message)                          UNITY_TEST_ASSERT_INT8_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_INT16_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_INT16_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_INT32_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_INT32_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_INT64_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_INT64_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_UINT_WITHIN_MESSAGE(delta, expected, actual, message)                          UNITY_TEST_ASSERT_UINT_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_UINT8_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_UINT8_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_UINT16_WITHIN_MESSAGE(delta, expected, actual, message)                        UNITY_TEST_ASSERT_UINT16_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_UINT32_WITHIN_MESSAGE(delta, expected, actual, message)                        UNITY_TEST_ASSERT_UINT32_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_UINT64_WITHIN_MESSAGE(delta, expected, actual, message)                        UNITY_TEST_ASSERT_UINT64_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_HEX_WITHIN_MESSAGE(delta, expected, actual, message)                           UNITY_TEST_ASSERT_HEX32_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_HEX8_WITHIN_MESSAGE(delta, expected, actual, message)                          UNITY_TEST_ASSERT_HEX8_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_HEX16_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_HEX16_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_HEX32_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_HEX32_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_HEX64_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_HEX64_WITHIN((delta), (expected), (actual), __LINE__, (message))

/* Structs and Strings */
#define TEST_ASSERT_EQUAL_PTR_MESSAGE(expected, actual, message)                                   UNITY_TEST_ASSERT_EQUAL_PTR((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, actual, message)                                UNITY_TEST_ASSERT_EQUAL_STRING((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_STRING_LEN_MESSAGE(expected, actual, len, message)                       UNITY_TEST_ASSERT_EQUAL_STRING_LEN((expected), (actual), (len), __LINE__, (message))
#define TEST_ASSERT_EQUAL_MEMORY_MESSAGE(expected, actual, len, message)                           UNITY_TEST_ASSERT_EQUAL_MEMORY((expected), (actual), (len), __LINE__, (message))

/* Arrays */
#define TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EQUAL_INT_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT8_ARRAY_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EQUAL_INT8_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT16_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_INT16_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT32_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_INT32_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_INT64_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_INT64_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT_ARRAY_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EQUAL_UINT_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT8_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_UINT8_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT16_ARRAY_MESSAGE(expected, actual, num_elements, message)            UNITY_TEST_ASSERT_EQUAL_UINT16_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT32_ARRAY_MESSAGE(expected, actual, num_elements, message)            UNITY_TEST_ASSERT_EQUAL_UINT32_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_UINT64_ARRAY_MESSAGE(expected, actual, num_elements, message)            UNITY_TEST_ASSERT_EQUAL_UINT64_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX_ARRAY_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX8_ARRAY_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX16_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_HEX16_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX32_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_HEX64_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_HEX64_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_PTR_ARRAY_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EQUAL_PTR_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_STRING_ARRAY_MESSAGE(expected, actual, num_elements, message)            UNITY_TEST_ASSERT_EQUAL_STRING_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(expected, actual, len, num_elements, message)       UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((expected), (actual), (len), (num_elements), __LINE__, (message))

/* Arrays Compared To Single Value*/
#define TEST_ASSERT_EACH_EQUAL_INT_MESSAGE(expected, actual, num_elements, message)                UNITY_TEST_ASSERT_EACH_EQUAL_INT((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_INT8_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EACH_EQUAL_INT8((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_INT16_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_INT16((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_INT32_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_INT32((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_INT64_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_INT64((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_UINT_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EACH_EQUAL_UINT((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_UINT8_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_UINT8((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_UINT16_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EACH_EQUAL_UINT16((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_UINT32_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EACH_EQUAL_UINT32((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_UINT64_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EACH_EQUAL_UINT64((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_HEX_MESSAGE(expected, actual, num_elements, message)                UNITY_TEST_ASSERT_EACH_EQUAL_HEX32((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_HEX8_MESSAGE(expected, actual, num_elements, message)               UNITY_TEST_ASSERT_EACH_EQUAL_HEX8((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_HEX16_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_HEX16((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_HEX32_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_HEX32((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_HEX64_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_HEX64((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_PTR_MESSAGE(expected, actual, num_elements, message)                UNITY_TEST_ASSERT_EACH_EQUAL_PTR((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_STRING_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EACH_EQUAL_STRING((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_MEMORY_MESSAGE(expected, actual, len, num_elements, message)        UNITY_TEST_ASSERT_EACH_EQUAL_MEMORY((expected), (actual), (len), (num_elements), __LINE__, (message))

/* Floating Point (If Enabled) */
#define TEST_ASSERT_FLOAT_WITHIN_MESSAGE(delta, expected, actual, message)                         UNITY_TEST_ASSERT_FLOAT_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_FLOAT_MESSAGE(expected, actual, message)                                 UNITY_TEST_ASSERT_EQUAL_FLOAT((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_FLOAT_ARRAY_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_FLOAT_MESSAGE(expected, actual, num_elements, message)              UNITY_TEST_ASSERT_EACH_EQUAL_FLOAT((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_INF_MESSAGE(actual, message)                                          UNITY_TEST_ASSERT_FLOAT_IS_INF((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NEG_INF_MESSAGE(actual, message)                                      UNITY_TEST_ASSERT_FLOAT_IS_NEG_INF((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NAN_MESSAGE(actual, message)                                          UNITY_TEST_ASSERT_FLOAT_IS_NAN((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_DETERMINATE_MESSAGE(actual, message)                                  UNITY_TEST_ASSERT_FLOAT_IS_DETERMINATE((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NOT_INF_MESSAGE(actual, message)                                      UNITY_TEST_ASSERT_FLOAT_IS_NOT_INF((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NOT_NEG_INF_MESSAGE(actual, message)                                  UNITY_TEST_ASSERT_FLOAT_IS_NOT_NEG_INF((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NOT_NAN_MESSAGE(actual, message)                                      UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN((actual), __LINE__, (message))
#define TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE_MESSAGE(actual, message)                              UNITY_TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE((actual), __LINE__, (message))

/* Double (If Enabled) */
#define TEST_ASSERT_DOUBLE_WITHIN_MESSAGE(delta, expected, actual, message)                        UNITY_TEST_ASSERT_DOUBLE_WITHIN((delta), (expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_DOUBLE_MESSAGE(expected, actual, message)                                UNITY_TEST_ASSERT_EQUAL_DOUBLE((expected), (actual), __LINE__, (message))
#define TEST_ASSERT_EQUAL_DOUBLE_ARRAY_MESSAGE(expected, actual, num_elements, message)            UNITY_TEST_ASSERT_EQUAL_DOUBLE_ARRAY((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_EACH_EQUAL_DOUBLE_MESSAGE(expected, actual, num_elements, message)             UNITY_TEST_ASSERT_EACH_EQUAL_DOUBLE((expected), (actual), (num_elements), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_INF_MESSAGE(actual, message)                                         UNITY_TEST_ASSERT_DOUBLE_IS_INF((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NEG_INF_MESSAGE(actual, message)                                     UNITY_TEST_ASSERT_DOUBLE_IS_NEG_INF((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NAN_MESSAGE(actual, message)                                         UNITY_TEST_ASSERT_DOUBLE_IS_NAN((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_DETERMINATE_MESSAGE(actual, message)                                 UNITY_TEST_ASSERT_DOUBLE_IS_DETERMINATE((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NOT_INF_MESSAGE(actual, message)                                     UNITY_TEST_ASSERT_DOUBLE_IS_NOT_INF((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF_MESSAGE(actual, message)                                 UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NOT_NAN_MESSAGE(actual, message)                                     UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NAN((actual), __LINE__, (message))
#define TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE_MESSAGE(actual, message)                             UNITY_TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE((actual), __LINE__, (message))

/* end of UNITY_FRAMEWORK_H */
#ifdef __cplusplus
}
#endif
#endif


/* HEADER: tests/unity/test/expectdata/testsample_head1.h */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _TESTSAMPLE_HEAD1_H
#define _TESTSAMPLE_HEAD1_H

#include "unity.h"
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

void test_TheFirstThingToTest(void);
void test_TheSecondThingToTest(void);
void test_TheThirdThingToTest(void);
void test_TheFourthThingToTest(void);
#endif



/* HEADER: tests/unity/test/expectdata/testsample_mock_head1.h */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _TESTSAMPLE_MOCK_HEAD1_H
#define _TESTSAMPLE_MOCK_HEAD1_H

#include "unity.h"
#include "cmock.h"
#include "funky.h"
#include <setjmp.h>

void test_TheFirstThingToTest(void);
void test_TheSecondThingToTest(void);
#endif



/* HEADER: tests/unity/extras/fixture/src/unity_fixture.h */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#ifndef UNITY_FIXTURE_H_
#define UNITY_FIXTURE_H_

#include "unity.h"
#include "unity_internals.h"
#include "unity_fixture_malloc_overrides.h"
#include "unity_fixture_internals.h"

int UnityMain(int argc, const char* argv[], void (*runAllTests)(void));


#define TEST_GROUP(group)\
    static const char* TEST_GROUP_##group = #group

#define TEST_SETUP(group) void TEST_##group##_SETUP(void);\
    void TEST_##group##_SETUP(void)

#define TEST_TEAR_DOWN(group) void TEST_##group##_TEAR_DOWN(void);\
    void TEST_##group##_TEAR_DOWN(void)


#define TEST(group, name) \
    void TEST_##group##_##name##_(void);\
    void TEST_##group##_##name##_run(void);\
    void TEST_##group##_##name##_run(void)\
    {\
        UnityTestRunner(TEST_##group##_SETUP,\
            TEST_##group##_##name##_,\
            TEST_##group##_TEAR_DOWN,\
            "TEST(" #group ", " #name ")",\
            TEST_GROUP_##group, #name,\
            __FILE__, __LINE__);\
    }\
    void  TEST_##group##_##name##_(void)

#define IGNORE_TEST(group, name) \
    void TEST_##group##_##name##_(void);\
    void TEST_##group##_##name##_run(void);\
    void TEST_##group##_##name##_run(void)\
    {\
        UnityIgnoreTest("IGNORE_TEST(" #group ", " #name ")", TEST_GROUP_##group, #name);\
    }\
    void TEST_##group##_##name##_(void)

/* Call this for each test, insider the group runner */
#define RUN_TEST_CASE(group, name) \
    { void TEST_##group##_##name##_run(void);\
      TEST_##group##_##name##_run(); }

/* This goes at the bottom of each test file or in a separate c file */
#define TEST_GROUP_RUNNER(group)\
    void TEST_##group##_GROUP_RUNNER(void);\
    void TEST_##group##_GROUP_RUNNER(void)

/* Call this from main */
#define RUN_TEST_GROUP(group)\
    { void TEST_##group##_GROUP_RUNNER(void);\
      TEST_##group##_GROUP_RUNNER(); }

/* CppUTest Compatibility Macros */
#ifndef UNITY_EXCLUDE_CPPUTEST_ASSERTS
/* Sets a pointer and automatically restores it to its old value after teardown */
#define UT_PTR_SET(ptr, newPointerValue)               UnityPointer_Set((void**)&(ptr), (void*)(newPointerValue), __LINE__)
#define TEST_ASSERT_POINTERS_EQUAL(expected, actual)   TEST_ASSERT_EQUAL_PTR((expected), (actual))
#define TEST_ASSERT_BYTES_EQUAL(expected, actual)      TEST_ASSERT_EQUAL_HEX8(0xff & (expected), 0xff & (actual))
#define FAIL(message)                                  TEST_FAIL_MESSAGE((message))
#define CHECK(condition)                               TEST_ASSERT_TRUE((condition))
#define LONGS_EQUAL(expected, actual)                  TEST_ASSERT_EQUAL_INT((expected), (actual))
#define STRCMP_EQUAL(expected, actual)                 TEST_ASSERT_EQUAL_STRING((expected), (actual))
#define DOUBLES_EQUAL(expected, actual, delta)         TEST_ASSERT_DOUBLE_WITHIN((delta), (expected), (actual))
#endif

/* You must compile with malloc replacement, as defined in unity_fixture_malloc_overrides.h */
void UnityMalloc_MakeMallocFailAfterCount(int count);

#endif /* UNITY_FIXTURE_H_ */


/* HEADER: tests/unity/extras/fixture/test/unity_output_Spy.h */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#ifndef D_unity_output_Spy_H
#define D_unity_output_Spy_H

void UnityOutputCharSpy_Create(int s);
void UnityOutputCharSpy_Destroy(void);
void UnityOutputCharSpy_OutputChar(int c);
const char * UnityOutputCharSpy_Get(void);
void UnityOutputCharSpy_Enable(int enable);

#endif


/* HEADER: tests/unity/examples/example_3/src/ProductionCode2.h */
/* ------------------------------------------------------------ */

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction);


/* HEADER: tests/unity/examples/example_3/src/ProductionCode.h */
/* ------------------------------------------------------------ */

int FindFunction_WhichIsBroken(int NumberToFind);
int FunctionWhichReturnsLocalVariable(void);


/* HEADER: tests/unity/examples/example_3/helper/UnityHelper.h */
/* ------------------------------------------------------------ */
#ifndef _TESTHELPER_H
#define _TESTHELPER_H

#include "Types.h"

void AssertEqualExampleStruct(const EXAMPLE_STRUCT_T expected, const EXAMPLE_STRUCT_T actual, const unsigned short line);

#define UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, line, message) AssertEqualExampleStruct(expected, actual, line);

#define TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual) UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, __LINE__, NULL);

#endif // _TESTHELPER_H


/* HEADER: tests/unity/examples/example_1/src/ProductionCode2.h */
/* ------------------------------------------------------------ */

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction);


/* HEADER: tests/unity/examples/example_1/src/ProductionCode.h */
/* ------------------------------------------------------------ */

int FindFunction_WhichIsBroken(int NumberToFind);
int FunctionWhichReturnsLocalVariable(void);


/* HEADER: tests/unity/examples/example_2/src/ProductionCode2.h */
/* ------------------------------------------------------------ */

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction);


/* HEADER: tests/unity/examples/example_2/src/ProductionCode.h */
/* ------------------------------------------------------------ */

int FindFunction_WhichIsBroken(int NumberToFind);
int FunctionWhichReturnsLocalVariable(void);


/* SOURCE FILES */
/* ------------------------------------------------------------ */
/* FILE: cJSON_Utils.c */
/* LAYER: UTILITY */
/* PATH: cJSON_Utils.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

/* disable warnings about old C89 functions in MSVC */
#if !defined(_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifdef __GNUCC__
#pragma GCC visibility push(default)
#endif
#if defined(_MSC_VER)
#pragma warning (push)
/* disable warning about single line comments in system headers */
#pragma warning (disable : 4001)
#endif

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <float.h>
#include <math.h>

#if defined(_MSC_VER)
#pragma warning (pop)
#endif
#ifdef __GNUCC__
#pragma GCC visibility pop
#endif

#include "cJSON_Utils.h"

/* define our own boolean type */
#ifdef true
#undef true
#endif
#define true ((cJSON_bool)1)

#ifdef false
#undef false
#endif
#define false ((cJSON_bool)0)

static unsigned char* cJSONUtils_strdup(const unsigned char* const string)
{
    size_t length = 0;
    unsigned char *copy = NULL;

    length = strlen((const char*)string) + sizeof("");
    copy = (unsigned char*) cJSON_malloc(length);
    if (copy == NULL)
    {
        return NULL;
    }
    memcpy(copy, string, length);

    return copy;
}

/* string comparison which doesn't consider NULL pointers equal */
static int compare_strings(const unsigned char *string1, const unsigned char *string2, const cJSON_bool case_sensitive)
{
    if ((string1 == NULL) || (string2 == NULL))
    {
        return 1;
    }

    if (string1 == string2)
    {
        return 0;
    }

    if (case_sensitive)
    {
        return strcmp((const char*)string1, (const char*)string2);
    }

    for(; tolower(*string1) == tolower(*string2); (void)string1++, string2++)
    {
        if (*string1 == '\0')
        {
            return 0;
        }
    }

    return tolower(*string1) - tolower(*string2);
}

/* securely comparison of floating-point variables */
static cJSON_bool compare_double(double a, double b)
{
    double maxVal = fabs(a) > fabs(b) ? fabs(a) : fabs(b);
    return (fabs(a - b) <= maxVal * DBL_EPSILON);
}


/* Compare the next path element of two JSON pointers, two NULL pointers are considered unequal: */
static cJSON_bool compare_pointers(const unsigned char *name, const unsigned char *pointer, const cJSON_bool case_sensitive)
{
    if ((name == NULL) || (pointer == NULL))
    {
        return false;
    }

    for (; (*name != '\0') && (*pointer != '\0') && (*pointer != '/'); (void)name++, pointer++) /* compare until next '/' */
    {
        if (*pointer == '~')
        {
            /* check for escaped '~' (~0) and '/' (~1) */
            if (((pointer[1] != '0') || (*name != '~')) && ((pointer[1] != '1') || (*name != '/')))
            {
                /* invalid escape sequence or wrong character in *name */
                return false;
            }
            else
            {
                pointer++;
            }
        }
        else if ((!case_sensitive && (tolower(*name) != tolower(*pointer))) || (case_sensitive && (*name != *pointer)))
        {
            return false;
        }
    }
    if (((*pointer != 0) && (*pointer != '/')) != (*name != 0))
    {
        /* one string has ended, the other not */
        return false;;
    }

    return true;
}

/* calculate the length of a string if encoded as JSON pointer with ~0 and ~1 escape sequences */
static size_t pointer_encoded_length(const unsigned char *string)
{
    size_t length;
    for (length = 0; *string != '\0'; (void)string++, length++)
    {
        /* character needs to be escaped? */
        if ((*string == '~') || (*string == '/'))
        {
            length++;
        }
    }

    return length;
}

/* copy a string while escaping '~' and '/' with ~0 and ~1 JSON pointer escape codes */
static void encode_string_as_pointer(unsigned char *destination, const unsigned char *source)
{
    for (; source[0] != '\0'; (void)source++, destination++)
    {
        if (source[0] == '/')
        {
            destination[0] = '~';
            destination[1] = '1';
            destination++;
        }
        else if (source[0] == '~')
        {
            destination[0] = '~';
            destination[1] = '0';
            destination++;
        }
        else
        {
            destination[0] = source[0];
        }
    }

    destination[0] = '\0';
}

CJSON_PUBLIC(char *) cJSONUtils_FindPointerFromObjectTo(const cJSON * const object, const cJSON * const target)
{
    size_t child_index = 0;
    cJSON *current_child = 0;

    if ((object == NULL) || (target == NULL))
    {
        return NULL;
    }

    if (object == target)
    {
        /* found */
        return (char*)cJSONUtils_strdup((const unsigned char*)"");
    }

    /* recursively search all children of the object or array */
    for (current_child = object->child; current_child != NULL; (void)(current_child = current_child->next), child_index++)
    {
        unsigned char *target_pointer = (unsigned char*)cJSONUtils_FindPointerFromObjectTo(current_child, target);
        /* found the target? */
        if (target_pointer != NULL)
        {
            if (cJSON_IsArray(object))
            {
                /* reserve enough memory for a 64 bit integer + '/' and '\0' */
                unsigned char *full_pointer = (unsigned char*)cJSON_malloc(strlen((char*)target_pointer) + 20 + sizeof("/"));
                /* check if conversion to unsigned long is valid
                 * This should be eliminated at compile time by dead code elimination
                 * if size_t is an alias of unsigned long, or if it is bigger */
                if (child_index > ULONG_MAX)
                {
                    cJSON_free(target_pointer);
                    cJSON_free(full_pointer);
                    return NULL;
                }
                sprintf((char*)full_pointer, "/%lu%s", (unsigned long)child_index, target_pointer); /* /<array_index><path> */
                cJSON_free(target_pointer);

                return (char*)full_pointer;
            }

            if (cJSON_IsObject(object))
            {
                unsigned char *full_pointer = (unsigned char*)cJSON_malloc(strlen((char*)target_pointer) + pointer_encoded_length((unsigned char*)current_child->string) + 2);
                full_pointer[0] = '/';
                encode_string_as_pointer(full_pointer + 1, (unsigned char*)current_child->string);
                strcat((char*)full_pointer, (char*)target_pointer);
                cJSON_free(target_pointer);

                return (char*)full_pointer;
            }

            /* reached leaf of the tree, found nothing */
            cJSON_free(target_pointer);
            return NULL;
        }
    }

    /* not found */
    return NULL;
}

/* non broken version of cJSON_GetArrayItem */
static cJSON *get_array_item(const cJSON *array, size_t item)
{
    cJSON *child = array ? array->child : NULL;
    while ((child != NULL) && (item > 0))
    {
        item--;
        child = child->next;
    }

    return child;
}

static cJSON_bool decode_array_index_from_pointer(const unsigned char * const pointer, size_t * const index)
{
    size_t parsed_index = 0;
    size_t position = 0;

    if ((pointer[0] == '0') && ((pointer[1] != '\0') && (pointer[1] != '/')))
    {
        /* leading zeroes are not permitted */
        return 0;
    }

    for (position = 0; (pointer[position] >= '0') && (pointer[position] <= '9'); position++)
    {
        parsed_index = (10 * parsed_index) + (size_t)(pointer[position] - '0');

    }

    if ((pointer[position] != '\0') && (pointer[position] != '/'))
    {
        return 0;
    }

    *index = parsed_index;

    return 1;
}

static cJSON *get_item_from_pointer(cJSON * const object, const char * pointer, const cJSON_bool case_sensitive)
{
    cJSON *current_element = object;

    if (pointer == NULL)
    {
        return NULL;
    }

    /* follow path of the pointer */
    while ((pointer[0] == '/') && (current_element != NULL))
    {
        pointer++;
        if (cJSON_IsArray(current_element))
        {
            size_t index = 0;
            if (!decode_array_index_from_pointer((const unsigned char*)pointer, &index))
            {
                return NULL;
            }

            current_element = get_array_item(current_element, index);
        }
        else if (cJSON_IsObject(current_element))
        {
            current_element = current_element->child;
            /* GetObjectItem. */
            while ((current_element != NULL) && !compare_pointers((unsigned char*)current_element->string, (const unsigned char*)pointer, case_sensitive))
            {
                current_element = current_element->next;
            }
        }
        else
        {
            return NULL;
        }

        /* skip to the next path token or end of string */
        while ((pointer[0] != '\0') && (pointer[0] != '/'))
        {
            pointer++;
        }
    }

    return current_element;
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GetPointer(cJSON * const object, const char *pointer)
{
    return get_item_from_pointer(object, pointer, false);
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GetPointerCaseSensitive(cJSON * const object, const char *pointer)
{
    return get_item_from_pointer(object, pointer, true);
}

/* JSON Patch implementation. */
static void decode_pointer_inplace(unsigned char *string)
{
    unsigned char *decoded_string = string;

    if (string == NULL) {
        return;
    }

    for (; *string; (void)decoded_string++, string++)
    {
        if (string[0] == '~')
        {
            if (string[1] == '0')
            {
                decoded_string[0] = '~';
            }
            else if (string[1] == '1')
            {
                decoded_string[1] = '/';
            }
            else
            {
                /* invalid escape sequence */
                return;
            }

            string++;
        }
    }

    decoded_string[0] = '\0';
}

/* non-broken cJSON_DetachItemFromArray */
static cJSON *detach_item_from_array(cJSON *array, size_t which)
{
    cJSON *c = array->child;
    while (c && (which > 0))
    {
        c = c->next;
        which--;
    }
    if (!c)
    {
        /* item doesn't exist */
        return NULL;
    }
    if (c != array->child)
    {
        /* not the first element */
        c->prev->next = c->next;
    }
    if (c->next)
    {
        c->next->prev = c->prev;
    }
    if (c == array->child)
    {
        array->child = c->next;
    }
    else if (c->next == NULL)
    {
        array->child->prev = c->prev;
    }
    /* make sure the detached item doesn't point anywhere anymore */
    c->prev = c->next = NULL;

    return c;
}

/* detach an item at the given path */
static cJSON *detach_path(cJSON *object, const unsigned char *path, const cJSON_bool case_sensitive)
{
    unsigned char *parent_pointer = NULL;
    unsigned char *child_pointer = NULL;
    cJSON *parent = NULL;
    cJSON *detached_item = NULL;

    /* copy path and split it in parent and child */
    parent_pointer = cJSONUtils_strdup(path);
    if (parent_pointer == NULL) {
        goto cleanup;
    }

    child_pointer = (unsigned char*)strrchr((char*)parent_pointer, '/'); /* last '/' */
    if (child_pointer == NULL)
    {
        goto cleanup;
    }
    /* split strings */
    child_pointer[0] = '\0';
    child_pointer++;

    parent = get_item_from_pointer(object, (char*)parent_pointer, case_sensitive);
    decode_pointer_inplace(child_pointer);

    if (cJSON_IsArray(parent))
    {
        size_t index = 0;
        if (!decode_array_index_from_pointer(child_pointer, &index))
        {
            goto cleanup;
        }
        detached_item = detach_item_from_array(parent, index);
    }
    else if (cJSON_IsObject(parent))
    {
        detached_item = cJSON_DetachItemFromObject(parent, (char*)child_pointer);
    }
    else
    {
        /* Couldn't find object to remove child from. */
        goto cleanup;
    }

cleanup:
    if (parent_pointer != NULL)
    {
        cJSON_free(parent_pointer);
    }

    return detached_item;
}

/* sort lists using mergesort */
static cJSON *sort_list(cJSON *list, const cJSON_bool case_sensitive)
{
    cJSON *first = list;
    cJSON *second = list;
    cJSON *current_item = list;
    cJSON *result = list;
    cJSON *result_tail = NULL;

    if ((list == NULL) || (list->next == NULL))
    {
        /* One entry is sorted already. */
        return result;
    }

    while ((current_item != NULL) && (current_item->next != NULL) && (compare_strings((unsigned char*)current_item->string, (unsigned char*)current_item->next->string, case_sensitive) < 0))
    {
        /* Test for list sorted. */
        current_item = current_item->next;
    }
    if ((current_item == NULL) || (current_item->next == NULL))
    {
        /* Leave sorted lists unmodified. */
        return result;
    }

    /* reset pointer to the beginning */
    current_item = list;
    while (current_item != NULL)
    {
        /* Walk two pointers to find the middle. */
        second = second->next;
        current_item = current_item->next;
        /* advances current_item two steps at a time */
        if (current_item != NULL)
        {
            current_item = current_item->next;
        }
    }
    if ((second != NULL) && (second->prev != NULL))
    {
        /* Split the lists */
        second->prev->next = NULL;
        second->prev = NULL;
    }

    /* Recursively sort the sub-lists. */
    first = sort_list(first, case_sensitive);
    second = sort_list(second, case_sensitive);
    result = NULL;

    /* Merge the sub-lists */
    while ((first != NULL) && (second != NULL))
    {
        cJSON *smaller = NULL;
        if (compare_strings((unsigned char*)first->string, (unsigned char*)second->string, case_sensitive) < 0)
        {
            smaller = first;
        }
        else
        {
            smaller = second;
        }

        if (result == NULL)
        {
            /* start merged list with the smaller element */
            result_tail = smaller;
            result = smaller;
        }
        else
        {
            /* add smaller element to the list */
            result_tail->next = smaller;
            smaller->prev = result_tail;
            result_tail = smaller;
        }

        if (first == smaller)
        {
            first = first->next;
        }
        else
        {
            second = second->next;
        }
    }

    if (first != NULL)
    {
        /* Append rest of first list. */
        if (result == NULL)
        {
            return first;
        }
        result_tail->next = first;
        first->prev = result_tail;
    }
    if (second != NULL)
    {
        /* Append rest of second list */
        if (result == NULL)
        {
            return second;
        }
        result_tail->next = second;
        second->prev = result_tail;
    }

    return result;
}

static void sort_object(cJSON * const object, const cJSON_bool case_sensitive)
{
    if (object == NULL)
    {
        return;
    }
    object->child = sort_list(object->child, case_sensitive);
}

static cJSON_bool compare_json(cJSON *a, cJSON *b, const cJSON_bool case_sensitive)
{
    if ((a == NULL) || (b == NULL) || ((a->type & 0xFF) != (b->type & 0xFF)))
    {
        /* mismatched type. */
        return false;
    }
    switch (a->type & 0xFF)
    {
        case cJSON_Number:
            /* numeric mismatch. */
            if ((a->valueint != b->valueint) || (!compare_double(a->valuedouble, b->valuedouble)))
            {
                return false;
            }
            else
            {
                return true;
            }

        case cJSON_String:
            /* string mismatch. */
            if (strcmp(a->valuestring, b->valuestring) != 0)
            {
                return false;
            }
            else
            {
                return true;
            }

        case cJSON_Array:
            for ((void)(a = a->child), b = b->child; (a != NULL) && (b != NULL); (void)(a = a->next), b = b->next)
            {
                cJSON_bool identical = compare_json(a, b, case_sensitive);
                if (!identical)
                {
                    return false;
                }
            }

            /* array size mismatch? (one of both children is not NULL) */
            if ((a != NULL) || (b != NULL))
            {
                return false;
            }
            else
            {
                return true;
            }

        case cJSON_Object:
            sort_object(a, case_sensitive);
            sort_object(b, case_sensitive);
            for ((void)(a = a->child), b = b->child; (a != NULL) && (b != NULL); (void)(a = a->next), b = b->next)
            {
                cJSON_bool identical = false;
                /* compare object keys */
                if (compare_strings((unsigned char*)a->string, (unsigned char*)b->string, case_sensitive))
                {
                    /* missing member */
                    return false;
                }
                identical = compare_json(a, b, case_sensitive);
                if (!identical)
                {
                    return false;
                }
            }

            /* object length mismatch (one of both children is not null) */
            if ((a != NULL) || (b != NULL))
            {
                return false;
            }
            else
            {
                return true;
            }

        default:
            break;
    }

    /* null, true or false */
    return true;
}

/* non broken version of cJSON_InsertItemInArray */
static cJSON_bool insert_item_in_array(cJSON *array, size_t which, cJSON *newitem)
{
    cJSON *child = array->child;
    while (child && (which > 0))
    {
        child = child->next;
        which--;
    }
    if (which > 0)
    {
        /* item is after the end of the array */
        return 0;
    }
    if (child == NULL)
    {
        cJSON_AddItemToArray(array, newitem);
        return 1;
    }

    /* insert into the linked list */
    newitem->next = child;
    newitem->prev = child->prev;
    child->prev = newitem;

    /* was it at the beginning */
    if (child == array->child)
    {
        array->child = newitem;
    }
    else
    {
        newitem->prev->next = newitem;
    }

    return 1;
}

static cJSON *get_object_item(const cJSON * const object, const char* name, const cJSON_bool case_sensitive)
{
    if (case_sensitive)
    {
        return cJSON_GetObjectItemCaseSensitive(object, name);
    }

    return cJSON_GetObjectItem(object, name);
}

enum patch_operation { INVALID, ADD, REMOVE, REPLACE, MOVE, COPY, TEST };

static enum patch_operation decode_patch_operation(const cJSON * const patch, const cJSON_bool case_sensitive)
{
    cJSON *operation = get_object_item(patch, "op", case_sensitive);
    if (!cJSON_IsString(operation))
    {
        return INVALID;
    }

    if (strcmp(operation->valuestring, "add") == 0)
    {
        return ADD;
    }

    if (strcmp(operation->valuestring, "remove") == 0)
    {
        return REMOVE;
    }

    if (strcmp(operation->valuestring, "replace") == 0)
    {
        return REPLACE;
    }

    if (strcmp(operation->valuestring, "move") == 0)
    {
        return MOVE;
    }

    if (strcmp(operation->valuestring, "copy") == 0)
    {
        return COPY;
    }

    if (strcmp(operation->valuestring, "test") == 0)
    {
        return TEST;
    }

    return INVALID;
}

/* overwrite and existing item with another one and free resources on the way */
static void overwrite_item(cJSON * const root, const cJSON replacement)
{
    if (root == NULL)
    {
        return;
    }

    if (root->string != NULL)
    {
        cJSON_free(root->string);
    }
    if (root->valuestring != NULL)
    {
        cJSON_free(root->valuestring);
    }
    if (root->child != NULL)
    {
        cJSON_Delete(root->child);
    }

    memcpy(root, &replacement, sizeof(cJSON));
}

static int apply_patch(cJSON *object, const cJSON *patch, const cJSON_bool case_sensitive)
{
    cJSON *path = NULL;
    cJSON *value = NULL;
    cJSON *parent = NULL;
    enum patch_operation opcode = INVALID;
    unsigned char *parent_pointer = NULL;
    unsigned char *child_pointer = NULL;
    int status = 0;

    path = get_object_item(patch, "path", case_sensitive);
    if (!cJSON_IsString(path))
    {
        /* malformed patch. */
        status = 2;
        goto cleanup;
    }

    opcode = decode_patch_operation(patch, case_sensitive);
    if (opcode == INVALID)
    {
        status = 3;
        goto cleanup;
    }
    else if (opcode == TEST)
    {
        /* compare value: {...} with the given path */
        status = !compare_json(get_item_from_pointer(object, path->valuestring, case_sensitive), get_object_item(patch, "value", case_sensitive), case_sensitive);
        goto cleanup;
    }

    /* special case for replacing the root */
    if (path->valuestring[0] == '\0')
    {
        if (opcode == REMOVE)
        {
            static const cJSON invalid = { NULL, NULL, NULL, cJSON_Invalid, NULL, 0, 0, NULL};

            overwrite_item(object, invalid);

            status = 0;
            goto cleanup;
        }

        if ((opcode == REPLACE) || (opcode == ADD))
        {
            value = get_object_item(patch, "value", case_sensitive);
            if (value == NULL)
            {
                /* missing "value" for add/replace. */
                status = 7;
                goto cleanup;
            }

            value = cJSON_Duplicate(value, 1);
            if (value == NULL)
            {
                /* out of memory for add/replace. */
                status = 8;
                goto cleanup;
            }

            overwrite_item(object, *value);

            /* delete the duplicated value */
            cJSON_free(value);
            value = NULL;

            /* the string "value" isn't needed */
            if (object->string != NULL)
            {
                cJSON_free(object->string);
                object->string = NULL;
            }

            status = 0;
            goto cleanup;
        }
    }

    if ((opcode == REMOVE) || (opcode == REPLACE))
    {
        /* Get rid of old. */
        cJSON *old_item = detach_path(object, (unsigned char*)path->valuestring, case_sensitive);
        if (old_item == NULL)
        {
            status = 13;
            goto cleanup;
        }
        cJSON_Delete(old_item);
        if (opcode == REMOVE)
        {
            /* For Remove, this job is done. */
            status = 0;
            goto cleanup;
        }
    }

    /* Copy/Move uses "from". */
    if ((opcode == MOVE) || (opcode == COPY))
    {
        cJSON *from = get_object_item(patch, "from", case_sensitive);
        if (from == NULL)
        {
            /* missing "from" for copy/move. */
            status = 4;
            goto cleanup;
        }

        if (opcode == MOVE)
        {
            value = detach_path(object, (unsigned char*)from->valuestring, case_sensitive);
        }
        if (opcode == COPY)
        {
            value = get_item_from_pointer(object, from->valuestring, case_sensitive);
        }
        if (value == NULL)
        {
            /* missing "from" for copy/move. */
            status = 5;
            goto cleanup;
        }
        if (opcode == COPY)
        {
            value = cJSON_Duplicate(value, 1);
        }
        if (value == NULL)
        {
            /* out of memory for copy/move. */
            status = 6;
            goto cleanup;
        }
    }
    else /* Add/Replace uses "value". */
    {
        value = get_object_item(patch, "value", case_sensitive);
        if (value == NULL)
        {
            /* missing "value" for add/replace. */
            status = 7;
            goto cleanup;
        }
        value = cJSON_Duplicate(value, 1);
        if (value == NULL)
        {
            /* out of memory for add/replace. */
            status = 8;
            goto cleanup;
        }
    }

    /* Now, just add "value" to "path". */

    /* split pointer in parent and child */
    parent_pointer = cJSONUtils_strdup((unsigned char*)path->valuestring);
    if (parent_pointer) {
        child_pointer = (unsigned char*)strrchr((char*)parent_pointer, '/');
    }
    if (child_pointer != NULL)
    {
        child_pointer[0] = '\0';
        child_pointer++;
    }
    parent = get_item_from_pointer(object, (char*)parent_pointer, case_sensitive);
    decode_pointer_inplace(child_pointer);

    /* add, remove, replace, move, copy, test. */
    if ((parent == NULL) || (child_pointer == NULL))
    {
        /* Couldn't find object to add to. */
        status = 9;
        goto cleanup;
    }
    else if (cJSON_IsArray(parent))
    {
        if (strcmp((char*)child_pointer, "-") == 0)
        {
            cJSON_AddItemToArray(parent, value);
            value = NULL;
        }
        else
        {
            size_t index = 0;
            if (!decode_array_index_from_pointer(child_pointer, &index))
            {
                status = 11;
                goto cleanup;
            }

            if (!insert_item_in_array(parent, index, value))
            {
                status = 10;
                goto cleanup;
            }
            value = NULL;
        }
    }
    else if (cJSON_IsObject(parent))
    {
        if (case_sensitive)
        {
            cJSON_DeleteItemFromObjectCaseSensitive(parent, (char*)child_pointer);
        }
        else
        {
            cJSON_DeleteItemFromObject(parent, (char*)child_pointer);
        }
        cJSON_AddItemToObject(parent, (char*)child_pointer, value);
        value = NULL;
    }
    else /* parent is not an object */
    {
        /* Couldn't find object to add to. */
        status = 9;
        goto cleanup;
    }

cleanup:
    if (value != NULL)
    {
        cJSON_Delete(value);
    }
    if (parent_pointer != NULL)
    {
        cJSON_free(parent_pointer);
    }

    return status;
}

CJSON_PUBLIC(int) cJSONUtils_ApplyPatches(cJSON * const object, const cJSON * const patches)
{
    const cJSON *current_patch = NULL;
    int status = 0;

    if (!cJSON_IsArray(patches))
    {
        /* malformed patches. */
        return 1;
    }

    if (patches != NULL)
    {
        current_patch = patches->child;
    }

    while (current_patch != NULL)
    {
        status = apply_patch(object, current_patch, false);
        if (status != 0)
        {
            return status;
        }
        current_patch = current_patch->next;
    }

    return 0;
}

CJSON_PUBLIC(int) cJSONUtils_ApplyPatchesCaseSensitive(cJSON * const object, const cJSON * const patches)
{
    const cJSON *current_patch = NULL;
    int status = 0;

    if (!cJSON_IsArray(patches))
    {
        /* malformed patches. */
        return 1;
    }

    if (patches != NULL)
    {
        current_patch = patches->child;
    }

    while (current_patch != NULL)
    {
        status = apply_patch(object, current_patch, true);
        if (status != 0)
        {
            return status;
        }
        current_patch = current_patch->next;
    }

    return 0;
}

static void compose_patch(cJSON * const patches, const unsigned char * const operation, const unsigned char * const path, const unsigned char *suffix, const cJSON * const value)
{
    cJSON *patch = NULL;

    if ((patches == NULL) || (operation == NULL) || (path == NULL))
    {
        return;
    }

    patch = cJSON_CreateObject();
    if (patch == NULL)
    {
        return;
    }
    cJSON_AddItemToObject(patch, "op", cJSON_CreateString((const char*)operation));

    if (suffix == NULL)
    {
        cJSON_AddItemToObject(patch, "path", cJSON_CreateString((const char*)path));
    }
    else
    {
        size_t suffix_length = pointer_encoded_length(suffix);
        size_t path_length = strlen((const char*)path);
        unsigned char *full_path = (unsigned char*)cJSON_malloc(path_length + suffix_length + sizeof("/"));

        sprintf((char*)full_path, "%s/", (const char*)path);
        encode_string_as_pointer(full_path + path_length + 1, suffix);

        cJSON_AddItemToObject(patch, "path", cJSON_CreateString((const char*)full_path));
        cJSON_free(full_path);
    }

    if (value != NULL)
    {
        cJSON_AddItemToObject(patch, "value", cJSON_Duplicate(value, 1));
    }
    cJSON_AddItemToArray(patches, patch);
}

CJSON_PUBLIC(void) cJSONUtils_AddPatchToArray(cJSON * const array, const char * const operation, const char * const path, const cJSON * const value)
{
    compose_patch(array, (const unsigned char*)operation, (const unsigned char*)path, NULL, value);
}

static void create_patches(cJSON * const patches, const unsigned char * const path, cJSON * const from, cJSON * const to, const cJSON_bool case_sensitive)
{
    if ((from == NULL) || (to == NULL))
    {
        return;
    }

    if ((from->type & 0xFF) != (to->type & 0xFF))
    {
        compose_patch(patches, (const unsigned char*)"replace", path, 0, to);
        return;
    }

    switch (from->type & 0xFF)
    {
        case cJSON_Number:
            if ((from->valueint != to->valueint) || !compare_double(from->valuedouble, to->valuedouble))
            {
                compose_patch(patches, (const unsigned char*)"replace", path, NULL, to);
            }
            return;

        case cJSON_String:
            if (strcmp(from->valuestring, to->valuestring) != 0)
            {
                compose_patch(patches, (const unsigned char*)"replace", path, NULL, to);
            }
            return;

        case cJSON_Array:
        {
            size_t index = 0;
            cJSON *from_child = from->child;
            cJSON *to_child = to->child;
            unsigned char *new_path = (unsigned char*)cJSON_malloc(strlen((const char*)path) + 20 + sizeof("/")); /* Allow space for 64bit int. log10(2^64) = 20 */

            /* generate patches for all array elements that exist in both "from" and "to" */
            for (index = 0; (from_child != NULL) && (to_child != NULL); (void)(from_child = from_child->next), (void)(to_child = to_child->next), index++)
            {
                /* check if conversion to unsigned long is valid
                 * This should be eliminated at compile time by dead code elimination
                 * if size_t is an alias of unsigned long, or if it is bigger */
                if (index > ULONG_MAX)
                {
                    cJSON_free(new_path);
                    return;
                }
                sprintf((char*)new_path, "%s/%lu", path, (unsigned long)index); /* path of the current array element */
                create_patches(patches, new_path, from_child, to_child, case_sensitive);
            }

            /* remove leftover elements from 'from' that are not in 'to' */
            for (; (from_child != NULL); (void)(from_child = from_child->next))
            {
                /* check if conversion to unsigned long is valid
                 * This should be eliminated at compile time by dead code elimination
                 * if size_t is an alias of unsigned long, or if it is bigger */
                if (index > ULONG_MAX)
                {
                    cJSON_free(new_path);
                    return;
                }
                sprintf((char*)new_path, "%lu", (unsigned long)index);
                compose_patch(patches, (const unsigned char*)"remove", path, new_path, NULL);
            }
            /* add new elements in 'to' that were not in 'from' */
            for (; (to_child != NULL); (void)(to_child = to_child->next), index++)
            {
                compose_patch(patches, (const unsigned char*)"add", path, (const unsigned char*)"-", to_child);
            }
            cJSON_free(new_path);
            return;
        }

        case cJSON_Object:
        {
            cJSON *from_child = NULL;
            cJSON *to_child = NULL;
            sort_object(from, case_sensitive);
            sort_object(to, case_sensitive);

            from_child = from->child;
            to_child = to->child;
            /* for all object values in the object with more of them */
            while ((from_child != NULL) || (to_child != NULL))
            {
                int diff;
                if (from_child == NULL)
                {
                    diff = 1;
                }
                else if (to_child == NULL)
                {
                    diff = -1;
                }
                else
                {
                    diff = compare_strings((unsigned char*)from_child->string, (unsigned char*)to_child->string, case_sensitive);
                }

                if (diff == 0)
                {
                    /* both object keys are the same */
                    size_t path_length = strlen((const char*)path);
                    size_t from_child_name_length = pointer_encoded_length((unsigned char*)from_child->string);
                    unsigned char *new_path = (unsigned char*)cJSON_malloc(path_length + from_child_name_length + sizeof("/"));

                    sprintf((char*)new_path, "%s/", path);
                    encode_string_as_pointer(new_path + path_length + 1, (unsigned char*)from_child->string);

                    /* create a patch for the element */
                    create_patches(patches, new_path, from_child, to_child, case_sensitive);
                    cJSON_free(new_path);

                    from_child = from_child->next;
                    to_child = to_child->next;
                }
                else if (diff < 0)
                {
                    /* object element doesn't exist in 'to' --> remove it */
                    compose_patch(patches, (const unsigned char*)"remove", path, (unsigned char*)from_child->string, NULL);

                    from_child = from_child->next;
                }
                else
                {
                    /* object element doesn't exist in 'from' --> add it */
                    compose_patch(patches, (const unsigned char*)"add", path, (unsigned char*)to_child->string, to_child);

                    to_child = to_child->next;
                }
            }
            return;
        }

        default:
            break;
    }
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GeneratePatches(cJSON * const from, cJSON * const to)
{
    cJSON *patches = NULL;

    if ((from == NULL) || (to == NULL))
    {
        return NULL;
    }

    patches = cJSON_CreateArray();
    create_patches(patches, (const unsigned char*)"", from, to, false);

    return patches;
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GeneratePatchesCaseSensitive(cJSON * const from, cJSON * const to)
{
    cJSON *patches = NULL;

    if ((from == NULL) || (to == NULL))
    {
        return NULL;
    }

    patches = cJSON_CreateArray();
    create_patches(patches, (const unsigned char*)"", from, to, true);

    return patches;
}

CJSON_PUBLIC(void) cJSONUtils_SortObject(cJSON * const object)
{
    sort_object(object, false);
}

CJSON_PUBLIC(void) cJSONUtils_SortObjectCaseSensitive(cJSON * const object)
{
    sort_object(object, true);
}

static cJSON *merge_patch(cJSON *target, const cJSON * const patch, const cJSON_bool case_sensitive)
{
    cJSON *patch_child = NULL;

    if (!cJSON_IsObject(patch))
    {
        /* scalar value, array or NULL, just duplicate */
        cJSON_Delete(target);
        return cJSON_Duplicate(patch, 1);
    }

    if (!cJSON_IsObject(target))
    {
        cJSON_Delete(target);
        target = cJSON_CreateObject();
    }

    patch_child = patch->child;
    while (patch_child != NULL)
    {
        if (cJSON_IsNull(patch_child))
        {
            /* NULL is the indicator to remove a value, see RFC7396 */
            if (case_sensitive)
            {
                cJSON_DeleteItemFromObjectCaseSensitive(target, patch_child->string);
            }
            else
            {
                cJSON_DeleteItemFromObject(target, patch_child->string);
            }
        }
        else
        {
            cJSON *replace_me = NULL;
            cJSON *replacement = NULL;

            if (case_sensitive)
            {
                replace_me = cJSON_DetachItemFromObjectCaseSensitive(target, patch_child->string);
            }
            else
            {
                replace_me = cJSON_DetachItemFromObject(target, patch_child->string);
            }

            replacement = merge_patch(replace_me, patch_child, case_sensitive);
            if (replacement == NULL)
            {
                cJSON_Delete(target);
                return NULL;
            }

            cJSON_AddItemToObject(target, patch_child->string, replacement);
        }
        patch_child = patch_child->next;
    }
    return target;
}

CJSON_PUBLIC(cJSON *) cJSONUtils_MergePatch(cJSON *target, const cJSON * const patch)
{
    return merge_patch(target, patch, false);
}

CJSON_PUBLIC(cJSON *) cJSONUtils_MergePatchCaseSensitive(cJSON *target, const cJSON * const patch)
{
    return merge_patch(target, patch, true);
}

static cJSON *generate_merge_patch(cJSON * const from, cJSON * const to, const cJSON_bool case_sensitive)
{
    cJSON *from_child = NULL;
    cJSON *to_child = NULL;
    cJSON *patch = NULL;
    if (to == NULL)
    {
        /* patch to delete everything */
        return cJSON_CreateNull();
    }
    if (!cJSON_IsObject(to) || !cJSON_IsObject(from))
    {
        return cJSON_Duplicate(to, 1);
    }

    sort_object(from, case_sensitive);
    sort_object(to, case_sensitive);

    from_child = from->child;
    to_child = to->child;
    patch = cJSON_CreateObject();
    if (patch == NULL)
    {
        return NULL;
    }
    while (from_child || to_child)
    {
        int diff;
        if (from_child != NULL)
        {
            if (to_child != NULL)
            {
                diff = strcmp(from_child->string, to_child->string);
            }
            else
            {
                diff = -1;
            }
        }
        else
        {
            diff = 1;
        }

        if (diff < 0)
        {
            /* from has a value that to doesn't have -> remove */
            cJSON_AddItemToObject(patch, from_child->string, cJSON_CreateNull());

            from_child = from_child->next;
        }
        else if (diff > 0)
        {
            /* to has a value that from doesn't have -> add to patch */
            cJSON_AddItemToObject(patch, to_child->string, cJSON_Duplicate(to_child, 1));

            to_child = to_child->next;
        }
        else
        {
            /* object key exists in both objects */
            if (!compare_json(from_child, to_child, case_sensitive))
            {
                /* not identical --> generate a patch */
                cJSON_AddItemToObject(patch, to_child->string, cJSONUtils_GenerateMergePatch(from_child, to_child));
            }

            /* next key in the object */
            from_child = from_child->next;
            to_child = to_child->next;
        }
    }
    if (patch->child == NULL)
    {
        /* no patch generated */
        cJSON_Delete(patch);
        return NULL;
    }

    return patch;
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GenerateMergePatch(cJSON * const from, cJSON * const to)
{
    return generate_merge_patch(from, to, false);
}

CJSON_PUBLIC(cJSON *) cJSONUtils_GenerateMergePatchCaseSensitive(cJSON * const from, cJSON * const to)
{
    return generate_merge_patch(from, to, true);
}


/* FILE: cJSON.c */
/* LAYER: UTILITY */
/* PATH: cJSON.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

/* cJSON */
/* JSON parser in C. */

/* disable warnings about old C89 functions in MSVC */
#if !defined(_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#ifdef __GNUC__
#pragma GCC visibility push(default)
#endif
#if defined(_MSC_VER)
#pragma warning (push)
/* disable warning about single line comments in system headers */
#pragma warning (disable : 4001)
#endif

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <float.h>

#ifdef ENABLE_LOCALES
#include <locale.h>
#endif

#if defined(_MSC_VER)
#pragma warning (pop)
#endif
#ifdef __GNUC__
#pragma GCC visibility pop
#endif

#include "cJSON.h"

/* define our own boolean type */
#ifdef true
#undef true
#endif
#define true ((cJSON_bool)1)

#ifdef false
#undef false
#endif
#define false ((cJSON_bool)0)

/* define isnan and isinf for ANSI C, if in C99 or above, isnan and isinf has been defined in math.h */
#ifndef isinf
#define isinf(d) (isnan((d - d)) && !isnan(d))
#endif
#ifndef isnan
#define isnan(d) (d != d)
#endif

#ifndef NAN
#ifdef _WIN32
#define NAN sqrt(-1.0)
#else
#define NAN 0.0/0.0
#endif
#endif

typedef struct {
    const unsigned char *json;
    size_t position;
} error;
static error global_error = { NULL, 0 };

CJSON_PUBLIC(const char *) cJSON_GetErrorPtr(void)
{
    return (const char*) (global_error.json + global_error.position);
}

CJSON_PUBLIC(char *) cJSON_GetStringValue(const cJSON * const item)
{
    if (!cJSON_IsString(item))
    {
        return NULL;
    }

    return item->valuestring;
}

CJSON_PUBLIC(double) cJSON_GetNumberValue(const cJSON * const item)
{
    if (!cJSON_IsNumber(item))
    {
        return (double) NAN;
    }

    return item->valuedouble;
}

/* This is a safeguard to prevent copy-pasters from using incompatible C and header files */
#if (CJSON_VERSION_MAJOR != 1) || (CJSON_VERSION_MINOR != 7) || (CJSON_VERSION_PATCH != 19)
    #error cJSON.h and cJSON.c have different versions. Make sure that both have the same.
#endif

CJSON_PUBLIC(const char*) cJSON_Version(void)
{
    static char version[15];
    sprintf(version, "%i.%i.%i", CJSON_VERSION_MAJOR, CJSON_VERSION_MINOR, CJSON_VERSION_PATCH);

    return version;
}

/* Case insensitive string comparison, doesn't consider two NULL pointers equal though */
static int case_insensitive_strcmp(const unsigned char *string1, const unsigned char *string2)
{
    if ((string1 == NULL) || (string2 == NULL))
    {
        return 1;
    }

    if (string1 == string2)
    {
        return 0;
    }

    for(; tolower(*string1) == tolower(*string2); (void)string1++, string2++)
    {
        if (*string1 == '\0')
        {
            return 0;
        }
    }

    return tolower(*string1) - tolower(*string2);
}

typedef struct internal_hooks
{
    void *(CJSON_CDECL *allocate)(size_t size);
    void (CJSON_CDECL *deallocate)(void *pointer);
    void *(CJSON_CDECL *reallocate)(void *pointer, size_t size);
} internal_hooks;

#if defined(_MSC_VER)
/* work around MSVC error C2322: '...' address of dllimport '...' is not static */
static void * CJSON_CDECL internal_malloc(size_t size)
{
    return malloc(size);
}
static void CJSON_CDECL internal_free(void *pointer)
{
    free(pointer);
}
static void * CJSON_CDECL internal_realloc(void *pointer, size_t size)
{
    return realloc(pointer, size);
}
#else
#define internal_malloc malloc
#define internal_free free
#define internal_realloc realloc
#endif

/* strlen of character literals resolved at compile time */
#define static_strlen(string_literal) (sizeof(string_literal) - sizeof(""))

static internal_hooks global_hooks = { internal_malloc, internal_free, internal_realloc };

static unsigned char* cJSON_strdup(const unsigned char* string, const internal_hooks * const hooks)
{
    size_t length = 0;
    unsigned char *copy = NULL;

    if (string == NULL)
    {
        return NULL;
    }

    length = strlen((const char*)string) + sizeof("");
    copy = (unsigned char*)hooks->allocate(length);
    if (copy == NULL)
    {
        return NULL;
    }
    memcpy(copy, string, length);

    return copy;
}

CJSON_PUBLIC(void) cJSON_InitHooks(cJSON_Hooks* hooks)
{
    if (hooks == NULL)
    {
        /* Reset hooks */
        global_hooks.allocate = malloc;
        global_hooks.deallocate = free;
        global_hooks.reallocate = realloc;
        return;
    }

    global_hooks.allocate = malloc;
    if (hooks->malloc_fn != NULL)
    {
        global_hooks.allocate = hooks->malloc_fn;
    }

    global_hooks.deallocate = free;
    if (hooks->free_fn != NULL)
    {
        global_hooks.deallocate = hooks->free_fn;
    }

    /* use realloc only if both free and malloc are used */
    global_hooks.reallocate = NULL;
    if ((global_hooks.allocate == malloc) && (global_hooks.deallocate == free))
    {
        global_hooks.reallocate = realloc;
    }
}

/* Internal constructor. */
static cJSON *cJSON_New_Item(const internal_hooks * const hooks)
{
    cJSON* node = (cJSON*)hooks->allocate(sizeof(cJSON));
    if (node)
    {
        memset(node, '\0', sizeof(cJSON));
    }

    return node;
}

/* Delete a cJSON structure. */
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item)
{
    cJSON *next = NULL;
    while (item != NULL)
    {
        next = item->next;
        if (!(item->type & cJSON_IsReference) && (item->child != NULL))
        {
            cJSON_Delete(item->child);
        }
        if (!(item->type & cJSON_IsReference) && (item->valuestring != NULL))
        {
            global_hooks.deallocate(item->valuestring);
            item->valuestring = NULL;
        }
        if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
        {
            global_hooks.deallocate(item->string);
            item->string = NULL;
        }
        global_hooks.deallocate(item);
        item = next;
    }
}

/* get the decimal point character of the current locale */
static unsigned char get_decimal_point(void)
{
#ifdef ENABLE_LOCALES
    struct lconv *lconv = localeconv();
    return (unsigned char) lconv->decimal_point[0];
#else
    return '.';
#endif
}

typedef struct
{
    const unsigned char *content;
    size_t length;
    size_t offset;
    size_t depth; /* How deeply nested (in arrays/objects) is the input at the current offset. */
    internal_hooks hooks;
} parse_buffer;

/* check if the given size is left to read in a given parse buffer (starting with 1) */
#define can_read(buffer, size) ((buffer != NULL) && (((buffer)->offset + size) <= (buffer)->length))
/* check if the buffer can be accessed at the given index (starting with 0) */
#define can_access_at_index(buffer, index) ((buffer != NULL) && (((buffer)->offset + index) < (buffer)->length))
#define cannot_access_at_index(buffer, index) (!can_access_at_index(buffer, index))
/* get a pointer to the buffer at the position */
#define buffer_at_offset(buffer) ((buffer)->content + (buffer)->offset)

/* Parse the input text to generate a number, and populate the result into item. */
static cJSON_bool parse_number(cJSON * const item, parse_buffer * const input_buffer)
{
    double number = 0;
    unsigned char *after_end = NULL;
    unsigned char *number_c_string;
    unsigned char decimal_point = get_decimal_point();
    size_t i = 0;
    size_t number_string_length = 0;
    cJSON_bool has_decimal_point = false;

    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false;
    }

    /* copy the number into a temporary buffer and replace '.' with the decimal point
     * of the current locale (for strtod)
     * This also takes care of '\0' not necessarily being available for marking the end of the input */
    for (i = 0; can_access_at_index(input_buffer, i); i++)
    {
        switch (buffer_at_offset(input_buffer)[i])
        {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '+':
            case '-':
            case 'e':
            case 'E':
                number_string_length++;
                break;

            case '.':
                number_string_length++;
                has_decimal_point = true;
                break;

            default:
                goto loop_end;
        }
    }
loop_end:
    /* malloc for temporary buffer, add 1 for '\0' */
    number_c_string = (unsigned char *) input_buffer->hooks.allocate(number_string_length + 1);
    if (number_c_string == NULL)
    {
        return false; /* allocation failure */
    }

    memcpy(number_c_string, buffer_at_offset(input_buffer), number_string_length);
    number_c_string[number_string_length] = '\0';

    if (has_decimal_point)
    {
        for (i = 0; i < number_string_length; i++)
        {
            if (number_c_string[i] == '.')
            {
                /* replace '.' with the decimal point of the current locale (for strtod) */
                number_c_string[i] = decimal_point;
            }
        }
    }

    number = strtod((const char*)number_c_string, (char**)&after_end);
    if (number_c_string == after_end)
    {
        /* free the temporary buffer */
        input_buffer->hooks.deallocate(number_c_string);
        return false; /* parse_error */
    }

    item->valuedouble = number;

    /* use saturation in case of overflow */
    if (number >= INT_MAX)
    {
        item->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        item->valueint = INT_MIN;
    }
    else
    {
        item->valueint = (int)number;
    }

    item->type = cJSON_Number;

    input_buffer->offset += (size_t)(after_end - number_c_string);
    /* free the temporary buffer */
    input_buffer->hooks.deallocate(number_c_string);
    return true;
}

/* don't ask me, but the original cJSON_SetNumberValue returns an integer or double */
CJSON_PUBLIC(double) cJSON_SetNumberHelper(cJSON *object, double number)
{
    if (number >= INT_MAX)
    {
        object->valueint = INT_MAX;
    }
    else if (number <= (double)INT_MIN)
    {
        object->valueint = INT_MIN;
    }
    else
    {
        object->valueint = (int)number;
    }

    return object->valuedouble = number;
}

/* Note: when passing a NULL valuestring, cJSON_SetValuestring treats this as an error and return NULL */
CJSON_PUBLIC(char*) cJSON_SetValuestring(cJSON *object, const char *valuestring)
{
    char *copy = NULL;
    size_t v1_len;
    size_t v2_len;
    /* if object's type is not cJSON_String or is cJSON_IsReference, it should not set valuestring */
    if ((object == NULL) || !(object->type & cJSON_String) || (object->type & cJSON_IsReference))
    {
        return NULL;
    }
    /* return NULL if the object is corrupted or valuestring is NULL */
    if (object->valuestring == NULL || valuestring == NULL)
    {
        return NULL;
    }

    v1_len = strlen(valuestring);
    v2_len = strlen(object->valuestring);

    if (v1_len <= v2_len)
    {
        /* strcpy does not handle overlapping string: [X1, X2] [Y1, Y2] => X2 < Y1 or Y2 < X1 */
        if (!( valuestring + v1_len < object->valuestring || object->valuestring + v2_len < valuestring ))
        {
            return NULL;
        }
        strcpy(object->valuestring, valuestring);
        return object->valuestring;
    }
    copy = (char*) cJSON_strdup((const unsigned char*)valuestring, &global_hooks);
    if (copy == NULL)
    {
        return NULL;
    }
    if (object->valuestring != NULL)
    {
        cJSON_free(object->valuestring);
    }
    object->valuestring = copy;

    return copy;
}

typedef struct
{
    unsigned char *buffer;
    size_t length;
    size_t offset;
    size_t depth; /* current nesting depth (for formatted printing) */
    cJSON_bool noalloc;
    cJSON_bool format; /* is this print a formatted print */
    internal_hooks hooks;
} printbuffer;

/* realloc printbuffer if necessary to have at least "needed" bytes more */
static unsigned char* ensure(printbuffer * const p, size_t needed)
{
    unsigned char *newbuffer = NULL;
    size_t newsize = 0;

    if ((p == NULL) || (p->buffer == NULL))
    {
        return NULL;
    }

    if ((p->length > 0) && (p->offset >= p->length))
    {
        /* make sure that offset is valid */
        return NULL;
    }

    if (needed > INT_MAX)
    {
        /* sizes bigger than INT_MAX are currently not supported */
        return NULL;
    }

    needed += p->offset + 1;
    if (needed <= p->length)
    {
        return p->buffer + p->offset;
    }

    if (p->noalloc) {
        return NULL;
    }

    /* calculate new buffer size */
    if (needed > (INT_MAX / 2))
    {
        /* overflow of int, use INT_MAX if possible */
        if (needed <= INT_MAX)
        {
            newsize = INT_MAX;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        newsize = needed * 2;
    }

    if (p->hooks.reallocate != NULL)
    {
        /* reallocate with realloc if available */
        newbuffer = (unsigned char*)p->hooks.reallocate(p->buffer, newsize);
        if (newbuffer == NULL)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }
    }
    else
    {
        /* otherwise reallocate manually */
        newbuffer = (unsigned char*)p->hooks.allocate(newsize);
        if (!newbuffer)
        {
            p->hooks.deallocate(p->buffer);
            p->length = 0;
            p->buffer = NULL;

            return NULL;
        }

        memcpy(newbuffer, p->buffer, p->offset + 1);
        p->hooks.deallocate(p->buffer);
    }
    p->length = newsize;
    p->buffer = newbuffer;

    return newbuffer + p->offset;
}

/* calculate the new length of the string in a printbuffer and update the offset */
static void update_offset(printbuffer * const buffer)
{
    const unsigned char *buffer_pointer = NULL;
    if ((buffer == NULL) || (buffer->buffer == NULL))
    {
        return;
    }
    buffer_pointer = buffer->buffer + buffer->offset;

    buffer->offset += strlen((const char*)buffer_pointer);
}

/* securely comparison of floating-point variables */
static cJSON_bool compare_double(double a, double b)
{
    double maxVal = fabs(a) > fabs(b) ? fabs(a) : fabs(b);
    return (fabs(a - b) <= maxVal * DBL_EPSILON);
}

/* Render the number nicely from the given item into a string. */
static cJSON_bool print_number(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    double d = item->valuedouble;
    int length = 0;
    size_t i = 0;
    unsigned char number_buffer[26] = {0}; /* temporary buffer to print the number into */
    unsigned char decimal_point = get_decimal_point();
    double test = 0.0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* This checks for NaN and Infinity */
    if (isnan(d) || isinf(d))
    {
        length = sprintf((char*)number_buffer, "null");
    }
    else if(d == (double)item->valueint)
    {
        length = sprintf((char*)number_buffer, "%d", item->valueint);
    }
    else
    {
        /* Try 15 decimal places of precision to avoid nonsignificant nonzero digits */
        length = sprintf((char*)number_buffer, "%1.15g", d);

        /* Check whether the original double can be recovered */
        if ((sscanf((char*)number_buffer, "%lg", &test) != 1) || !compare_double((double)test, d))
        {
            /* If not, print with 17 decimal places of precision */
            length = sprintf((char*)number_buffer, "%1.17g", d);
        }
    }

    /* sprintf failed or buffer overrun occurred */
    if ((length < 0) || (length > (int)(sizeof(number_buffer) - 1)))
    {
        return false;
    }

    /* reserve appropriate space in the output */
    output_pointer = ensure(output_buffer, (size_t)length + sizeof(""));
    if (output_pointer == NULL)
    {
        return false;
    }

    /* copy the printed number to the output and replace locale
     * dependent decimal point with '.' */
    for (i = 0; i < ((size_t)length); i++)
    {
        if (number_buffer[i] == decimal_point)
        {
            output_pointer[i] = '.';
            continue;
        }

        output_pointer[i] = number_buffer[i];
    }
    output_pointer[i] = '\0';

    output_buffer->offset += (size_t)length;

    return true;
}

/* parse 4 digit hexadecimal number */
static unsigned parse_hex4(const unsigned char * const input)
{
    unsigned int h = 0;
    size_t i = 0;

    for (i = 0; i < 4; i++)
    {
        /* parse digit */
        if ((input[i] >= '0') && (input[i] <= '9'))
        {
            h += (unsigned int) input[i] - '0';
        }
        else if ((input[i] >= 'A') && (input[i] <= 'F'))
        {
            h += (unsigned int) 10 + input[i] - 'A';
        }
        else if ((input[i] >= 'a') && (input[i] <= 'f'))
        {
            h += (unsigned int) 10 + input[i] - 'a';
        }
        else /* invalid */
        {
            return 0;
        }

        if (i < 3)
        {
            /* shift left to make place for the next nibble */
            h = h << 4;
        }
    }

    return h;
}

/* converts a UTF-16 literal to UTF-8
 * A literal can be one or two sequences of the form \uXXXX */
static unsigned char utf16_literal_to_utf8(const unsigned char * const input_pointer, const unsigned char * const input_end, unsigned char **output_pointer)
{
    long unsigned int codepoint = 0;
    unsigned int first_code = 0;
    const unsigned char *first_sequence = input_pointer;
    unsigned char utf8_length = 0;
    unsigned char utf8_position = 0;
    unsigned char sequence_length = 0;
    unsigned char first_byte_mark = 0;

    if ((input_end - first_sequence) < 6)
    {
        /* input ends unexpectedly */
        goto fail;
    }

    /* get the first utf16 sequence */
    first_code = parse_hex4(first_sequence + 2);

    /* check that the code is valid */
    if (((first_code >= 0xDC00) && (first_code <= 0xDFFF)))
    {
        goto fail;
    }

    /* UTF16 surrogate pair */
    if ((first_code >= 0xD800) && (first_code <= 0xDBFF))
    {
        const unsigned char *second_sequence = first_sequence + 6;
        unsigned int second_code = 0;
        sequence_length = 12; /* \uXXXX\uXXXX */

        if ((input_end - second_sequence) < 6)
        {
            /* input ends unexpectedly */
            goto fail;
        }

        if ((second_sequence[0] != '\\') || (second_sequence[1] != 'u'))
        {
            /* missing second half of the surrogate pair */
            goto fail;
        }

        /* get the second utf16 sequence */
        second_code = parse_hex4(second_sequence + 2);
        /* check that the code is valid */
        if ((second_code < 0xDC00) || (second_code > 0xDFFF))
        {
            /* invalid second half of the surrogate pair */
            goto fail;
        }


        /* calculate the unicode codepoint from the surrogate pair */
        codepoint = 0x10000 + (((first_code & 0x3FF) << 10) | (second_code & 0x3FF));
    }
    else
    {
        sequence_length = 6; /* \uXXXX */
        codepoint = first_code;
    }

    /* encode as UTF-8
     * takes at maximum 4 bytes to encode:
     * 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx */
    if (codepoint < 0x80)
    {
        /* normal ascii, encoding 0xxxxxxx */
        utf8_length = 1;
    }
    else if (codepoint < 0x800)
    {
        /* two bytes, encoding 110xxxxx 10xxxxxx */
        utf8_length = 2;
        first_byte_mark = 0xC0; /* 11000000 */
    }
    else if (codepoint < 0x10000)
    {
        /* three bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx */
        utf8_length = 3;
        first_byte_mark = 0xE0; /* 11100000 */
    }
    else if (codepoint <= 0x10FFFF)
    {
        /* four bytes, encoding 1110xxxx 10xxxxxx 10xxxxxx 10xxxxxx */
        utf8_length = 4;
        first_byte_mark = 0xF0; /* 11110000 */
    }
    else
    {
        /* invalid unicode codepoint */
        goto fail;
    }

    /* encode as utf8 */
    for (utf8_position = (unsigned char)(utf8_length - 1); utf8_position > 0; utf8_position--)
    {
        /* 10xxxxxx */
        (*output_pointer)[utf8_position] = (unsigned char)((codepoint | 0x80) & 0xBF);
        codepoint >>= 6;
    }
    /* encode first byte */
    if (utf8_length > 1)
    {
        (*output_pointer)[0] = (unsigned char)((codepoint | first_byte_mark) & 0xFF);
    }
    else
    {
        (*output_pointer)[0] = (unsigned char)(codepoint & 0x7F);
    }

    *output_pointer += utf8_length;

    return sequence_length;

fail:
    return 0;
}

/* Parse the input text into an unescaped cinput, and populate item. */
static cJSON_bool parse_string(cJSON * const item, parse_buffer * const input_buffer)
{
    const unsigned char *input_pointer = buffer_at_offset(input_buffer) + 1;
    const unsigned char *input_end = buffer_at_offset(input_buffer) + 1;
    unsigned char *output_pointer = NULL;
    unsigned char *output = NULL;

    /* not a string */
    if (buffer_at_offset(input_buffer)[0] != '\"')
    {
        goto fail;
    }

    {
        /* calculate approximate size of the output (overestimate) */
        size_t allocation_length = 0;
        size_t skipped_bytes = 0;
        while (((size_t)(input_end - input_buffer->content) < input_buffer->length) && (*input_end != '\"'))
        {
            /* is escape sequence */
            if (input_end[0] == '\\')
            {
                if ((size_t)(input_end + 1 - input_buffer->content) >= input_buffer->length)
                {
                    /* prevent buffer overflow when last input character is a backslash */
                    goto fail;
                }
                skipped_bytes++;
                input_end++;
            }
            input_end++;
        }
        if (((size_t)(input_end - input_buffer->content) >= input_buffer->length) || (*input_end != '\"'))
        {
            goto fail; /* string ended unexpectedly */
        }

        /* This is at most how much we need for the output */
        allocation_length = (size_t) (input_end - buffer_at_offset(input_buffer)) - skipped_bytes;
        output = (unsigned char*)input_buffer->hooks.allocate(allocation_length + sizeof(""));
        if (output == NULL)
        {
            goto fail; /* allocation failure */
        }
    }

    output_pointer = output;
    /* loop through the string literal */
    while (input_pointer < input_end)
    {
        if (*input_pointer != '\\')
        {
            *output_pointer++ = *input_pointer++;
        }
        /* escape sequence */
        else
        {
            unsigned char sequence_length = 2;
            if ((input_end - input_pointer) < 1)
            {
                goto fail;
            }

            switch (input_pointer[1])
            {
                case 'b':
                    *output_pointer++ = '\b';
                    break;
                case 'f':
                    *output_pointer++ = '\f';
                    break;
                case 'n':
                    *output_pointer++ = '\n';
                    break;
                case 'r':
                    *output_pointer++ = '\r';
                    break;
                case 't':
                    *output_pointer++ = '\t';
                    break;
                case '\"':
                case '\\':
                case '/':
                    *output_pointer++ = input_pointer[1];
                    break;

                /* UTF-16 literal */
                case 'u':
                    sequence_length = utf16_literal_to_utf8(input_pointer, input_end, &output_pointer);
                    if (sequence_length == 0)
                    {
                        /* failed to convert UTF16-literal to UTF-8 */
                        goto fail;
                    }
                    break;

                default:
                    goto fail;
            }
            input_pointer += sequence_length;
        }
    }

    /* zero terminate the output */
    *output_pointer = '\0';

    item->type = cJSON_String;
    item->valuestring = (char*)output;

    input_buffer->offset = (size_t) (input_end - input_buffer->content);
    input_buffer->offset++;

    return true;

fail:
    if (output != NULL)
    {
        input_buffer->hooks.deallocate(output);
        output = NULL;
    }

    if (input_pointer != NULL)
    {
        input_buffer->offset = (size_t)(input_pointer - input_buffer->content);
    }

    return false;
}

/* Render the cstring provided to an escaped version that can be printed. */
static cJSON_bool print_string_ptr(const unsigned char * const input, printbuffer * const output_buffer)
{
    const unsigned char *input_pointer = NULL;
    unsigned char *output = NULL;
    unsigned char *output_pointer = NULL;
    size_t output_length = 0;
    /* numbers of additional characters needed for escaping */
    size_t escape_characters = 0;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* empty string */
    if (input == NULL)
    {
        output = ensure(output_buffer, sizeof("\"\""));
        if (output == NULL)
        {
            return false;
        }
        strcpy((char*)output, "\"\"");

        return true;
    }

    /* set "flag" to 1 if something needs to be escaped */
    for (input_pointer = input; *input_pointer; input_pointer++)
    {
        switch (*input_pointer)
        {
            case '\"':
            case '\\':
            case '\b':
            case '\f':
            case '\n':
            case '\r':
            case '\t':
                /* one character escape sequence */
                escape_characters++;
                break;
            default:
                if (*input_pointer < 32)
                {
                    /* UTF-16 escape sequence uXXXX */
                    escape_characters += 5;
                }
                break;
        }
    }
    output_length = (size_t)(input_pointer - input) + escape_characters;

    output = ensure(output_buffer, output_length + sizeof("\"\""));
    if (output == NULL)
    {
        return false;
    }

    /* no characters have to be escaped */
    if (escape_characters == 0)
    {
        output[0] = '\"';
        memcpy(output + 1, input, output_length);
        output[output_length + 1] = '\"';
        output[output_length + 2] = '\0';

        return true;
    }

    output[0] = '\"';
    output_pointer = output + 1;
    /* copy the string */
    for (input_pointer = input; *input_pointer != '\0'; (void)input_pointer++, output_pointer++)
    {
        if ((*input_pointer > 31) && (*input_pointer != '\"') && (*input_pointer != '\\'))
        {
            /* normal character, copy */
            *output_pointer = *input_pointer;
        }
        else
        {
            /* character needs to be escaped */
            *output_pointer++ = '\\';
            switch (*input_pointer)
            {
                case '\\':
                    *output_pointer = '\\';
                    break;
                case '\"':
                    *output_pointer = '\"';
                    break;
                case '\b':
                    *output_pointer = 'b';
                    break;
                case '\f':
                    *output_pointer = 'f';
                    break;
                case '\n':
                    *output_pointer = 'n';
                    break;
                case '\r':
                    *output_pointer = 'r';
                    break;
                case '\t':
                    *output_pointer = 't';
                    break;
                default:
                    /* escape and print as unicode codepoint */
                    sprintf((char*)output_pointer, "u%04x", *input_pointer);
                    output_pointer += 4;
                    break;
            }
        }
    }
    output[output_length + 1] = '\"';
    output[output_length + 2] = '\0';

    return true;
}

/* Invoke print_string_ptr (which is useful) on an item. */
static cJSON_bool print_string(const cJSON * const item, printbuffer * const p)
{
    return print_string_ptr((unsigned char*)item->valuestring, p);
}

/* Predeclare these prototypes. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer);
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer);
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer);

/* Utility to jump whitespace and cr/lf */
static parse_buffer *buffer_skip_whitespace(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL))
    {
        return NULL;
    }

    if (cannot_access_at_index(buffer, 0))
    {
        return buffer;
    }

    while (can_access_at_index(buffer, 0) && (buffer_at_offset(buffer)[0] <= 32))
    {
       buffer->offset++;
    }

    if (buffer->offset == buffer->length)
    {
        buffer->offset--;
    }

    return buffer;
}

/* skip the UTF-8 BOM (byte order mark) if it is at the beginning of a buffer */
static parse_buffer *skip_utf8_bom(parse_buffer * const buffer)
{
    if ((buffer == NULL) || (buffer->content == NULL) || (buffer->offset != 0))
    {
        return NULL;
    }

    if (can_access_at_index(buffer, 4) && (strncmp((const char*)buffer_at_offset(buffer), "\xEF\xBB\xBF", 3) == 0))
    {
        buffer->offset += 3;
    }

    return buffer;
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithOpts(const char *value, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    size_t buffer_length;

    if (NULL == value)
    {
        return NULL;
    }

    /* Adding null character size due to require_null_terminated. */
    buffer_length = strlen(value) + sizeof("");

    return cJSON_ParseWithLengthOpts(value, buffer_length, return_parse_end, require_null_terminated);
}

/* Parse an object - create a new root, and populate. */
CJSON_PUBLIC(cJSON *) cJSON_ParseWithLengthOpts(const char *value, size_t buffer_length, const char **return_parse_end, cJSON_bool require_null_terminated)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    cJSON *item = NULL;

    /* reset error position */
    global_error.json = NULL;
    global_error.position = 0;

    if (value == NULL || 0 == buffer_length)
    {
        goto fail;
    }

    buffer.content = (const unsigned char*)value;
    buffer.length = buffer_length;
    buffer.offset = 0;
    buffer.hooks = global_hooks;

    item = cJSON_New_Item(&global_hooks);
    if (item == NULL) /* memory fail */
    {
        goto fail;
    }

    if (!parse_value(item, buffer_skip_whitespace(skip_utf8_bom(&buffer))))
    {
        /* parse failure. ep is set. */
        goto fail;
    }

    /* if we require null-terminated JSON without appended garbage, skip and then check for a null terminator */
    if (require_null_terminated)
    {
        buffer_skip_whitespace(&buffer);
        if ((buffer.offset >= buffer.length) || buffer_at_offset(&buffer)[0] != '\0')
        {
            goto fail;
        }
    }
    if (return_parse_end)
    {
        *return_parse_end = (const char*)buffer_at_offset(&buffer);
    }

    return item;

fail:
    if (item != NULL)
    {
        cJSON_Delete(item);
    }

    if (value != NULL)
    {
        error local_error;
        local_error.json = (const unsigned char*)value;
        local_error.position = 0;

        if (buffer.offset < buffer.length)
        {
            local_error.position = buffer.offset;
        }
        else if (buffer.length > 0)
        {
            local_error.position = buffer.length - 1;
        }

        if (return_parse_end != NULL)
        {
            *return_parse_end = (const char*)local_error.json + local_error.position;
        }

        global_error = local_error;
    }

    return NULL;
}

/* Default options for cJSON_Parse */
CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value)
{
    return cJSON_ParseWithOpts(value, 0, 0);
}

CJSON_PUBLIC(cJSON *) cJSON_ParseWithLength(const char *value, size_t buffer_length)
{
    return cJSON_ParseWithLengthOpts(value, buffer_length, 0, 0);
}

#define cjson_min(a, b) (((a) < (b)) ? (a) : (b))

static unsigned char *print(const cJSON * const item, cJSON_bool format, const internal_hooks * const hooks)
{
    static const size_t default_buffer_size = 256;
    printbuffer buffer[1];
    unsigned char *printed = NULL;

    memset(buffer, 0, sizeof(buffer));

    /* create buffer */
    buffer->buffer = (unsigned char*) hooks->allocate(default_buffer_size);
    buffer->length = default_buffer_size;
    buffer->format = format;
    buffer->hooks = *hooks;
    if (buffer->buffer == NULL)
    {
        goto fail;
    }

    /* print the value */
    if (!print_value(item, buffer))
    {
        goto fail;
    }
    update_offset(buffer);

    /* check if reallocate is available */
    if (hooks->reallocate != NULL)
    {
        printed = (unsigned char*) hooks->reallocate(buffer->buffer, buffer->offset + 1);
        if (printed == NULL) {
            goto fail;
        }
        buffer->buffer = NULL;
    }
    else /* otherwise copy the JSON over to a new buffer */
    {
        printed = (unsigned char*) hooks->allocate(buffer->offset + 1);
        if (printed == NULL)
        {
            goto fail;
        }
        memcpy(printed, buffer->buffer, cjson_min(buffer->length, buffer->offset + 1));
        printed[buffer->offset] = '\0'; /* just to be sure */

        /* free the buffer */
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    return printed;

fail:
    if (buffer->buffer != NULL)
    {
        hooks->deallocate(buffer->buffer);
        buffer->buffer = NULL;
    }

    if (printed != NULL)
    {
        hooks->deallocate(printed);
        printed = NULL;
    }

    return NULL;
}

/* Render a cJSON item/entity/structure to text. */
CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item)
{
    return (char*)print(item, true, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item)
{
    return (char*)print(item, false, &global_hooks);
}

CJSON_PUBLIC(char *) cJSON_PrintBuffered(const cJSON *item, int prebuffer, cJSON_bool fmt)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if (prebuffer < 0)
    {
        return NULL;
    }

    p.buffer = (unsigned char*)global_hooks.allocate((size_t)prebuffer);
    if (!p.buffer)
    {
        return NULL;
    }

    p.length = (size_t)prebuffer;
    p.offset = 0;
    p.noalloc = false;
    p.format = fmt;
    p.hooks = global_hooks;

    if (!print_value(item, &p))
    {
        global_hooks.deallocate(p.buffer);
        p.buffer = NULL;
        return NULL;
    }

    return (char*)p.buffer;
}

CJSON_PUBLIC(cJSON_bool) cJSON_PrintPreallocated(cJSON *item, char *buffer, const int length, const cJSON_bool format)
{
    printbuffer p = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    if ((length < 0) || (buffer == NULL))
    {
        return false;
    }

    p.buffer = (unsigned char*)buffer;
    p.length = (size_t)length;
    p.offset = 0;
    p.noalloc = true;
    p.format = format;
    p.hooks = global_hooks;

    return print_value(item, &p);
}

/* Parser core - when encountering text, process appropriately. */
static cJSON_bool parse_value(cJSON * const item, parse_buffer * const input_buffer)
{
    if ((input_buffer == NULL) || (input_buffer->content == NULL))
    {
        return false; /* no input */
    }

    /* parse the different types of values */
    /* null */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "null", 4) == 0))
    {
        item->type = cJSON_NULL;
        input_buffer->offset += 4;
        return true;
    }
    /* false */
    if (can_read(input_buffer, 5) && (strncmp((const char*)buffer_at_offset(input_buffer), "false", 5) == 0))
    {
        item->type = cJSON_False;
        input_buffer->offset += 5;
        return true;
    }
    /* true */
    if (can_read(input_buffer, 4) && (strncmp((const char*)buffer_at_offset(input_buffer), "true", 4) == 0))
    {
        item->type = cJSON_True;
        item->valueint = 1;
        input_buffer->offset += 4;
        return true;
    }
    /* string */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '\"'))
    {
        return parse_string(item, input_buffer);
    }
    /* number */
    if (can_access_at_index(input_buffer, 0) && ((buffer_at_offset(input_buffer)[0] == '-') || ((buffer_at_offset(input_buffer)[0] >= '0') && (buffer_at_offset(input_buffer)[0] <= '9'))))
    {
        return parse_number(item, input_buffer);
    }
    /* array */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '['))
    {
        return parse_array(item, input_buffer);
    }
    /* object */
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '{'))
    {
        return parse_object(item, input_buffer);
    }

    return false;
}

/* Render a value to text. */
static cJSON_bool print_value(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output = NULL;

    if ((item == NULL) || (output_buffer == NULL))
    {
        return false;
    }

    switch ((item->type) & 0xFF)
    {
        case cJSON_NULL:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "null");
            return true;

        case cJSON_False:
            output = ensure(output_buffer, 6);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "false");
            return true;

        case cJSON_True:
            output = ensure(output_buffer, 5);
            if (output == NULL)
            {
                return false;
            }
            strcpy((char*)output, "true");
            return true;

        case cJSON_Number:
            return print_number(item, output_buffer);

        case cJSON_Raw:
        {
            size_t raw_length = 0;
            if (item->valuestring == NULL)
            {
                return false;
            }

            raw_length = strlen(item->valuestring) + sizeof("");
            output = ensure(output_buffer, raw_length);
            if (output == NULL)
            {
                return false;
            }
            memcpy(output, item->valuestring, raw_length);
            return true;
        }

        case cJSON_String:
            return print_string(item, output_buffer);

        case cJSON_Array:
            return print_array(item, output_buffer);

        case cJSON_Object:
            return print_object(item, output_buffer);

        default:
            return false;
    }
}

/* Build an array from input text. */
static cJSON_bool parse_array(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* head of the linked list */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (buffer_at_offset(input_buffer)[0] != '[')
    {
        /* not an array */
        goto fail;
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ']'))
    {
        /* empty array */
        goto success;
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        /* parse next value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || buffer_at_offset(input_buffer)[0] != ']')
    {
        goto fail; /* expected end of array */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Array;
    item->child = head;

    input_buffer->offset++;

    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an array to text */
static cJSON_bool print_array(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_element = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output array. */
    /* opening square bracket */
    output_pointer = ensure(output_buffer, 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer = '[';
    output_buffer->offset++;
    output_buffer->depth++;

    while (current_element != NULL)
    {
        if (!print_value(current_element, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);
        if (current_element->next)
        {
            length = (size_t) (output_buffer->format ? 2 : 1);
            output_pointer = ensure(output_buffer, length + 1);
            if (output_pointer == NULL)
            {
                return false;
            }
            *output_pointer++ = ',';
            if(output_buffer->format)
            {
                *output_pointer++ = ' ';
            }
            *output_pointer = '\0';
            output_buffer->offset += length;
        }
        current_element = current_element->next;
    }

    output_pointer = ensure(output_buffer, 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    *output_pointer++ = ']';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Build an object from the text. */
static cJSON_bool parse_object(cJSON * const item, parse_buffer * const input_buffer)
{
    cJSON *head = NULL; /* linked list head */
    cJSON *current_item = NULL;

    if (input_buffer->depth >= CJSON_NESTING_LIMIT)
    {
        return false; /* to deeply nested */
    }
    input_buffer->depth++;

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '{'))
    {
        goto fail; /* not an object */
    }

    input_buffer->offset++;
    buffer_skip_whitespace(input_buffer);
    if (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == '}'))
    {
        goto success; /* empty object */
    }

    /* check if we skipped to the end of the buffer */
    if (cannot_access_at_index(input_buffer, 0))
    {
        input_buffer->offset--;
        goto fail;
    }

    /* step back to character in front of the first element */
    input_buffer->offset--;
    /* loop through the comma separated array elements */
    do
    {
        /* allocate next item */
        cJSON *new_item = cJSON_New_Item(&(input_buffer->hooks));
        if (new_item == NULL)
        {
            goto fail; /* allocation failure */
        }

        /* attach next item to list */
        if (head == NULL)
        {
            /* start the linked list */
            current_item = head = new_item;
        }
        else
        {
            /* add to the end and advance */
            current_item->next = new_item;
            new_item->prev = current_item;
            current_item = new_item;
        }

        if (cannot_access_at_index(input_buffer, 1))
        {
            goto fail; /* nothing comes after the comma */
        }

        /* parse the name of the child */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_string(current_item, input_buffer))
        {
            goto fail; /* failed to parse name */
        }
        buffer_skip_whitespace(input_buffer);

        /* swap valuestring and string, because we parsed the name */
        current_item->string = current_item->valuestring;
        current_item->valuestring = NULL;

        if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != ':'))
        {
            goto fail; /* invalid object */
        }

        /* parse the value */
        input_buffer->offset++;
        buffer_skip_whitespace(input_buffer);
        if (!parse_value(current_item, input_buffer))
        {
            goto fail; /* failed to parse value */
        }
        buffer_skip_whitespace(input_buffer);
    }
    while (can_access_at_index(input_buffer, 0) && (buffer_at_offset(input_buffer)[0] == ','));

    if (cannot_access_at_index(input_buffer, 0) || (buffer_at_offset(input_buffer)[0] != '}'))
    {
        goto fail; /* expected end of object */
    }

success:
    input_buffer->depth--;

    if (head != NULL) {
        head->prev = current_item;
    }

    item->type = cJSON_Object;
    item->child = head;

    input_buffer->offset++;
    return true;

fail:
    if (head != NULL)
    {
        cJSON_Delete(head);
    }

    return false;
}

/* Render an object to text. */
static cJSON_bool print_object(const cJSON * const item, printbuffer * const output_buffer)
{
    unsigned char *output_pointer = NULL;
    size_t length = 0;
    cJSON *current_item = item->child;

    if (output_buffer == NULL)
    {
        return false;
    }

    /* Compose the output: */
    length = (size_t) (output_buffer->format ? 2 : 1); /* fmt: {\n */
    output_pointer = ensure(output_buffer, length + 1);
    if (output_pointer == NULL)
    {
        return false;
    }

    *output_pointer++ = '{';
    output_buffer->depth++;
    if (output_buffer->format)
    {
        *output_pointer++ = '\n';
    }
    output_buffer->offset += length;

    while (current_item)
    {
        if (output_buffer->format)
        {
            size_t i;
            output_pointer = ensure(output_buffer, output_buffer->depth);
            if (output_pointer == NULL)
            {
                return false;
            }
            for (i = 0; i < output_buffer->depth; i++)
            {
                *output_pointer++ = '\t';
            }
            output_buffer->offset += output_buffer->depth;
        }

        /* print key */
        if (!print_string_ptr((unsigned char*)current_item->string, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        length = (size_t) (output_buffer->format ? 2 : 1);
        output_pointer = ensure(output_buffer, length);
        if (output_pointer == NULL)
        {
            return false;
        }
        *output_pointer++ = ':';
        if (output_buffer->format)
        {
            *output_pointer++ = '\t';
        }
        output_buffer->offset += length;

        /* print value */
        if (!print_value(current_item, output_buffer))
        {
            return false;
        }
        update_offset(output_buffer);

        /* print comma if not last */
        length = ((size_t)(output_buffer->format ? 1 : 0) + (size_t)(current_item->next ? 1 : 0));
        output_pointer = ensure(output_buffer, length + 1);
        if (output_pointer == NULL)
        {
            return false;
        }
        if (current_item->next)
        {
            *output_pointer++ = ',';
        }

        if (output_buffer->format)
        {
            *output_pointer++ = '\n';
        }
        *output_pointer = '\0';
        output_buffer->offset += length;

        current_item = current_item->next;
    }

    output_pointer = ensure(output_buffer, output_buffer->format ? (output_buffer->depth + 1) : 2);
    if (output_pointer == NULL)
    {
        return false;
    }
    if (output_buffer->format)
    {
        size_t i;
        for (i = 0; i < (output_buffer->depth - 1); i++)
        {
            *output_pointer++ = '\t';
        }
    }
    *output_pointer++ = '}';
    *output_pointer = '\0';
    output_buffer->depth--;

    return true;
}

/* Get Array size/item / object item. */
CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array)
{
    cJSON *child = NULL;
    size_t size = 0;

    if (array == NULL)
    {
        return 0;
    }

    child = array->child;

    while(child != NULL)
    {
        size++;
        child = child->next;
    }

    /* FIXME: Can overflow here. Cannot be fixed without breaking the API */

    return (int)size;
}

static cJSON* get_array_item(const cJSON *array, size_t index)
{
    cJSON *current_child = NULL;

    if (array == NULL)
    {
        return NULL;
    }

    current_child = array->child;
    while ((current_child != NULL) && (index > 0))
    {
        index--;
        current_child = current_child->next;
    }

    return current_child;
}

CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index)
{
    if (index < 0)
    {
        return NULL;
    }

    return get_array_item(array, (size_t)index);
}

static cJSON *get_object_item(const cJSON * const object, const char * const name, const cJSON_bool case_sensitive)
{
    cJSON *current_element = NULL;

    if ((object == NULL) || (name == NULL))
    {
        return NULL;
    }

    current_element = object->child;
    if (case_sensitive)
    {
        while ((current_element != NULL) && (current_element->string != NULL) && (strcmp(name, current_element->string) != 0))
        {
            current_element = current_element->next;
        }
    }
    else
    {
        while ((current_element != NULL) && (case_insensitive_strcmp((const unsigned char*)name, (const unsigned char*)(current_element->string)) != 0))
        {
            current_element = current_element->next;
        }
    }

    if ((current_element == NULL) || (current_element->string == NULL)) {
        return NULL;
    }

    return current_element;
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, false);
}

CJSON_PUBLIC(cJSON *) cJSON_GetObjectItemCaseSensitive(const cJSON * const object, const char * const string)
{
    return get_object_item(object, string, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_HasObjectItem(const cJSON *object, const char *string)
{
    return cJSON_GetObjectItem(object, string) ? 1 : 0;
}

/* Utility for array list handling. */
static void suffix_object(cJSON *prev, cJSON *item)
{
    prev->next = item;
    item->prev = prev;
}

/* Utility for handling references. */
static cJSON *create_reference(const cJSON *item, const internal_hooks * const hooks)
{
    cJSON *reference = NULL;
    if (item == NULL)
    {
        return NULL;
    }

    reference = cJSON_New_Item(hooks);
    if (reference == NULL)
    {
        return NULL;
    }

    memcpy(reference, item, sizeof(cJSON));
    reference->string = NULL;
    reference->type |= cJSON_IsReference;
    reference->next = reference->prev = NULL;
    return reference;
}

static cJSON_bool add_item_to_array(cJSON *array, cJSON *item)
{
    cJSON *child = NULL;

    if ((item == NULL) || (array == NULL) || (array == item))
    {
        return false;
    }

    child = array->child;
    /*
     * To find the last item in array quickly, we use prev in array
     */
    if (child == NULL)
    {
        /* list is empty, start new one */
        array->child = item;
        item->prev = item;
        item->next = NULL;
    }
    else
    {
        /* append to the end */
        if (child->prev)
        {
            suffix_object(child->prev, item);
            array->child->prev = item;
        }
    }

    return true;
}

/* Add item to array/object. */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToArray(cJSON *array, cJSON *item)
{
    return add_item_to_array(array, item);
}

#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif
/* helper function to cast away const */
static void* cast_away_const(const void* string)
{
    return (void*)string;
}
#if defined(__clang__) || (defined(__GNUC__)  && ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ > 5))))
    #pragma GCC diagnostic pop
#endif


static cJSON_bool add_item_to_object(cJSON * const object, const char * const string, cJSON * const item, const internal_hooks * const hooks, const cJSON_bool constant_key)
{
    char *new_key = NULL;
    int new_type = cJSON_Invalid;

    if ((object == NULL) || (string == NULL) || (item == NULL) || (object == item))
    {
        return false;
    }

    if (constant_key)
    {
        new_key = (char*)cast_away_const(string);
        new_type = item->type | cJSON_StringIsConst;
    }
    else
    {
        new_key = (char*)cJSON_strdup((const unsigned char*)string, hooks);
        if (new_key == NULL)
        {
            return false;
        }

        new_type = item->type & ~cJSON_StringIsConst;
    }

    if (!(item->type & cJSON_StringIsConst) && (item->string != NULL))
    {
        hooks->deallocate(item->string);
    }

    item->string = new_key;
    item->type = new_type;

    return add_item_to_array(object, item);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObject(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, false);
}

/* Add an item to an object with constant string as key */
CJSON_PUBLIC(cJSON_bool) cJSON_AddItemToObjectCS(cJSON *object, const char *string, cJSON *item)
{
    return add_item_to_object(object, string, item, &global_hooks, true);
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToArray(cJSON *array, cJSON *item)
{
    if (array == NULL)
    {
        return false;
    }

    return add_item_to_array(array, create_reference(item, &global_hooks));
}

CJSON_PUBLIC(cJSON_bool) cJSON_AddItemReferenceToObject(cJSON *object, const char *string, cJSON *item)
{
    if ((object == NULL) || (string == NULL))
    {
        return false;
    }

    return add_item_to_object(object, string, create_reference(item, &global_hooks), &global_hooks, false);
}

CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name)
{
    cJSON *null = cJSON_CreateNull();
    if (add_item_to_object(object, name, null, &global_hooks, false))
    {
        return null;
    }

    cJSON_Delete(null);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddTrueToObject(cJSON * const object, const char * const name)
{
    cJSON *true_item = cJSON_CreateTrue();
    if (add_item_to_object(object, name, true_item, &global_hooks, false))
    {
        return true_item;
    }

    cJSON_Delete(true_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddFalseToObject(cJSON * const object, const char * const name)
{
    cJSON *false_item = cJSON_CreateFalse();
    if (add_item_to_object(object, name, false_item, &global_hooks, false))
    {
        return false_item;
    }

    cJSON_Delete(false_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean)
{
    cJSON *bool_item = cJSON_CreateBool(boolean);
    if (add_item_to_object(object, name, bool_item, &global_hooks, false))
    {
        return bool_item;
    }

    cJSON_Delete(bool_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number)
{
    cJSON *number_item = cJSON_CreateNumber(number);
    if (add_item_to_object(object, name, number_item, &global_hooks, false))
    {
        return number_item;
    }

    cJSON_Delete(number_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string)
{
    cJSON *string_item = cJSON_CreateString(string);
    if (add_item_to_object(object, name, string_item, &global_hooks, false))
    {
        return string_item;
    }

    cJSON_Delete(string_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddRawToObject(cJSON * const object, const char * const name, const char * const raw)
{
    cJSON *raw_item = cJSON_CreateRaw(raw);
    if (add_item_to_object(object, name, raw_item, &global_hooks, false))
    {
        return raw_item;
    }

    cJSON_Delete(raw_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name)
{
    cJSON *object_item = cJSON_CreateObject();
    if (add_item_to_object(object, name, object_item, &global_hooks, false))
    {
        return object_item;
    }

    cJSON_Delete(object_item);
    return NULL;
}

CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name)
{
    cJSON *array = cJSON_CreateArray();
    if (add_item_to_object(object, name, array, &global_hooks, false))
    {
        return array;
    }

    cJSON_Delete(array);
    return NULL;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemViaPointer(cJSON *parent, cJSON * const item)
{
    if ((parent == NULL) || (item == NULL) || (item != parent->child && item->prev == NULL))
    {
        return NULL;
    }

    if (item != parent->child)
    {
        /* not the first element */
        item->prev->next = item->next;
    }
    if (item->next != NULL)
    {
        /* not the last element */
        item->next->prev = item->prev;
    }

    if (item == parent->child)
    {
        /* first element */
        parent->child = item->next;
    }
    else if (item->next == NULL)
    {
        /* last element */
        parent->child->prev = item->prev;
    }

    /* make sure the detached item doesn't point anywhere anymore */
    item->prev = NULL;
    item->next = NULL;

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromArray(cJSON *array, int which)
{
    if (which < 0)
    {
        return NULL;
    }

    return cJSON_DetachItemViaPointer(array, get_array_item(array, (size_t)which));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromArray(cJSON *array, int which)
{
    cJSON_Delete(cJSON_DetachItemFromArray(array, which));
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObject(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItem(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(cJSON *) cJSON_DetachItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON *to_detach = cJSON_GetObjectItemCaseSensitive(object, string);

    return cJSON_DetachItemViaPointer(object, to_detach);
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObject(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObject(object, string));
}

CJSON_PUBLIC(void) cJSON_DeleteItemFromObjectCaseSensitive(cJSON *object, const char *string)
{
    cJSON_Delete(cJSON_DetachItemFromObjectCaseSensitive(object, string));
}

/* Replace array/object items with new ones. */
CJSON_PUBLIC(cJSON_bool) cJSON_InsertItemInArray(cJSON *array, int which, cJSON *newitem)
{
    cJSON *after_inserted = NULL;

    if (which < 0 || newitem == NULL)
    {
        return false;
    }

    after_inserted = get_array_item(array, (size_t)which);
    if (after_inserted == NULL)
    {
        return add_item_to_array(array, newitem);
    }

    if (after_inserted != array->child && after_inserted->prev == NULL) {
        /* return false if after_inserted is a corrupted array item */
        return false;
    }

    newitem->next = after_inserted;
    newitem->prev = after_inserted->prev;
    after_inserted->prev = newitem;
    if (after_inserted == array->child)
    {
        array->child = newitem;
    }
    else
    {
        newitem->prev->next = newitem;
    }
    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemViaPointer(cJSON * const parent, cJSON * const item, cJSON * replacement)
{
    if ((parent == NULL) || (parent->child == NULL) || (replacement == NULL) || (item == NULL))
    {
        return false;
    }

    if (replacement == item)
    {
        return true;
    }

    replacement->next = item->next;
    replacement->prev = item->prev;

    if (replacement->next != NULL)
    {
        replacement->next->prev = replacement;
    }
    if (parent->child == item)
    {
        if (parent->child->prev == parent->child)
        {
            replacement->prev = replacement;
        }
        parent->child = replacement;
    }
    else
    {   /*
         * To find the last item in array quickly, we use prev in array.
         * We can't modify the last item's next pointer where this item was the parent's child
         */
        if (replacement->prev != NULL)
        {
            replacement->prev->next = replacement;
        }
        if (replacement->next == NULL)
        {
            parent->child->prev = replacement;
        }
    }

    item->next = NULL;
    item->prev = NULL;
    cJSON_Delete(item);

    return true;
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInArray(cJSON *array, int which, cJSON *newitem)
{
    if (which < 0)
    {
        return false;
    }

    return cJSON_ReplaceItemViaPointer(array, get_array_item(array, (size_t)which), newitem);
}

static cJSON_bool replace_item_in_object(cJSON *object, const char *string, cJSON *replacement, cJSON_bool case_sensitive)
{
    if ((replacement == NULL) || (string == NULL))
    {
        return false;
    }

    /* replace the name in the replacement */
    if (!(replacement->type & cJSON_StringIsConst) && (replacement->string != NULL))
    {
        cJSON_free(replacement->string);
    }
    replacement->string = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
    if (replacement->string == NULL)
    {
        return false;
    }

    replacement->type &= ~cJSON_StringIsConst;

    return cJSON_ReplaceItemViaPointer(object, get_object_item(object, string, case_sensitive), replacement);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObject(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, false);
}

CJSON_PUBLIC(cJSON_bool) cJSON_ReplaceItemInObjectCaseSensitive(cJSON *object, const char *string, cJSON *newitem)
{
    return replace_item_in_object(object, string, newitem, true);
}

/* Create basic types: */
CJSON_PUBLIC(cJSON *) cJSON_CreateNull(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_NULL;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateTrue(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_True;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFalse(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateBool(cJSON_bool boolean)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = boolean ? cJSON_True : cJSON_False;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateNumber(double num)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Number;
        item->valuedouble = num;

        /* use saturation in case of overflow */
        if (num >= INT_MAX)
        {
            item->valueint = INT_MAX;
        }
        else if (num <= (double)INT_MIN)
        {
            item->valueint = INT_MIN;
        }
        else
        {
            item->valueint = (int)num;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateString(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_String;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)string, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringReference(const char *string)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL)
    {
        item->type = cJSON_String | cJSON_IsReference;
        item->valuestring = (char*)cast_away_const(string);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObjectReference(const cJSON *child)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Object | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArrayReference(const cJSON *child) {
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item != NULL) {
        item->type = cJSON_Array | cJSON_IsReference;
        item->child = (cJSON*)cast_away_const(child);
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateRaw(const char *raw)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type = cJSON_Raw;
        item->valuestring = (char*)cJSON_strdup((const unsigned char*)raw, &global_hooks);
        if(!item->valuestring)
        {
            cJSON_Delete(item);
            return NULL;
        }
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if(item)
    {
        item->type=cJSON_Array;
    }

    return item;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void)
{
    cJSON *item = cJSON_New_Item(&global_hooks);
    if (item)
    {
        item->type = cJSON_Object;
    }

    return item;
}

/* Create Arrays: */
CJSON_PUBLIC(cJSON *) cJSON_CreateIntArray(const int *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if (!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateFloatArray(const float *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber((double)numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateDoubleArray(const double *numbers, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (numbers == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for(i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateNumber(numbers[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p, n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

CJSON_PUBLIC(cJSON *) cJSON_CreateStringArray(const char *const *strings, int count)
{
    size_t i = 0;
    cJSON *n = NULL;
    cJSON *p = NULL;
    cJSON *a = NULL;

    if ((count < 0) || (strings == NULL))
    {
        return NULL;
    }

    a = cJSON_CreateArray();

    for (i = 0; a && (i < (size_t)count); i++)
    {
        n = cJSON_CreateString(strings[i]);
        if(!n)
        {
            cJSON_Delete(a);
            return NULL;
        }
        if(!i)
        {
            a->child = n;
        }
        else
        {
            suffix_object(p,n);
        }
        p = n;
    }

    if (a && a->child) {
        a->child->prev = n;
    }

    return a;
}

/* Duplication */
cJSON * cJSON_Duplicate_rec(const cJSON *item, size_t depth, cJSON_bool recurse);

CJSON_PUBLIC(cJSON *) cJSON_Duplicate(const cJSON *item, cJSON_bool recurse)
{
    return cJSON_Duplicate_rec(item, 0, recurse );
}

cJSON * cJSON_Duplicate_rec(const cJSON *item, size_t depth, cJSON_bool recurse)
{
    cJSON *newitem = NULL;
    cJSON *child = NULL;
    cJSON *next = NULL;
    cJSON *newchild = NULL;

    /* Bail on bad ptr */
    if (!item)
    {
        goto fail;
    }
    /* Create new item */
    newitem = cJSON_New_Item(&global_hooks);
    if (!newitem)
    {
        goto fail;
    }
    /* Copy over all vars */
    newitem->type = item->type & (~cJSON_IsReference);
    newitem->valueint = item->valueint;
    newitem->valuedouble = item->valuedouble;
    if (item->valuestring)
    {
        newitem->valuestring = (char*)cJSON_strdup((unsigned char*)item->valuestring, &global_hooks);
        if (!newitem->valuestring)
        {
            goto fail;
        }
    }
    if (item->string)
    {
        newitem->string = (item->type&cJSON_StringIsConst) ? item->string : (char*)cJSON_strdup((unsigned char*)item->string, &global_hooks);
        if (!newitem->string)
        {
            goto fail;
        }
    }
    /* If non-recursive, then we're done! */
    if (!recurse)
    {
        return newitem;
    }
    /* Walk the ->next chain for the child. */
    child = item->child;
    while (child != NULL)
    {
        if(depth >= CJSON_CIRCULAR_LIMIT) {
            goto fail;
        }
        newchild = cJSON_Duplicate_rec(child, depth + 1, true); /* Duplicate (with recurse) each item in the ->next chain */
        if (!newchild)
        {
            goto fail;
        }
        if (next != NULL)
        {
            /* If newitem->child already set, then crosswire ->prev and ->next and move on */
            next->next = newchild;
            newchild->prev = next;
            next = newchild;
        }
        else
        {
            /* Set newitem->child and move to it */
            newitem->child = newchild;
            next = newchild;
        }
        child = child->next;
    }
    if (newitem && newitem->child)
    {
        newitem->child->prev = newchild;
    }

    return newitem;

fail:
    if (newitem != NULL)
    {
        cJSON_Delete(newitem);
    }

    return NULL;
}

static void skip_oneline_comment(char **input)
{
    *input += static_strlen("//");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if ((*input)[0] == '\n') {
            *input += static_strlen("\n");
            return;
        }
    }
}

static void skip_multiline_comment(char **input)
{
    *input += static_strlen("/*");

    for (; (*input)[0] != '\0'; ++(*input))
    {
        if (((*input)[0] == '*') && ((*input)[1] == '/'))
        {
            *input += static_strlen("*/");
            return;
        }
    }
}

static void minify_string(char **input, char **output) {
    (*output)[0] = (*input)[0];
    *input += static_strlen("\"");
    *output += static_strlen("\"");


    for (; (*input)[0] != '\0'; (void)++(*input), ++(*output)) {
        (*output)[0] = (*input)[0];

        if ((*input)[0] == '\"') {
            (*output)[0] = '\"';
            *input += static_strlen("\"");
            *output += static_strlen("\"");
            return;
        } else if (((*input)[0] == '\\') && ((*input)[1] == '\"')) {
            (*output)[1] = (*input)[1];
            *input += static_strlen("\"");
            *output += static_strlen("\"");
        }
    }
}

CJSON_PUBLIC(void) cJSON_Minify(char *json)
{
    char *into = json;

    if (json == NULL)
    {
        return;
    }

    while (json[0] != '\0')
    {
        switch (json[0])
        {
            case ' ':
            case '\t':
            case '\r':
            case '\n':
                json++;
                break;

            case '/':
                if (json[1] == '/')
                {
                    skip_oneline_comment(&json);
                }
                else if (json[1] == '*')
                {
                    skip_multiline_comment(&json);
                } else {
                    json++;
                }
                break;

            case '\"':
                minify_string(&json, (char**)&into);
                break;

            default:
                into[0] = json[0];
                json++;
                into++;
        }
    }

    /* and null-terminate. */
    *into = '\0';
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsInvalid(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Invalid;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsFalse(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_False;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsTrue(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xff) == cJSON_True;
}


CJSON_PUBLIC(cJSON_bool) cJSON_IsBool(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & (cJSON_True | cJSON_False)) != 0;
}
CJSON_PUBLIC(cJSON_bool) cJSON_IsNull(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_NULL;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsNumber(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Number;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsString(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_String;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsArray(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Array;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsObject(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Object;
}

CJSON_PUBLIC(cJSON_bool) cJSON_IsRaw(const cJSON * const item)
{
    if (item == NULL)
    {
        return false;
    }

    return (item->type & 0xFF) == cJSON_Raw;
}

CJSON_PUBLIC(cJSON_bool) cJSON_Compare(const cJSON * const a, const cJSON * const b, const cJSON_bool case_sensitive)
{
    if ((a == NULL) || (b == NULL) || ((a->type & 0xFF) != (b->type & 0xFF)))
    {
        return false;
    }

    /* check if type is valid */
    switch (a->type & 0xFF)
    {
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
        case cJSON_Number:
        case cJSON_String:
        case cJSON_Raw:
        case cJSON_Array:
        case cJSON_Object:
            break;

        default:
            return false;
    }

    /* identical objects are equal */
    if (a == b)
    {
        return true;
    }

    switch (a->type & 0xFF)
    {
        /* in these cases and equal type is enough */
        case cJSON_False:
        case cJSON_True:
        case cJSON_NULL:
            return true;

        case cJSON_Number:
            if (compare_double(a->valuedouble, b->valuedouble))
            {
                return true;
            }
            return false;

        case cJSON_String:
        case cJSON_Raw:
            if ((a->valuestring == NULL) || (b->valuestring == NULL))
            {
                return false;
            }
            if (strcmp(a->valuestring, b->valuestring) == 0)
            {
                return true;
            }

            return false;

        case cJSON_Array:
        {
            cJSON *a_element = a->child;
            cJSON *b_element = b->child;

            for (; (a_element != NULL) && (b_element != NULL);)
            {
                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }

                a_element = a_element->next;
                b_element = b_element->next;
            }

            /* one of the arrays is longer than the other */
            if (a_element != b_element) {
                return false;
            }

            return true;
        }

        case cJSON_Object:
        {
            cJSON *a_element = NULL;
            cJSON *b_element = NULL;
            cJSON_ArrayForEach(a_element, a)
            {
                /* TODO This has O(n^2) runtime, which is horrible! */
                b_element = get_object_item(b, a_element->string, case_sensitive);
                if (b_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(a_element, b_element, case_sensitive))
                {
                    return false;
                }
            }

            /* doing this twice, once on a and b to prevent true comparison if a subset of b
             * TODO: Do this the proper way, this is just a fix for now */
            cJSON_ArrayForEach(b_element, b)
            {
                a_element = get_object_item(a, b_element->string, case_sensitive);
                if (a_element == NULL)
                {
                    return false;
                }

                if (!cJSON_Compare(b_element, a_element, case_sensitive))
                {
                    return false;
                }
            }

            return true;
        }

        default:
            return false;
    }
}

CJSON_PUBLIC(void *) cJSON_malloc(size_t size)
{
    return global_hooks.allocate(size);
}

CJSON_PUBLIC(void) cJSON_free(void *object)
{
    global_hooks.deallocate(object);
    object = NULL;
}


/* FILE: test.c */
/* LAYER: UTILITY */
/* PATH: test.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

/* Used by some code below as an example datatype. */
struct record
{
    const char *precision;
    double lat;
    double lon;
    const char *address;
    const char *city;
    const char *state;
    const char *zip;
    const char *country;
};


/* Create a bunch of objects as demonstration. */
static int print_preallocated(cJSON *root)
{
    /* declarations */
    char *out = NULL;
    char *buf = NULL;
    char *buf_fail = NULL;
    size_t len = 0;
    size_t len_fail = 0;

    /* formatted print */
    out = cJSON_Print(root);

    /* create buffer to succeed */
    /* the extra 5 bytes are because of inaccuracies when reserving memory */
    len = strlen(out) + 5;
    buf = (char*)malloc(len);
    if (buf == NULL)
    {
        printf("Failed to allocate memory.\n");
        exit(1);
    }

    /* create buffer to fail */
    len_fail = strlen(out);
    buf_fail = (char*)malloc(len_fail);
    if (buf_fail == NULL)
    {
        printf("Failed to allocate memory.\n");
        exit(1);
    }

    /* Print to buffer */
    if (!cJSON_PrintPreallocated(root, buf, (int)len, 1)) {
        printf("cJSON_PrintPreallocated failed!\n");
        if (strcmp(out, buf) != 0) {
            printf("cJSON_PrintPreallocated not the same as cJSON_Print!\n");
            printf("cJSON_Print result:\n%s\n", out);
            printf("cJSON_PrintPreallocated result:\n%s\n", buf);
        }
        free(out);
        free(buf_fail);
        free(buf);
        return -1;
    }

    /* success */
    printf("%s\n", buf);

    /* force it to fail */
    if (cJSON_PrintPreallocated(root, buf_fail, (int)len_fail, 1)) {
        printf("cJSON_PrintPreallocated failed to show error with insufficient memory!\n");
        printf("cJSON_Print result:\n%s\n", out);
        printf("cJSON_PrintPreallocated result:\n%s\n", buf_fail);
        free(out);
        free(buf_fail);
        free(buf);
        return -1;
    }

    free(out);
    free(buf_fail);
    free(buf);
    return 0;
}

/* Create a bunch of objects as demonstration. */
static void create_objects(void)
{
    /* declare a few. */
    cJSON *root = NULL;
    cJSON *fmt = NULL;
    cJSON *img = NULL;
    cJSON *thm = NULL;
    cJSON *fld = NULL;
    int i = 0;

    /* Our "days of the week" array: */
    const char *strings[7] =
    {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    /* Our matrix: */
    int numbers[3][3] =
    {
        {0, -1, 0},
        {1, 0, 0},
        {0 ,0, 1}
    };
    /* Our "gallery" item: */
    int ids[4] = { 116, 943, 234, 38793 };
    /* Our array of "records": */
    struct record fields[2] =
    {
        {
            "zip",
            37.7668,
            -1.223959e+2,
            "",
            "SAN FRANCISCO",
            "CA",
            "94107",
            "US"
        },
        {
            "zip",
            37.371991,
            -1.22026e+2,
            "",
            "SUNNYVALE",
            "CA",
            "94085",
            "US"
        }
    };
    volatile double zero = 0.0;

    /* Here we construct some JSON standards, from the JSON site. */

    /* Our "Video" datatype: */
    root = cJSON_CreateObject();
    cJSON_AddItemToObject(root, "name", cJSON_CreateString("Jack (\"Bee\") Nimble"));
    cJSON_AddItemToObject(root, "format", fmt = cJSON_CreateObject());
    cJSON_AddStringToObject(fmt, "type", "rect");
    cJSON_AddNumberToObject(fmt, "width", 1920);
    cJSON_AddNumberToObject(fmt, "height", 1080);
    cJSON_AddFalseToObject (fmt, "interlace");
    cJSON_AddNumberToObject(fmt, "frame rate", 24);

    /* Print to text */
    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);

    /* Our "days of the week" array: */
    root = cJSON_CreateStringArray(strings, 7);

    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);

    /* Our matrix: */
    root = cJSON_CreateArray();
    for (i = 0; i < 3; i++)
    {
        cJSON_AddItemToArray(root, cJSON_CreateIntArray(numbers[i], 3));
    }

    /* cJSON_ReplaceItemInArray(root, 1, cJSON_CreateString("Replacement")); */

    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);

    /* Our "gallery" item: */
    root = cJSON_CreateObject();
    cJSON_AddItemToObject(root, "Image", img = cJSON_CreateObject());
    cJSON_AddNumberToObject(img, "Width", 800);
    cJSON_AddNumberToObject(img, "Height", 600);
    cJSON_AddStringToObject(img, "Title", "View from 15th Floor");
    cJSON_AddItemToObject(img, "Thumbnail", thm = cJSON_CreateObject());
    cJSON_AddStringToObject(thm, "Url", "http:/*www.example.com/image/481989943");
    cJSON_AddNumberToObject(thm, "Height", 125);
    cJSON_AddStringToObject(thm, "Width", "100");
    cJSON_AddItemToObject(img, "IDs", cJSON_CreateIntArray(ids, 4));

    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);

    /* Our array of "records": */
    root = cJSON_CreateArray();
    for (i = 0; i < 2; i++)
    {
        cJSON_AddItemToArray(root, fld = cJSON_CreateObject());
        cJSON_AddStringToObject(fld, "precision", fields[i].precision);
        cJSON_AddNumberToObject(fld, "Latitude", fields[i].lat);
        cJSON_AddNumberToObject(fld, "Longitude", fields[i].lon);
        cJSON_AddStringToObject(fld, "Address", fields[i].address);
        cJSON_AddStringToObject(fld, "City", fields[i].city);
        cJSON_AddStringToObject(fld, "State", fields[i].state);
        cJSON_AddStringToObject(fld, "Zip", fields[i].zip);
        cJSON_AddStringToObject(fld, "Country", fields[i].country);
    }

    /* cJSON_ReplaceItemInObject(cJSON_GetArrayItem(root, 1), "City", cJSON_CreateIntArray(ids, 4)); */

    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);

    root = cJSON_CreateObject();
    cJSON_AddNumberToObject(root, "number", 1.0 / zero);

    if (print_preallocated(root) != 0) {
        cJSON_Delete(root);
        exit(EXIT_FAILURE);
    }
    cJSON_Delete(root);
}

int CJSON_CDECL main(void)
{
    /* print the version */
    printf("Version: %s\n", cJSON_Version());

    /* Now some samplecode for building objects concisely: */
    create_objects();

    return 0;
}


/* FILE: fuzzing/fuzz_main.c */
/* LAYER: UTILITY */
/* PATH: fuzzing/fuzz_main.c */
/* ------------------------------------------------------------ */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size); /* required by C89 */

/* fuzz target entry point, works without libFuzzer */

int main(int argc, char **argv)
{
    FILE *f;
    char *buf = NULL;
    long siz_buf;

    if(argc < 2)
    {
        fprintf(stderr, "no input file\n");
        goto err;
    }

    f = fopen(argv[1], "rb");
    if(f == NULL)
    {
        fprintf(stderr, "error opening input file %s\n", argv[1]);
        goto err;
    }

    fseek(f, 0, SEEK_END);

    siz_buf = ftell(f);
    rewind(f);

    if(siz_buf < 1) goto err;

    buf = (char*)malloc((size_t)siz_buf);
    if(buf == NULL)
    {
        fprintf(stderr, "malloc() failed\n");
        goto err;
    }

    if(fread(buf, (size_t)siz_buf, 1, f) != 1)
    {
        fprintf(stderr, "fread() failed\n");
        goto err;
    }

    (void)LLVMFuzzerTestOneInput((uint8_t*)buf, (size_t)siz_buf);

err:
    free(buf);

    return 0;
}


/* FILE: fuzzing/afl.c */
/* LAYER: UTILITY */
/* PATH: fuzzing/afl.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../cJSON.h"

static char *read_file(const char *filename)
{
    FILE *file = NULL;
    long length = 0;
    char *content = NULL;
    size_t read_chars = 0;

    /* open in read binary mode */
    file = fopen(filename, "rb");
    if (file == NULL)
    {
        goto cleanup;
    }

    /* get the length */
    if (fseek(file, 0, SEEK_END) != 0)
    {
        goto cleanup;
    }
    length = ftell(file);
    if (length < 0)
    {
        goto cleanup;
    }
    if (fseek(file, 0, SEEK_SET) != 0)
    {
        goto cleanup;
    }

    /* allocate content buffer */
    content = (char*)malloc((size_t)length + sizeof(""));
    if (content == NULL)
    {
        goto cleanup;
    }

    /* read the file into memory */
    read_chars = fread(content, sizeof(char), (size_t)length, file);
    if ((long)read_chars != length)
    {
        free(content);
        content = NULL;
        goto cleanup;
    }
    content[read_chars] = '\0';


cleanup:
    if (file != NULL)
    {
        fclose(file);
    }

    return content;
}

int main(int argc, char** argv)
{
    const char *filename = NULL;
    cJSON *item = NULL;
    char *json = NULL;
    int status = EXIT_FAILURE;
    char *printed_json = NULL;

    if ((argc < 2) || (argc > 3))
    {
        printf("Usage:\n");
        printf("%s input_file [enable_printing]\n", argv[0]);
        printf("\t input_file: file containing the test data\n");
        printf("\t enable_printing: print after parsing, 'yes' or 'no', defaults to 'no'\n");
        goto cleanup;
    }

    filename = argv[1];

#if __AFL_HAVE_MANUAL_CONTROL
    while (__AFL_LOOP(1000))
    {
#endif
    status = EXIT_SUCCESS;

    json = read_file(filename);
    if ((json == NULL) || (json[0] == '\0') || (json[1] == '\0'))
    {
        status = EXIT_FAILURE;
        goto cleanup;
    }
    item = cJSON_Parse(json + 2);
    if (item == NULL)
    {
        goto cleanup;
    }

    if ((argc == 3) && (strncmp(argv[2], "yes", 3) == 0))
    {
        int do_format = 0;
        if (json[1] == 'f')
        {
            do_format = 1;
        }

        if (json[0] == 'b')
        {
            /* buffered printing */
            printed_json = cJSON_PrintBuffered(item, 1, do_format);
        }
        else
        {
            /* unbuffered printing */
            if (do_format)
            {
                printed_json = cJSON_Print(item);
            }
            else
            {
                printed_json = cJSON_PrintUnformatted(item);
            }
        }
        if (printed_json == NULL)
        {
            status = EXIT_FAILURE;
            goto cleanup;
        }
        printf("%s\n", printed_json);
    }

cleanup:
    if (item != NULL)
    {
        cJSON_Delete(item);
        item = NULL;
    }
    if (json != NULL)
    {
        free(json);
        json = NULL;
    }
    if (printed_json != NULL)
    {
        free(printed_json);
        printed_json = NULL;
    }
#if __AFL_HAVE_MANUAL_CONTROL
    }
#endif

    return status;
}


/* FILE: fuzzing/cjson_read_fuzzer.c */
/* LAYER: UTILITY */
/* PATH: fuzzing/cjson_read_fuzzer.c */
/* ------------------------------------------------------------ */
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "../cJSON.h"

int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size); /* required by C89 */

int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size)
{
    cJSON *json;
    size_t offset = 4;
    unsigned char *copied;
    char *printed_json = NULL;
    int minify, require_termination, formatted, buffered;


    if(size <= offset) return 0;
    if(data[size-1] != '\0') return 0;
    if(data[0] != '1' && data[0] != '0') return 0;
    if(data[1] != '1' && data[1] != '0') return 0;
    if(data[2] != '1' && data[2] != '0') return 0;
    if(data[3] != '1' && data[3] != '0') return 0;

    minify              = data[0] == '1' ? 1 : 0;
    require_termination = data[1] == '1' ? 1 : 0;
    formatted           = data[2] == '1' ? 1 : 0;
    buffered            = data[3] == '1' ? 1 : 0;

    json = cJSON_ParseWithOpts((const char*)data + offset, NULL, require_termination);

    if(json == NULL) return 0;

    if(buffered)
    {
        printed_json = cJSON_PrintBuffered(json, 1, formatted);
    }
    else
    {
        /* unbuffered printing */
        if(formatted)
        {
            printed_json = cJSON_Print(json);
        }
        else
        {
            printed_json = cJSON_PrintUnformatted(json);
        }
    }

    if(printed_json != NULL) free(printed_json);

    if(minify)
    {
        copied = (unsigned char*)malloc(size);
        if(copied == NULL) return 0;

        memcpy(copied, data, size);

        cJSON_Minify((char*)copied + offset);

        free(copied);
    }

    cJSON_Delete(json);

    return 0;
}

#ifdef __cplusplus
}
#endif



/* FILE: tests/minify_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/minify_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2019 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"


static void cjson_minify_should_not_overflow_buffer(void)
{
    char unclosed_multiline_comment[] = "/* bla";
    char pending_escape[] = "\"\\";

    cJSON_Minify(unclosed_multiline_comment);
    TEST_ASSERT_EQUAL_STRING("", unclosed_multiline_comment);

    cJSON_Minify(pending_escape);
    TEST_ASSERT_EQUAL_STRING("\"\\", pending_escape);
}

static void cjson_minify_should_remove_single_line_comments(void)
{
    const char to_minify[] = "{// this is {} \"some kind\" of [] comment /*, don't you see\n}";

    char* minified = (char*) malloc(sizeof(to_minify));
    TEST_ASSERT_NOT_NULL(minified);
    strcpy(minified, to_minify);

    cJSON_Minify(minified);
    TEST_ASSERT_EQUAL_STRING("{}", minified);

    free(minified);
}

static void cjson_minify_should_remove_spaces(void)
{
    const char to_minify[] = "{ \"key\":\ttrue\r\n    }";

    char* minified = (char*) malloc(sizeof(to_minify));
    TEST_ASSERT_NOT_NULL(minified);
    strcpy(minified, to_minify);

    cJSON_Minify(minified);
    TEST_ASSERT_EQUAL_STRING("{\"key\":true}", minified);

    free(minified);
}

static void cjson_minify_should_remove_multiline_comments(void)
{
    const char to_minify[] = "{/* this is\n a /* multi\n //line \n {comment \"\\\" */}";

    char* minified = (char*) malloc(sizeof(to_minify));
    TEST_ASSERT_NOT_NULL(minified);
    strcpy(minified, to_minify);

    cJSON_Minify(minified);
    TEST_ASSERT_EQUAL_STRING("{}", minified);

    free(minified);
}

static void cjson_minify_should_not_modify_strings(void)
{
    const char to_minify[] = "\"this is a string \\\" \\t bla\"";

    char* minified = (char*) malloc(sizeof(to_minify));
    TEST_ASSERT_NOT_NULL(minified);
    strcpy(minified, to_minify);

    cJSON_Minify(minified);
    TEST_ASSERT_EQUAL_STRING(to_minify, minified);

    free(minified);
}

static void cjson_minify_should_minify_json(void) {
    const char to_minify[] =
            "{\n"
            "    \"glossary\": { // comment\n"
            "        \"title\": \"example glossary\",\n"
            "  /* multi\n"
            " line */\n"
            "		\"GlossDiv\": {\n"
            "            \"title\": \"S\",\n"
            "			\"GlossList\": {\n"
            "                \"GlossEntry\": {\n"
            "                    \"ID\": \"SGML\",\n"
            "					\"SortAs\": \"SGML\",\n"
            "					\"Acronym\": \"SGML\",\n"
            "					\"Abbrev\": \"ISO 8879:1986\",\n"
            "					\"GlossDef\": {\n"
            "						\"GlossSeeAlso\": [\"GML\", \"XML\"]\n"
            "                    },\n"
            "					\"GlossSee\": \"markup\"\n"
            "                }\n"
            "            }\n"
            "        }\n"
            "    }\n"
            "}";
    const char* minified =
            "{"
            "\"glossary\":{"
            "\"title\":\"example glossary\","
            "\"GlossDiv\":{"
            "\"title\":\"S\","
            "\"GlossList\":{"
            "\"GlossEntry\":{"
            "\"ID\":\"SGML\","
            "\"SortAs\":\"SGML\","
            "\"Acronym\":\"SGML\","
            "\"Abbrev\":\"ISO 8879:1986\","
            "\"GlossDef\":{"
            "\"GlossSeeAlso\":[\"GML\",\"XML\"]"
            "},"
            "\"GlossSee\":\"markup\""
            "}"
            "}"
            "}"
            "}"
            "}";

    char *buffer = (char*) malloc(sizeof(to_minify));
    strcpy(buffer, to_minify);

    cJSON_Minify(buffer);
    TEST_ASSERT_EQUAL_STRING(minified, buffer);

    free(buffer);
}

static void cjson_minify_should_not_loop_infinitely(void) {
    char string[] = { '8', ' ', '/', ' ', '5', '\n', '\0' };
    /* this should not be an infinite loop */
    cJSON_Minify(string);
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_minify_should_not_overflow_buffer);
    RUN_TEST(cjson_minify_should_minify_json);
    RUN_TEST(cjson_minify_should_remove_single_line_comments);
    RUN_TEST(cjson_minify_should_remove_multiline_comments);
    RUN_TEST(cjson_minify_should_remove_spaces);
    RUN_TEST(cjson_minify_should_not_modify_strings);
    RUN_TEST(cjson_minify_should_not_loop_infinitely);

    return UNITY_END();
}


/* FILE: tests/parse_number.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_number.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON item[1];

static void assert_is_number(cJSON *number_item)
{
    TEST_ASSERT_NOT_NULL_MESSAGE(number_item, "Item is NULL.");

    assert_not_in_list(number_item);
    assert_has_no_child(number_item);
    assert_has_type(number_item, cJSON_Number);
    assert_has_no_reference(number_item);
    assert_has_no_const_string(number_item);
    assert_has_no_valuestring(number_item);
    assert_has_no_string(number_item);
}

static void assert_parse_number(const char *string, int integer, double real)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)string;
    buffer.length = strlen(string) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE(parse_number(item, &buffer));
    assert_is_number(item);
    TEST_ASSERT_EQUAL_INT(integer, item->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(real, item->valuedouble);
}

static void assert_parse_big_number(const char *string)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)string;
    buffer.length = strlen(string) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE(parse_number(item, &buffer));
    assert_is_number(item);
}

static void parse_number_should_parse_zero(void)
{
    assert_parse_number("0", 0, 0);
    assert_parse_number("0.0", 0, 0.0);
    assert_parse_number("-0", 0, -0.0);
}

static void parse_number_should_parse_negative_integers(void)
{
    assert_parse_number("-1", -1, -1);
    assert_parse_number("-32768", -32768, -32768.0);
    assert_parse_number("-2147483648", (int)-2147483648.0, -2147483648.0);
}

static void parse_number_should_parse_positive_integers(void)
{
    assert_parse_number("1", 1, 1);
    assert_parse_number("32767", 32767, 32767.0);
    assert_parse_number("2147483647", (int)2147483647.0, 2147483647.0);
}

static void parse_number_should_parse_positive_reals(void)
{
    assert_parse_number("0.001", 0, 0.001);
    assert_parse_number("10e-10", 0, 10e-10);
    assert_parse_number("10E-10", 0, 10e-10);
    assert_parse_number("10e10", INT_MAX, 10e10);
    assert_parse_number("123e+127", INT_MAX, 123e127);
    assert_parse_number("123e-128", 0, 123e-128);
}

static void parse_number_should_parse_negative_reals(void)
{
    assert_parse_number("-0.001", 0, -0.001);
    assert_parse_number("-10e-10", 0, -10e-10);
    assert_parse_number("-10E-10", 0, -10e-10);
    assert_parse_number("-10e20", INT_MIN, -10e20);
    assert_parse_number("-123e+127", INT_MIN, -123e127);
    assert_parse_number("-123e-128", 0, -123e-128);
}

static void parse_number_should_parse_big_numbers(void)
{
    assert_parse_big_number("9999999999999999999999999999999999999999999999912345678901234567");
    assert_parse_big_number("9999999999999999999999999999999999999999999999912345678901234567E10");
    assert_parse_big_number("999999999999999999999999999999999999999999999991234567890.1234567");
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    memset(item, 0, sizeof(cJSON));
    UNITY_BEGIN();
    RUN_TEST(parse_number_should_parse_zero);
    RUN_TEST(parse_number_should_parse_negative_integers);
    RUN_TEST(parse_number_should_parse_positive_integers);
    RUN_TEST(parse_number_should_parse_positive_reals);
    RUN_TEST(parse_number_should_parse_negative_reals);
    RUN_TEST(parse_number_should_parse_big_numbers);
    return UNITY_END();
}


/* FILE: tests/old_utils_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/old_utils_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"
#include "../cJSON_Utils.h"

/* JSON Apply Merge tests: */
static const char *merges[15][3] =
{
    {"{\"a\":\"b\"}", "{\"a\":\"c\"}", "{\"a\":\"c\"}"},
    {"{\"a\":\"b\"}", "{\"b\":\"c\"}", "{\"a\":\"b\",\"b\":\"c\"}"},
    {"{\"a\":\"b\"}", "{\"a\":null}", "{}"},
    {"{\"a\":\"b\",\"b\":\"c\"}", "{\"a\":null}", "{\"b\":\"c\"}"},
    {"{\"a\":[\"b\"]}", "{\"a\":\"c\"}", "{\"a\":\"c\"}"},
    {"{\"a\":\"c\"}", "{\"a\":[\"b\"]}", "{\"a\":[\"b\"]}"},
    {"{\"a\":{\"b\":\"c\"}}", "{\"a\":{\"b\":\"d\",\"c\":null}}", "{\"a\":{\"b\":\"d\"}}"},
    {"{\"a\":[{\"b\":\"c\"}]}", "{\"a\":[1]}", "{\"a\":[1]}"},
    {"[\"a\",\"b\"]", "[\"c\",\"d\"]", "[\"c\",\"d\"]"},
    {"{\"a\":\"b\"}", "[\"c\"]", "[\"c\"]"},
    {"{\"a\":\"foo\"}", "null", "null"},
    {"{\"a\":\"foo\"}", "\"bar\"", "\"bar\""},
    {"{\"e\":null}", "{\"a\":1}", "{\"e\":null,\"a\":1}"},
    {"[1,2]", "{\"a\":\"b\",\"c\":null}", "{\"a\":\"b\"}"},
    {"{}","{\"a\":{\"bb\":{\"ccc\":null}}}", "{\"a\":{\"bb\":{}}}"}
};

static void json_pointer_tests(void)
{
    cJSON *root = NULL;
    const char *json=
        "{"
        "\"foo\": [\"bar\", \"baz\"],"
        "\"\": 0,"
        "\"a/b\": 1,"
        "\"c%d\": 2,"
        "\"e^f\": 3,"
        "\"g|h\": 4,"
        "\"i\\\\j\": 5,"
        "\"k\\\"l\": 6,"
        "\" \": 7,"
        "\"m~n\": 8"
        "}";

    root = cJSON_Parse(json);

    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, ""), root);
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/foo"), cJSON_GetObjectItem(root, "foo"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/foo/0"), cJSON_GetObjectItem(root, "foo")->child);
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/foo/0"), cJSON_GetObjectItem(root, "foo")->child);
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/"), cJSON_GetObjectItem(root, ""));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/a~1b"), cJSON_GetObjectItem(root, "a/b"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/c%d"), cJSON_GetObjectItem(root, "c%d"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/c^f"), cJSON_GetObjectItem(root, "c^f"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/c|f"), cJSON_GetObjectItem(root, "c|f"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/i\\j"), cJSON_GetObjectItem(root, "i\\j"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/k\"l"), cJSON_GetObjectItem(root, "k\"l"));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/ "), cJSON_GetObjectItem(root, " "));
    TEST_ASSERT_EQUAL_PTR(cJSONUtils_GetPointer(root, "/m~0n"), cJSON_GetObjectItem(root, "m~n"));

    cJSON_Delete(root);
}

static void misc_tests(void)
{
    /* Misc tests */
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cJSON *object = NULL;
    cJSON *object1 = NULL;
    cJSON *object2 = NULL;
    cJSON *object3 = NULL;
    cJSON *object4 = NULL;
    cJSON *nums = NULL;
    cJSON *num6 = NULL;
    char *pointer = NULL;

    printf("JSON Pointer construct\n");
    object = cJSON_CreateObject();
    nums = cJSON_CreateIntArray(numbers, 10);
    num6 = cJSON_GetArrayItem(nums, 6);
    cJSON_AddItemToObject(object, "numbers", nums);

    pointer = cJSONUtils_FindPointerFromObjectTo(object, num6);
    TEST_ASSERT_EQUAL_STRING("/numbers/6", pointer);
    free(pointer);

    pointer = cJSONUtils_FindPointerFromObjectTo(object, nums);
    TEST_ASSERT_EQUAL_STRING("/numbers", pointer);
    free(pointer);

    pointer = cJSONUtils_FindPointerFromObjectTo(object, object);
    TEST_ASSERT_EQUAL_STRING("", pointer);
    free(pointer);

    object1 = cJSON_CreateObject();
    object2 = cJSON_CreateString("m~n");
    cJSON_AddItemToObject(object1, "m~n", object2);
    pointer = cJSONUtils_FindPointerFromObjectTo(object1, object2);
    TEST_ASSERT_EQUAL_STRING("/m~0n",pointer);
    free(pointer);

    object3 = cJSON_CreateObject();
    object4 = cJSON_CreateString("m/n");
    cJSON_AddItemToObject(object3, "m/n", object4);
    pointer = cJSONUtils_FindPointerFromObjectTo(object3, object4);
    TEST_ASSERT_EQUAL_STRING("/m~1n",pointer);
    free(pointer);

    cJSON_Delete(object);
    cJSON_Delete(object1);
    cJSON_Delete(object3);
}

static void sort_tests(void)
{
    /* Misc tests */
    const char *random = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char buf[2] = {'\0', '\0'};
    cJSON *sortme = NULL;
    size_t i = 0;
    cJSON *current_element = NULL;

    /* JSON Sort test: */
    sortme = cJSON_CreateObject();
    for (i = 0; i < 26; i++)
    {
        buf[0] = random[i];
        cJSON_AddItemToObject(sortme, buf, cJSON_CreateNumber(1));
    }

    cJSONUtils_SortObject(sortme);

    /* check sorting */
    current_element = sortme->child->next;
    for (i = 1; (i < 26) && (current_element != NULL) && (current_element->prev != NULL); i++)
    {
        TEST_ASSERT_TRUE(current_element->string[0] >= current_element->prev->string[0]);
        current_element = current_element->next;
    }

    cJSON_Delete(sortme);
}

static void merge_tests(void)
{
    size_t i = 0;
    char *patchtext = NULL;
    char *after = NULL;

    /* Merge tests: */
    printf("JSON Merge Patch tests\n");
    for (i = 0; i < 15; i++)
    {
        cJSON *object_to_be_merged = cJSON_Parse(merges[i][0]);
        cJSON *patch = cJSON_Parse(merges[i][1]);
        patchtext = cJSON_PrintUnformatted(patch);
        object_to_be_merged = cJSONUtils_MergePatch(object_to_be_merged, patch);
        after = cJSON_PrintUnformatted(object_to_be_merged);
        TEST_ASSERT_EQUAL_STRING(merges[i][2], after);

        free(patchtext);
        free(after);
        cJSON_Delete(object_to_be_merged);
        cJSON_Delete(patch);
    }
}

static void generate_merge_tests(void)
{
    size_t i = 0;
    char *patchedtext = NULL;

    /* Generate Merge tests: */
    for (i = 0; i < 15; i++)
    {
        cJSON *from = cJSON_Parse(merges[i][0]);
        cJSON *to = cJSON_Parse(merges[i][2]);
        cJSON *patch = cJSONUtils_GenerateMergePatch(from,to);
        from = cJSONUtils_MergePatch(from,patch);
        patchedtext = cJSON_PrintUnformatted(from);
        TEST_ASSERT_EQUAL_STRING(merges[i][2], patchedtext);

        cJSON_Delete(from);
        cJSON_Delete(to);
        cJSON_Delete(patch);
        free(patchedtext);
    }
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(json_pointer_tests);
    RUN_TEST(misc_tests);
    RUN_TEST(sort_tests);
    RUN_TEST(merge_tests);
    RUN_TEST(generate_merge_tests);

    return UNITY_END();
}


/* FILE: tests/print_value.c */
/* LAYER: UTILITY */
/* PATH: tests/print_value.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void assert_print_value(const char *input)
{
    unsigned char printed[1024];
    cJSON item[1];
    printbuffer buffer = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };
    parse_buffer parsebuffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.buffer = printed;
    buffer.length = sizeof(printed);
    buffer.offset = 0;
    buffer.noalloc = true;
    buffer.hooks = global_hooks;

    parsebuffer.content = (const unsigned char*)input;
    parsebuffer.length = strlen(input) + sizeof("");
    parsebuffer.hooks = global_hooks;

    memset(item, 0, sizeof(item));

    TEST_ASSERT_TRUE_MESSAGE(parse_value(item, &parsebuffer), "Failed to parse value.");

    TEST_ASSERT_TRUE_MESSAGE(print_value(item, &buffer), "Failed to print value.");
    TEST_ASSERT_EQUAL_STRING_MESSAGE(input, buffer.buffer, "Printed value is not as expected.");

    reset(item);
}

static void print_value_should_print_null(void)
{
    assert_print_value("null");
}

static void print_value_should_print_true(void)
{
    assert_print_value("true");
}

static void print_value_should_print_false(void)
{
    assert_print_value("false");
}

static void print_value_should_print_number(void)
{
    assert_print_value("1.5");
}

static void print_value_should_print_string(void)
{
    assert_print_value("\"\"");
    assert_print_value("\"hello\"");
}

static void print_value_should_print_array(void)
{
    assert_print_value("[]");
}

static void print_value_should_print_object(void)
{
    assert_print_value("{}");
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    UNITY_BEGIN();

    RUN_TEST(print_value_should_print_null);
    RUN_TEST(print_value_should_print_true);
    RUN_TEST(print_value_should_print_false);
    RUN_TEST(print_value_should_print_number);
    RUN_TEST(print_value_should_print_string);
    RUN_TEST(print_value_should_print_array);
    RUN_TEST(print_value_should_print_object);

    return UNITY_END();
}


/* FILE: tests/parse_with_opts.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_with_opts.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void parse_with_opts_should_handle_null(void)
{
    const char *error_pointer = NULL;
    cJSON *item = NULL;
    TEST_ASSERT_NULL_MESSAGE(cJSON_ParseWithOpts(NULL, &error_pointer, false), "Failed to handle NULL input.");
    item = cJSON_ParseWithOpts("{}", NULL, false);
    TEST_ASSERT_NOT_NULL_MESSAGE(item, "Failed to handle NULL error pointer.");
    cJSON_Delete(item);
    TEST_ASSERT_NULL_MESSAGE(cJSON_ParseWithOpts(NULL, NULL, false), "Failed to handle both NULL.");
    TEST_ASSERT_NULL_MESSAGE(cJSON_ParseWithOpts("{", NULL, false), "Failed to handle NULL error pointer with parse error.");
}

static void parse_with_opts_should_handle_empty_strings(void)
{
    const char empty_string[] = "";
    const char *error_pointer = NULL;

    TEST_ASSERT_NULL(cJSON_ParseWithOpts(empty_string, NULL, false));
    TEST_ASSERT_EQUAL_PTR(empty_string, cJSON_GetErrorPtr());

    TEST_ASSERT_NULL(cJSON_ParseWithOpts(empty_string, &error_pointer, false));
    TEST_ASSERT_EQUAL_PTR(empty_string, error_pointer);
    TEST_ASSERT_EQUAL_PTR(empty_string, cJSON_GetErrorPtr());
}

static void parse_with_opts_should_handle_incomplete_json(void)
{
    const char json[] = "{ \"name\": ";
    const char *parse_end = NULL;

    TEST_ASSERT_NULL(cJSON_ParseWithOpts(json, &parse_end, false));
    TEST_ASSERT_EQUAL_PTR(json + strlen(json), parse_end);
    TEST_ASSERT_EQUAL_PTR(json + strlen(json), cJSON_GetErrorPtr());
}

static void parse_with_opts_should_require_null_if_requested(void)
{
    cJSON *item = cJSON_ParseWithOpts("{}", NULL, true);
    TEST_ASSERT_NOT_NULL(item);
    cJSON_Delete(item);
    item = cJSON_ParseWithOpts("{} \n", NULL, true);
    TEST_ASSERT_NOT_NULL(item);
    cJSON_Delete(item);
    TEST_ASSERT_NULL(cJSON_ParseWithOpts("{}x", NULL, true));
}

static void parse_with_opts_should_return_parse_end(void)
{
    const char json[] = "[] empty array XD";
    const char *parse_end = NULL;

    cJSON *item = cJSON_ParseWithOpts(json, &parse_end, false);
    TEST_ASSERT_NOT_NULL(item);
    TEST_ASSERT_EQUAL_PTR(json + 2, parse_end);
    cJSON_Delete(item);
}

static void parse_with_opts_should_parse_utf8_bom(void)
{
    cJSON *with_bom = NULL;
    cJSON *without_bom = NULL;

    with_bom = cJSON_ParseWithOpts("\xEF\xBB\xBF{}", NULL, true);
    TEST_ASSERT_NOT_NULL(with_bom);
    without_bom = cJSON_ParseWithOpts("{}", NULL, true);
    TEST_ASSERT_NOT_NULL(with_bom);

    TEST_ASSERT_TRUE(cJSON_Compare(with_bom, without_bom, true));

    cJSON_Delete(with_bom);
    cJSON_Delete(without_bom);
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(parse_with_opts_should_handle_null);
    RUN_TEST(parse_with_opts_should_handle_empty_strings);
    RUN_TEST(parse_with_opts_should_handle_incomplete_json);
    RUN_TEST(parse_with_opts_should_require_null_if_requested);
    RUN_TEST(parse_with_opts_should_return_parse_end);
    RUN_TEST(parse_with_opts_should_parse_utf8_bom);

    return UNITY_END();
}


/* FILE: tests/parse_array.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_array.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON item[1];

static void assert_is_array(cJSON *array_item)
{
    TEST_ASSERT_NOT_NULL_MESSAGE(array_item, "Item is NULL.");

    assert_not_in_list(array_item);
    assert_has_type(array_item, cJSON_Array);
    assert_has_no_reference(array_item);
    assert_has_no_const_string(array_item);
    assert_has_no_valuestring(array_item);
    assert_has_no_string(array_item);
}

static void assert_not_array(const char *json)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)json;
    buffer.length = strlen(json) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_FALSE(parse_array(item, &buffer));
    assert_is_invalid(item);
}

static void assert_parse_array(const char *json)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)json;
    buffer.length = strlen(json) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE(parse_array(item, &buffer));
    assert_is_array(item);
}

static void parse_array_should_parse_empty_arrays(void)
{
    assert_parse_array("[]");
    assert_has_no_child(item);

    assert_parse_array("[\n\t]");
    assert_has_no_child(item);
}


static void parse_array_should_parse_arrays_with_one_element(void)
{

    assert_parse_array("[1]");
    assert_has_child(item);
    assert_has_type(item->child, cJSON_Number);
    reset(item);

    assert_parse_array("[\"hello!\"]");
    assert_has_child(item);
    assert_has_type(item->child, cJSON_String);
    TEST_ASSERT_EQUAL_STRING("hello!", item->child->valuestring);
    reset(item);

    assert_parse_array("[[]]");
    assert_has_child(item);
    TEST_ASSERT_NOT_NULL(item->child);
    assert_has_type(item->child, cJSON_Array);
    assert_has_no_child(item->child);
    reset(item);

    assert_parse_array("[null]");
    assert_has_child(item);
    assert_has_type(item->child, cJSON_NULL);
    reset(item);
}

static void parse_array_should_parse_arrays_with_multiple_elements(void)
{
    assert_parse_array("[1\t,\n2, 3]");
    assert_has_child(item);
    TEST_ASSERT_NOT_NULL(item->child->next);
    TEST_ASSERT_NOT_NULL(item->child->next->next);
    TEST_ASSERT_NULL(item->child->next->next->next);
    assert_has_type(item->child, cJSON_Number);
    assert_has_type(item->child->next, cJSON_Number);
    assert_has_type(item->child->next->next, cJSON_Number);
    reset(item);

    {
        size_t i = 0;
        cJSON *node = NULL;
        int expected_types[7] =
        {
            cJSON_Number,
            cJSON_NULL,
            cJSON_True,
            cJSON_False,
            cJSON_Array,
            cJSON_String,
            cJSON_Object
        };
        assert_parse_array("[1, null, true, false, [], \"hello\", {}]");

        node = item->child;
        for (
                i = 0;
                (i < (sizeof(expected_types)/sizeof(int)))
                && (node != NULL);
                (void)i++, node = node->next)
        {
            TEST_ASSERT_BITS(0xFF, expected_types[i], node->type);
        }
        TEST_ASSERT_EQUAL_INT(i, 7);
        reset(item);
    }
}

static void parse_array_should_not_parse_non_arrays(void)
{
    assert_not_array("");
    assert_not_array("[");
    assert_not_array("]");
    assert_not_array("{\"hello\":[]}");
    assert_not_array("42");
    assert_not_array("3.14");
    assert_not_array("\"[]hello world!\n\"");
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    memset(item, 0, sizeof(cJSON));

    UNITY_BEGIN();
    RUN_TEST(parse_array_should_parse_empty_arrays);
    RUN_TEST(parse_array_should_parse_arrays_with_one_element);
    RUN_TEST(parse_array_should_parse_arrays_with_multiple_elements);
    RUN_TEST(parse_array_should_not_parse_non_arrays);
    return UNITY_END();
}


/* FILE: tests/print_array.c */
/* LAYER: UTILITY */
/* PATH: tests/print_array.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void assert_print_array(const char * const expected, const char * const input)
{
    unsigned char printed_unformatted[1024];
    unsigned char printed_formatted[1024];

    cJSON item[1];

    printbuffer formatted_buffer = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };
    printbuffer unformatted_buffer = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };

    parse_buffer parsebuffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    parsebuffer.content = (const unsigned char*)input;
    parsebuffer.length = strlen(input) + sizeof("");
    parsebuffer.hooks = global_hooks;

    /* buffer for formatted printing */
    formatted_buffer.buffer = printed_formatted;
    formatted_buffer.length = sizeof(printed_formatted);
    formatted_buffer.offset = 0;
    formatted_buffer.noalloc = true;
    formatted_buffer.hooks = global_hooks;

    /* buffer for unformatted printing */
    unformatted_buffer.buffer = printed_unformatted;
    unformatted_buffer.length = sizeof(printed_unformatted);
    unformatted_buffer.offset = 0;
    unformatted_buffer.noalloc = true;
    unformatted_buffer.hooks = global_hooks;

    memset(item, 0, sizeof(item));
    TEST_ASSERT_TRUE_MESSAGE(parse_array(item, &parsebuffer), "Failed to parse array.");

    unformatted_buffer.format = false;
    TEST_ASSERT_TRUE_MESSAGE(print_array(item, &unformatted_buffer), "Failed to print unformatted string.");
    TEST_ASSERT_EQUAL_STRING_MESSAGE(input, printed_unformatted, "Unformatted array is not correct.");

    formatted_buffer.format = true;
    TEST_ASSERT_TRUE_MESSAGE(print_array(item, &formatted_buffer), "Failed to print formatted string.");
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, printed_formatted, "Formatted array is not correct.");

    reset(item);
}

static void print_array_should_print_empty_arrays(void)
{
    assert_print_array("[]", "[]");
}

static void print_array_should_print_arrays_with_one_element(void)
{

    assert_print_array("[1]", "[1]");
    assert_print_array("[\"hello!\"]", "[\"hello!\"]");
    assert_print_array("[[]]", "[[]]");
    assert_print_array("[null]", "[null]");
}

static void print_array_should_print_arrays_with_multiple_elements(void)
{
    assert_print_array("[1, 2, 3]", "[1,2,3]");
    assert_print_array("[1, null, true, false, [], \"hello\", {\n\t}]", "[1,null,true,false,[],\"hello\",{}]");
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    UNITY_BEGIN();

    RUN_TEST(print_array_should_print_empty_arrays);
    RUN_TEST(print_array_should_print_arrays_with_one_element);
    RUN_TEST(print_array_should_print_arrays_with_multiple_elements);

    return UNITY_END();
}


/* FILE: tests/parse_hex4.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_hex4.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void parse_hex4_should_parse_all_combinations(void)
{
    unsigned int number = 0;
    unsigned char digits_lower[6];
    unsigned char digits_upper[6];
    /* test all combinations */
    for (number = 0; number <= 0xFFFF; number++)
    {
        TEST_ASSERT_EQUAL_INT_MESSAGE(4, sprintf((char*)digits_lower, "%.4x", number), "sprintf failed.");
        TEST_ASSERT_EQUAL_INT_MESSAGE(4, sprintf((char*)digits_upper, "%.4X", number), "sprintf failed.");

        TEST_ASSERT_EQUAL_INT_MESSAGE(number, parse_hex4(digits_lower), "Failed to parse lowercase digits.");
        TEST_ASSERT_EQUAL_INT_MESSAGE(number, parse_hex4(digits_upper), "Failed to parse uppercase digits.");
    }
}

static void parse_hex4_should_parse_mixed_case(void)
{
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"beef"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"beeF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"beEf"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"beEF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"bEef"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"bEeF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"bEEf"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"bEEF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"Beef"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BeeF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BeEf"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BeEF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BEef"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BEeF"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BEEf"));
    TEST_ASSERT_EQUAL_INT(0xBEEF, parse_hex4((const unsigned char*)"BEEF"));
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();
    RUN_TEST(parse_hex4_should_parse_all_combinations);
    RUN_TEST(parse_hex4_should_parse_mixed_case);
    return UNITY_END();
}


/* FILE: tests/misc_utils_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/misc_utils_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"
#include "../cJSON_Utils.h"

static void cjson_utils_functions_shouldnt_crash_with_null_pointers(void)
{
    cJSON *item = cJSON_CreateString("item");
    TEST_ASSERT_NOT_NULL(item);

    TEST_ASSERT_NULL(cJSONUtils_GetPointer(item, NULL));
    TEST_ASSERT_NULL(cJSONUtils_GetPointer(NULL, "pointer"));
    TEST_ASSERT_NULL(cJSONUtils_GetPointerCaseSensitive(NULL, "pointer"));
    TEST_ASSERT_NULL(cJSONUtils_GetPointerCaseSensitive(item, NULL));
    TEST_ASSERT_NULL(cJSONUtils_GeneratePatches(item, NULL));
    TEST_ASSERT_NULL(cJSONUtils_GeneratePatches(NULL, item));
    TEST_ASSERT_NULL(cJSONUtils_GeneratePatchesCaseSensitive(item, NULL));
    TEST_ASSERT_NULL(cJSONUtils_GeneratePatchesCaseSensitive(NULL, item));
    cJSONUtils_AddPatchToArray(item, "path", "add", NULL);
    cJSONUtils_AddPatchToArray(item, "path", NULL, item);
    cJSONUtils_AddPatchToArray(item, NULL, "add", item);
    cJSONUtils_AddPatchToArray(NULL, "path", "add", item);
    cJSONUtils_ApplyPatches(item, NULL);
    cJSONUtils_ApplyPatches(NULL, item);
    cJSONUtils_ApplyPatchesCaseSensitive(item, NULL);
    cJSONUtils_ApplyPatchesCaseSensitive(NULL, item);
    TEST_ASSERT_NULL(cJSONUtils_MergePatch(item, NULL));
    item = cJSON_CreateString("item");
    TEST_ASSERT_NULL(cJSONUtils_MergePatchCaseSensitive(item, NULL));
    item = cJSON_CreateString("item");
    /* these calls are actually valid */
    /* cJSONUtils_MergePatch(NULL, item); */
    /* cJSONUtils_MergePatchCaseSensitive(NULL, item);*/
    /* cJSONUtils_GenerateMergePatch(item, NULL); */
    /* cJSONUtils_GenerateMergePatch(NULL, item); */
    /* cJSONUtils_GenerateMergePatchCaseSensitive(item, NULL); */
    /* cJSONUtils_GenerateMergePatchCaseSensitive(NULL, item); */

    TEST_ASSERT_NULL(cJSONUtils_FindPointerFromObjectTo(item, NULL));
    TEST_ASSERT_NULL(cJSONUtils_FindPointerFromObjectTo(NULL, item));
    cJSONUtils_SortObject(NULL);
    cJSONUtils_SortObjectCaseSensitive(NULL);

    cJSON_Delete(item);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_utils_functions_shouldnt_crash_with_null_pointers);

    return UNITY_END();
}


/* FILE: tests/cjson_add.c */
/* LAYER: UTILITY */
/* PATH: tests/cjson_add.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void * CJSON_CDECL failing_malloc(size_t size)
{
    (void)size;
    return NULL;
}

/* work around MSVC error C2322: '...' address of dllimport '...' is not static */
static void CJSON_CDECL normal_free(void *pointer)
{
    free(pointer);
}

static cJSON_Hooks failing_hooks = {
    failing_malloc,
    normal_free
};

static void cjson_add_null_should_add_null(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *null = NULL;

    cJSON_AddNullToObject(root, "null");

    TEST_ASSERT_NOT_NULL(null = cJSON_GetObjectItemCaseSensitive(root, "null"));
    TEST_ASSERT_EQUAL_INT(null->type, cJSON_NULL);

    cJSON_Delete(root);
}

static void cjson_add_null_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddNullToObject(NULL, "null"));
    TEST_ASSERT_NULL(cJSON_AddNullToObject(root, NULL));

    cJSON_Delete(root);
}

static void cjson_add_null_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddNullToObject(root, "null"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_add_true_should_add_true(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *true_item = NULL;

    cJSON_AddTrueToObject(root, "true");

    TEST_ASSERT_NOT_NULL(true_item = cJSON_GetObjectItemCaseSensitive(root, "true"));
    TEST_ASSERT_EQUAL_INT(true_item->type, cJSON_True);

    cJSON_Delete(root);
}

static void cjson_add_true_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddTrueToObject(NULL, "true"));
    TEST_ASSERT_NULL(cJSON_AddTrueToObject(root, NULL));

    cJSON_Delete(root);
}

static void cjson_add_true_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddTrueToObject(root, "true"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_create_int_array_should_fail_on_allocation_failure(void)
{
    int numbers[] = {1, 2, 3};

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_CreateIntArray(numbers, 3));

    cJSON_InitHooks(NULL);
}

static void cjson_create_float_array_should_fail_on_allocation_failure(void)
{
    float numbers[] = {1.0f, 2.0f, 3.0f};

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_CreateFloatArray(numbers, 3));

    cJSON_InitHooks(NULL);
}

static void cjson_create_double_array_should_fail_on_allocation_failure(void)
{
    double numbers[] = {1.0, 2.0, 3.0};

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_CreateDoubleArray(numbers, 3));

    cJSON_InitHooks(NULL);
}

static void cjson_create_string_array_should_fail_on_allocation_failure(void)
{
    const char* strings[] = {"1", "2", "3"};

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_CreateStringArray(strings, 3));

    cJSON_InitHooks(NULL);
}

static void cjson_add_false_should_add_false(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *false_item = NULL;

    cJSON_AddFalseToObject(root, "false");

    TEST_ASSERT_NOT_NULL(false_item = cJSON_GetObjectItemCaseSensitive(root, "false"));
    TEST_ASSERT_EQUAL_INT(false_item->type, cJSON_False);

    cJSON_Delete(root);
}

static void cjson_add_false_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddFalseToObject(NULL, "false"));
    TEST_ASSERT_NULL(cJSON_AddFalseToObject(root, NULL));

    cJSON_Delete(root);
}

static void cjson_add_false_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddFalseToObject(root, "false"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_add_bool_should_add_bool(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *true_item = NULL;
    cJSON *false_item = NULL;

    /* true */
    cJSON_AddBoolToObject(root, "true", true);
    TEST_ASSERT_NOT_NULL(true_item = cJSON_GetObjectItemCaseSensitive(root, "true"));
    TEST_ASSERT_EQUAL_INT(true_item->type, cJSON_True);

    /* false */
    cJSON_AddBoolToObject(root, "false", false);
    TEST_ASSERT_NOT_NULL(false_item = cJSON_GetObjectItemCaseSensitive(root, "false"));
    TEST_ASSERT_EQUAL_INT(false_item->type, cJSON_False);

    cJSON_Delete(root);
}

static void cjson_add_bool_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddBoolToObject(NULL, "false", false));
    TEST_ASSERT_NULL(cJSON_AddBoolToObject(root, NULL, false));

    cJSON_Delete(root);
}

static void cjson_add_bool_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddBoolToObject(root, "false", false));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_add_number_should_add_number(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *number = NULL;

    cJSON_AddNumberToObject(root, "number", 42);

    TEST_ASSERT_NOT_NULL(number = cJSON_GetObjectItemCaseSensitive(root, "number"));

    TEST_ASSERT_EQUAL_INT(number->type, cJSON_Number);
    TEST_ASSERT_EQUAL_DOUBLE(number->valuedouble, 42);
    TEST_ASSERT_EQUAL_INT(number->valueint, 42);

    cJSON_Delete(root);
}

static void cjson_add_number_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddNumberToObject(NULL, "number", 42));
    TEST_ASSERT_NULL(cJSON_AddNumberToObject(root, NULL, 42));

    cJSON_Delete(root);
}

static void cjson_add_number_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddNumberToObject(root, "number", 42));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_add_string_should_add_string(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *string = NULL;

    cJSON_AddStringToObject(root, "string", "Hello World!");

    TEST_ASSERT_NOT_NULL(string = cJSON_GetObjectItemCaseSensitive(root, "string"));
    TEST_ASSERT_EQUAL_INT(string->type, cJSON_String);
    TEST_ASSERT_EQUAL_STRING(string->valuestring, "Hello World!");

    cJSON_Delete(root);
}

static void cjson_add_string_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddStringToObject(NULL, "string", "string"));
    TEST_ASSERT_NULL(cJSON_AddStringToObject(root, NULL, "string"));

    cJSON_Delete(root);
}

static void cjson_add_string_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddStringToObject(root, "string", "string"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cjson_add_raw_should_add_raw(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *raw = NULL;

    cJSON_AddRawToObject(root, "raw", "{}");

    TEST_ASSERT_NOT_NULL(raw = cJSON_GetObjectItemCaseSensitive(root, "raw"));
    TEST_ASSERT_EQUAL_INT(raw->type, cJSON_Raw);
    TEST_ASSERT_EQUAL_STRING(raw->valuestring, "{}");

    cJSON_Delete(root);
}

static void cjson_add_raw_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddRawToObject(NULL, "raw", "{}"));
    TEST_ASSERT_NULL(cJSON_AddRawToObject(root, NULL, "{}"));

    cJSON_Delete(root);
}

static void cjson_add_raw_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddRawToObject(root, "raw", "{}"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cJSON_add_object_should_add_object(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *object = NULL;

    cJSON_AddObjectToObject(root, "object");
    TEST_ASSERT_NOT_NULL(object = cJSON_GetObjectItemCaseSensitive(root, "object"));
    TEST_ASSERT_EQUAL_INT(object->type, cJSON_Object);

    cJSON_Delete(root);
}

static void cjson_add_object_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddObjectToObject(NULL, "object"));
    TEST_ASSERT_NULL(cJSON_AddObjectToObject(root, NULL));

    cJSON_Delete(root);
}

static void cjson_add_object_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddObjectToObject(root, "object"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

static void cJSON_add_array_should_add_array(void)
{
    cJSON *root = cJSON_CreateObject();
    cJSON *array = NULL;

    cJSON_AddArrayToObject(root, "array");
    TEST_ASSERT_NOT_NULL(array = cJSON_GetObjectItemCaseSensitive(root, "array"));
    TEST_ASSERT_EQUAL_INT(array->type, cJSON_Array);

    cJSON_Delete(root);
}

static void cjson_add_array_should_fail_with_null_pointers(void)
{
    cJSON *root = cJSON_CreateObject();

    TEST_ASSERT_NULL(cJSON_AddArrayToObject(NULL, "array"));
    TEST_ASSERT_NULL(cJSON_AddArrayToObject(root, NULL));

    cJSON_Delete(root);
}

static void cjson_add_array_should_fail_on_allocation_failure(void)
{
    cJSON *root = cJSON_CreateObject();

    cJSON_InitHooks(&failing_hooks);

    TEST_ASSERT_NULL(cJSON_AddArrayToObject(root, "array"));

    cJSON_InitHooks(NULL);

    cJSON_Delete(root);
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_add_null_should_add_null);
    RUN_TEST(cjson_add_null_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_null_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_true_should_add_true);
    RUN_TEST(cjson_add_true_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_true_should_fail_on_allocation_failure);

    RUN_TEST(cjson_create_int_array_should_fail_on_allocation_failure);
    RUN_TEST(cjson_create_float_array_should_fail_on_allocation_failure);
    RUN_TEST(cjson_create_double_array_should_fail_on_allocation_failure);
    RUN_TEST(cjson_create_string_array_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_false_should_add_false);
    RUN_TEST(cjson_add_false_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_false_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_bool_should_add_bool);
    RUN_TEST(cjson_add_bool_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_bool_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_number_should_add_number);
    RUN_TEST(cjson_add_number_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_number_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_string_should_add_string);
    RUN_TEST(cjson_add_string_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_string_should_fail_on_allocation_failure);

    RUN_TEST(cjson_add_raw_should_add_raw);
    RUN_TEST(cjson_add_raw_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_raw_should_fail_on_allocation_failure);

    RUN_TEST(cJSON_add_object_should_add_object);
    RUN_TEST(cjson_add_object_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_object_should_fail_on_allocation_failure);

    RUN_TEST(cJSON_add_array_should_add_array);
    RUN_TEST(cjson_add_array_should_fail_with_null_pointers);
    RUN_TEST(cjson_add_array_should_fail_on_allocation_failure);

    return UNITY_END();
}


/* FILE: tests/print_string.c */
/* LAYER: UTILITY */
/* PATH: tests/print_string.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void assert_print_string(const char *expected, const char *input)
{
    unsigned char printed[1024];
    printbuffer buffer = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.buffer = printed;
    buffer.length = sizeof(printed);
    buffer.offset = 0;
    buffer.noalloc = true;
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE_MESSAGE(print_string_ptr((const unsigned char*)input, &buffer), "Failed to print string.");
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, printed, "The printed string isn't as expected.");
}

static void print_string_should_print_empty_strings(void)
{
    assert_print_string("\"\"", "");
    assert_print_string("\"\"", NULL);
}

static void print_string_should_print_ascii(void)
{
    char ascii[0x7F];
    size_t i = 1;

    /* create ascii table */
    for (i = 1; i < 0x7F; i++)
    {
        ascii[i-1] = (char)i;
    }
    ascii[0x7F-1] = '\0';

    assert_print_string("\"\\u0001\\u0002\\u0003\\u0004\\u0005\\u0006\\u0007\\b\\t\\n\\u000b\\f\\r\\u000e\\u000f\\u0010\\u0011\\u0012\\u0013\\u0014\\u0015\\u0016\\u0017\\u0018\\u0019\\u001a\\u001b\\u001c\\u001d\\u001e\\u001f !\\\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\"",
            ascii);
}

static void print_string_should_print_utf8(void)
{
    assert_print_string("\"ü猫慕\"", "ü猫慕");
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    UNITY_BEGIN();

    RUN_TEST(print_string_should_print_empty_strings);
    RUN_TEST(print_string_should_print_ascii);
    RUN_TEST(print_string_should_print_utf8);

    return UNITY_END();
}


/* FILE: tests/json_patch_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/json_patch_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"
#include "../cJSON_Utils.h"

static cJSON *parse_test_file(const char * const filename)
{
    char *file = NULL;
    cJSON *json = NULL;

    file = read_file(filename);
    TEST_ASSERT_NOT_NULL_MESSAGE(file, "Failed to read file.");

    json = cJSON_Parse(file);
    TEST_ASSERT_NOT_NULL_MESSAGE(json, "Failed to parse test json.");
    TEST_ASSERT_TRUE_MESSAGE(cJSON_IsArray(json), "Json is not an array.");

    free(file);

    return json;
}

static cJSON_bool test_apply_patch(const cJSON * const test)
{
    cJSON *doc = NULL;
    cJSON *patch = NULL;
    cJSON *expected = NULL;
    cJSON *error_element = NULL;
    cJSON *comment = NULL;
    cJSON *disabled = NULL;

    cJSON *object = NULL;
    cJSON_bool successful = false;

    /* extract all the data out of the test */
    comment = cJSON_GetObjectItemCaseSensitive(test, "comment");
    if (cJSON_IsString(comment))
    {
        printf("Testing \"%s\"\n", comment->valuestring);
    }
    else
    {
        printf("Testing unknown\n");
    }

    disabled = cJSON_GetObjectItemCaseSensitive(test, "disabled");
    if (cJSON_IsTrue(disabled))
    {
        printf("SKIPPED\n");
        return true;
    }

    doc = cJSON_GetObjectItemCaseSensitive(test, "doc");
    TEST_ASSERT_NOT_NULL_MESSAGE(doc, "No \"doc\" in the test.");
    patch = cJSON_GetObjectItemCaseSensitive(test, "patch");
    TEST_ASSERT_NOT_NULL_MESSAGE(patch, "No \"patch\"in the test.");
    /* Make a working copy of 'doc' */
    object = cJSON_Duplicate(doc, true);
    TEST_ASSERT_NOT_NULL(object);

    expected = cJSON_GetObjectItemCaseSensitive(test, "expected");
    error_element = cJSON_GetObjectItemCaseSensitive(test, "error");
    if (error_element != NULL)
    {
        /* excepting an error */
        TEST_ASSERT_TRUE_MESSAGE(0 != cJSONUtils_ApplyPatchesCaseSensitive(object, patch), "Test didn't fail as it's supposed to.");

        successful = true;
    }
    else
    {
        /* apply the patch */
        TEST_ASSERT_EQUAL_INT_MESSAGE(0, cJSONUtils_ApplyPatchesCaseSensitive(object, patch), "Failed to apply patches.");
        successful = true;

        if (expected != NULL)
        {
            successful = cJSON_Compare(object, expected, true);
        }
    }

    cJSON_Delete(object);

    if (successful)
    {
        printf("OK\n");
    }
    else
    {
        printf("FAILED\n");
    }

    return successful;
}

static cJSON_bool test_generate_test(cJSON *test)
{
    cJSON *doc = NULL;
    cJSON *patch = NULL;
    cJSON *expected = NULL;
    cJSON *disabled = NULL;

    cJSON *object = NULL;
    cJSON_bool successful = false;

    char *printed_patch = NULL;

    disabled = cJSON_GetObjectItemCaseSensitive(test, "disabled");
    if (cJSON_IsTrue(disabled))
    {
        printf("SKIPPED\n");
        return true;
    }

    doc = cJSON_GetObjectItemCaseSensitive(test, "doc");
    TEST_ASSERT_NOT_NULL_MESSAGE(doc, "No \"doc\" in the test.");

    /* Make a working copy of 'doc' */
    object = cJSON_Duplicate(doc, true);
    TEST_ASSERT_NOT_NULL(object);

    expected = cJSON_GetObjectItemCaseSensitive(test, "expected");
    if (expected == NULL)
    {
        cJSON_Delete(object);
        /* if there is no expected output, this test doesn't make sense */
        return true;
    }

    patch = cJSONUtils_GeneratePatchesCaseSensitive(doc, expected);
    TEST_ASSERT_NOT_NULL_MESSAGE(patch, "Failed to generate patches.");

    printed_patch = cJSON_Print(patch);
    printf("%s\n", printed_patch);
    free(printed_patch);

    /* apply the generated patch */
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, cJSONUtils_ApplyPatchesCaseSensitive(object, patch), "Failed to apply generated patch.");

    successful = cJSON_Compare(object, expected, true);

    cJSON_Delete(patch);
    cJSON_Delete(object);

    if (successful)
    {
        printf("generated patch: OK\n");
    }
    else
    {
        printf("generated patch: FAILED\n");
    }

    return successful;
}

static void cjson_utils_should_pass_json_patch_test_tests(void)
{
    cJSON *tests = parse_test_file("json-patch-tests/tests.json");
    cJSON *test = NULL;

    cJSON_bool failed = false;
    cJSON_ArrayForEach(test, tests)
    {
        failed |= !test_apply_patch(test);
        failed |= !test_generate_test(test);
    }

    cJSON_Delete(tests);

    TEST_ASSERT_FALSE_MESSAGE(failed, "Some tests failed.");
}

static void cjson_utils_should_pass_json_patch_test_spec_tests(void)
{
    cJSON *tests = parse_test_file("json-patch-tests/spec_tests.json");
    cJSON *test = NULL;

    cJSON_bool failed = false;
    cJSON_ArrayForEach(test, tests)
    {
        failed |= !test_apply_patch(test);
        failed |= !test_generate_test(test);
    }

    cJSON_Delete(tests);

    TEST_ASSERT_FALSE_MESSAGE(failed, "Some tests failed.");
}

static void cjson_utils_should_pass_json_patch_test_cjson_utils_tests(void)
{
    cJSON *tests = parse_test_file("json-patch-tests/cjson-utils-tests.json");
    cJSON *test = NULL;

    cJSON_bool failed = false;
    cJSON_ArrayForEach(test, tests)
    {
        failed |= !test_apply_patch(test);
        failed |= !test_generate_test(test);
    }

    cJSON_Delete(tests);

    TEST_ASSERT_FALSE_MESSAGE(failed, "Some tests failed.");
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_utils_should_pass_json_patch_test_tests);
    RUN_TEST(cjson_utils_should_pass_json_patch_test_spec_tests);
    RUN_TEST(cjson_utils_should_pass_json_patch_test_cjson_utils_tests);

    return UNITY_END();
}


/* FILE: tests/compare_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/compare_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON_bool compare_from_string(const char * const a, const char * const b, const cJSON_bool case_sensitive)
{
    cJSON *a_json = NULL;
    cJSON *b_json = NULL;
    cJSON_bool result = false;

    a_json = cJSON_Parse(a);
    TEST_ASSERT_NOT_NULL_MESSAGE(a_json, "Failed to parse a.");
    b_json = cJSON_Parse(b);
    TEST_ASSERT_NOT_NULL_MESSAGE(b_json, "Failed to parse b.");

    result = cJSON_Compare(a_json, b_json, case_sensitive);

    cJSON_Delete(a_json);
    cJSON_Delete(b_json);

    return result;
}

static void cjson_compare_should_compare_null_pointer_as_not_equal(void)
{
    TEST_ASSERT_FALSE(cJSON_Compare(NULL, NULL, true));
    TEST_ASSERT_FALSE(cJSON_Compare(NULL, NULL, false));
}

static void cjson_compare_should_compare_invalid_as_not_equal(void)
{
    cJSON invalid[1];
    memset(invalid, '\0', sizeof(invalid));

    TEST_ASSERT_FALSE(cJSON_Compare(invalid, invalid, false));
    TEST_ASSERT_FALSE(cJSON_Compare(invalid, invalid, true));
}

static void cjson_compare_should_compare_numbers(void)
{
    TEST_ASSERT_TRUE(compare_from_string("1", "1", true));
    TEST_ASSERT_TRUE(compare_from_string("1", "1", false));
    TEST_ASSERT_TRUE(compare_from_string("0.0001", "0.0001", true));
    TEST_ASSERT_TRUE(compare_from_string("0.0001", "0.0001", false));
    TEST_ASSERT_TRUE(compare_from_string("1E100", "10E99", false));

    TEST_ASSERT_FALSE(compare_from_string("0.5E-100", "0.5E-101", false));

    TEST_ASSERT_FALSE(compare_from_string("1", "2", true));
    TEST_ASSERT_FALSE(compare_from_string("1", "2", false));
}

static void cjson_compare_should_compare_booleans(void)
{
    /* true */
    TEST_ASSERT_TRUE(compare_from_string("true", "true", true));
    TEST_ASSERT_TRUE(compare_from_string("true", "true", false));

    /* false */
    TEST_ASSERT_TRUE(compare_from_string("false", "false", true));
    TEST_ASSERT_TRUE(compare_from_string("false", "false", false));

    /* mixed */
    TEST_ASSERT_FALSE(compare_from_string("true", "false", true));
    TEST_ASSERT_FALSE(compare_from_string("true", "false", false));
    TEST_ASSERT_FALSE(compare_from_string("false", "true", true));
    TEST_ASSERT_FALSE(compare_from_string("false", "true", false));
}

static void cjson_compare_should_compare_null(void)
{
    TEST_ASSERT_TRUE(compare_from_string("null", "null", true));
    TEST_ASSERT_TRUE(compare_from_string("null", "null", false));

    TEST_ASSERT_FALSE(compare_from_string("null", "true", true));
    TEST_ASSERT_FALSE(compare_from_string("null", "true", false));
}

static void cjson_compare_should_not_accept_invalid_types(void)
{
    cJSON invalid[1];
    memset(invalid, '\0', sizeof(invalid));

    invalid->type = cJSON_Number | cJSON_String;

    TEST_ASSERT_FALSE(cJSON_Compare(invalid, invalid, true));
    TEST_ASSERT_FALSE(cJSON_Compare(invalid, invalid, false));
}

static void cjson_compare_should_compare_strings(void)
{
    TEST_ASSERT_TRUE(compare_from_string("\"abcdefg\"", "\"abcdefg\"", true));
    TEST_ASSERT_TRUE(compare_from_string("\"abcdefg\"", "\"abcdefg\"", false));

    TEST_ASSERT_FALSE(compare_from_string("\"ABCDEFG\"", "\"abcdefg\"", true));
    TEST_ASSERT_FALSE(compare_from_string("\"ABCDEFG\"", "\"abcdefg\"", false));
}

static void cjson_compare_should_compare_raw(void)
{
    cJSON *raw1 = NULL;
    cJSON *raw2 = NULL;

    raw1 = cJSON_Parse("\"[true, false]\"");
    TEST_ASSERT_NOT_NULL(raw1);
    raw2 = cJSON_Parse("\"[true, false]\"");
    TEST_ASSERT_NOT_NULL(raw2);

    raw1->type = cJSON_Raw;
    raw2->type = cJSON_Raw;

    TEST_ASSERT_TRUE(cJSON_Compare(raw1, raw2, true));
    TEST_ASSERT_TRUE(cJSON_Compare(raw1, raw2, false));

    cJSON_Delete(raw1);
    cJSON_Delete(raw2);
}

static void cjson_compare_should_compare_arrays(void)
{
    TEST_ASSERT_TRUE(compare_from_string("[]", "[]", true));
    TEST_ASSERT_TRUE(compare_from_string("[]", "[]", false));

    TEST_ASSERT_TRUE(compare_from_string("[false,true,null,42,\"string\",[],{}]", "[false, true, null, 42, \"string\", [], {}]", true));
    TEST_ASSERT_TRUE(compare_from_string("[false,true,null,42,\"string\",[],{}]", "[false, true, null, 42, \"string\", [], {}]", false));

    TEST_ASSERT_TRUE(compare_from_string("[[[1], 2]]", "[[[1], 2]]", true));
    TEST_ASSERT_TRUE(compare_from_string("[[[1], 2]]", "[[[1], 2]]", false));

    TEST_ASSERT_FALSE(compare_from_string("[true,null,42,\"string\",[],{}]", "[false, true, null, 42, \"string\", [], {}]", true));
    TEST_ASSERT_FALSE(compare_from_string("[true,null,42,\"string\",[],{}]", "[false, true, null, 42, \"string\", [], {}]", false));

    /* Arrays that are a prefix of another array */
    TEST_ASSERT_FALSE(compare_from_string("[1,2,3]", "[1,2]", true));
    TEST_ASSERT_FALSE(compare_from_string("[1,2,3]", "[1,2]", false));
}

static void cjson_compare_should_compare_objects(void)
{
    TEST_ASSERT_TRUE(compare_from_string("{}", "{}", true));
    TEST_ASSERT_TRUE(compare_from_string("{}", "{}", false));

    TEST_ASSERT_TRUE(compare_from_string(
                "{\"false\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                "{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                true));
    TEST_ASSERT_FALSE(compare_from_string(
                "{\"False\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                "{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                true));
    TEST_ASSERT_TRUE(compare_from_string(
                "{\"False\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                "{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                false));
    TEST_ASSERT_FALSE(compare_from_string(
                "{\"Flse\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                "{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}",
                false));
    /* test objects that are a subset of each other */
    TEST_ASSERT_FALSE(compare_from_string(
                "{\"one\": 1, \"two\": 2}",
                "{\"one\": 1, \"two\": 2, \"three\": 3}",
                true))
    TEST_ASSERT_FALSE(compare_from_string(
                "{\"one\": 1, \"two\": 2}",
                "{\"one\": 1, \"two\": 2, \"three\": 3}",
                false))
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_compare_should_compare_null_pointer_as_not_equal);
    RUN_TEST(cjson_compare_should_compare_invalid_as_not_equal);
    RUN_TEST(cjson_compare_should_compare_numbers);
    RUN_TEST(cjson_compare_should_compare_booleans);
    RUN_TEST(cjson_compare_should_compare_null);
    RUN_TEST(cjson_compare_should_not_accept_invalid_types);
    RUN_TEST(cjson_compare_should_compare_strings);
    RUN_TEST(cjson_compare_should_compare_raw);
    RUN_TEST(cjson_compare_should_compare_arrays);
    RUN_TEST(cjson_compare_should_compare_objects);

    return UNITY_END();
}


/* FILE: tests/readme_examples.c */
/* LAYER: UTILITY */
/* PATH: tests/readme_examples.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static const char *json = "{\n\
\t\"name\":\t\"Awesome 4K\",\n\
\t\"resolutions\":\t[{\n\
\t\t\t\"width\":\t1280,\n\
\t\t\t\"height\":\t720\n\
\t\t}, {\n\
\t\t\t\"width\":\t1920,\n\
\t\t\t\"height\":\t1080\n\
\t\t}, {\n\
\t\t\t\"width\":\t3840,\n\
\t\t\t\"height\":\t2160\n\
\t\t}]\n\
}";

static char* create_monitor(void)
{
    const unsigned int resolution_numbers[3][2] = {
        {1280, 720},
        {1920, 1080},
        {3840, 2160}
    };
    char *string = NULL;
    cJSON *name = NULL;
    cJSON *resolutions = NULL;
    cJSON *resolution = NULL;
    cJSON *width = NULL;
    cJSON *height = NULL;
    size_t index = 0;

    cJSON *monitor = cJSON_CreateObject();
    if (monitor == NULL)
    {
        goto end;
    }

    name = cJSON_CreateString("Awesome 4K");
    if (name == NULL)
    {
        goto end;
    }
    /* after creation was successful, immediately add it to the monitor,
     * thereby transferring ownership of the pointer to it */
    cJSON_AddItemToObject(monitor, "name", name);

    resolutions = cJSON_CreateArray();
    if (resolutions == NULL)
    {
        goto end;
    }
    cJSON_AddItemToObject(monitor, "resolutions", resolutions);

    for (index = 0; index < (sizeof(resolution_numbers) / (2 * sizeof(int))); ++index)
    {
        resolution = cJSON_CreateObject();
        if (resolution == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(resolutions, resolution);

        width = cJSON_CreateNumber(resolution_numbers[index][0]);
        if (width == NULL)
        {
            goto end;
        }
        cJSON_AddItemToObject(resolution, "width", width);

        height = cJSON_CreateNumber(resolution_numbers[index][1]);
        if (height == NULL)
        {
            goto end;
        }
        cJSON_AddItemToObject(resolution, "height", height);
    }

    string = cJSON_Print(monitor);
    if (string == NULL)
    {
        fprintf(stderr, "Failed to print monitor.\n");
    }

end:
    cJSON_Delete(monitor);
    return string;
}

static char *create_monitor_with_helpers(void)
{
    const unsigned int resolution_numbers[3][2] = {
        {1280, 720},
        {1920, 1080},
        {3840, 2160}
    };
    char *string = NULL;
    cJSON *resolutions = NULL;
    size_t index = 0;

    cJSON *monitor = cJSON_CreateObject();

    if (cJSON_AddStringToObject(monitor, "name", "Awesome 4K") == NULL)
    {
        goto end;
    }

    resolutions = cJSON_AddArrayToObject(monitor, "resolutions");
    if (resolutions == NULL)
    {
        goto end;
    }

    for (index = 0; index < (sizeof(resolution_numbers) / (2 * sizeof(int))); ++index)
    {
        cJSON *resolution = cJSON_CreateObject();

        if (cJSON_AddNumberToObject(resolution, "width", resolution_numbers[index][0]) == NULL)
        {
            goto end;
        }

        if(cJSON_AddNumberToObject(resolution, "height", resolution_numbers[index][1]) == NULL)
        {
            goto end;
        }

        cJSON_AddItemToArray(resolutions, resolution);
    }

    string = cJSON_Print(monitor);
    if (string == NULL) {
        fprintf(stderr, "Failed to print monitor.\n");
    }

end:
    cJSON_Delete(monitor);
    return string;
}

/* return 1 if the monitor supports full hd, 0 otherwise */
static int supports_full_hd(const char * const monitor)
{
    const cJSON *resolution = NULL;
    const cJSON *resolutions = NULL;
    const cJSON *name = NULL;
    int status = 0;
    cJSON *monitor_json = cJSON_Parse(monitor);
    if (monitor_json == NULL)
    {
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL)
        {
            fprintf(stderr, "Error before: %s\n", error_ptr);
        }
        status = 0;
        goto end;
    }

    name = cJSON_GetObjectItemCaseSensitive(monitor_json, "name");
    if (cJSON_IsString(name) && (name->valuestring != NULL))
    {
        printf("Checking monitor \"%s\"\n", name->valuestring);
    }

    resolutions = cJSON_GetObjectItemCaseSensitive(monitor_json, "resolutions");
    cJSON_ArrayForEach(resolution, resolutions)
    {
        cJSON *width = cJSON_GetObjectItemCaseSensitive(resolution, "width");
        cJSON *height = cJSON_GetObjectItemCaseSensitive(resolution, "height");

        if (!cJSON_IsNumber(width) || !cJSON_IsNumber(height))
        {
            status = 0;
            goto end;
        }

        if (compare_double(width->valuedouble, 1920) && compare_double(height->valuedouble, 1080))
        {
            status = 1;
            goto end;
        }
    }

end:
    cJSON_Delete(monitor_json);
    return status;
}

static void create_monitor_should_create_a_monitor(void)
{
    char *monitor = create_monitor();

    TEST_ASSERT_EQUAL_STRING(monitor, json);

    free(monitor);
}

static void create_monitor_with_helpers_should_create_a_monitor(void)
{
    char *monitor = create_monitor_with_helpers();

    TEST_ASSERT_EQUAL_STRING(json, monitor);

    free(monitor);
}

static void supports_full_hd_should_check_for_full_hd_support(void)
{
    static const char *monitor_without_hd = "{\n\
\t\t\"name\": \"lame monitor\",\n\
\t\t\"resolutions\":\t[{\n\
\t\t\t\"width\":\t640,\n\
\t\t\t\"height\":\t480\n\
\t\t}]\n\
}";

    TEST_ASSERT(supports_full_hd(json));
    TEST_ASSERT_FALSE(supports_full_hd(monitor_without_hd));
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(create_monitor_should_create_a_monitor);
    RUN_TEST(create_monitor_with_helpers_should_create_a_monitor);
    RUN_TEST(supports_full_hd_should_check_for_full_hd_support);

    return UNITY_END();
}


/* FILE: tests/misc_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/misc_tests.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void cjson_array_foreach_should_loop_over_arrays(void)
{
    cJSON array[1];
    cJSON elements[10];
    cJSON *element_pointer = NULL;
    size_t i = 0;

    memset(array, 0, sizeof(array));
    memset(elements, 0, sizeof(elements));

    /* create array */
    array[0].child = &elements[0];
    elements[0].prev = NULL;
    elements[9].next = NULL;
    for (i = 0; i < 9; i++)
    {
        elements[i].next = &elements[i + 1];
        elements[i + 1].prev = &elements[i];
    }

    i = 0;
    cJSON_ArrayForEach(element_pointer, array)
    {
        TEST_ASSERT_TRUE_MESSAGE(element_pointer == &elements[i], "Not iterating over array properly");
        i++;
    }
}

static void cjson_array_foreach_should_not_dereference_null_pointer(void)
{
    cJSON *array = NULL;
    cJSON *element = NULL;
    cJSON_ArrayForEach(element, array);
}

static void cjson_get_object_item_should_get_object_items(void)
{
    cJSON *item = NULL;
    cJSON *found = NULL;

    item = cJSON_Parse("{\"one\":1, \"Two\":2, \"tHree\":3}");

    found = cJSON_GetObjectItem(NULL, "test");
    TEST_ASSERT_NULL_MESSAGE(found, "Failed to fail on NULL pointer.");

    found = cJSON_GetObjectItem(item, NULL);
    TEST_ASSERT_NULL_MESSAGE(found, "Failed to fail on NULL string.");

    found = cJSON_GetObjectItem(item, "one");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find first item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 1);

    found = cJSON_GetObjectItem(item, "tWo");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find first item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 2);

    found = cJSON_GetObjectItem(item, "three");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 3);

    found = cJSON_GetObjectItem(item, "four");
    TEST_ASSERT_NULL_MESSAGE(found, "Should not find something that isn't there.");

    cJSON_Delete(item);
}

static void cjson_get_object_item_case_sensitive_should_get_object_items(void)
{
    cJSON *item = NULL;
    cJSON *found = NULL;

    item = cJSON_Parse("{\"one\":1, \"Two\":2, \"tHree\":3}");

    found = cJSON_GetObjectItemCaseSensitive(NULL, "test");
    TEST_ASSERT_NULL_MESSAGE(found, "Failed to fail on NULL pointer.");

    found = cJSON_GetObjectItemCaseSensitive(item, NULL);
    TEST_ASSERT_NULL_MESSAGE(found, "Failed to fail on NULL string.");

    found = cJSON_GetObjectItemCaseSensitive(item, "one");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find first item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 1);

    found = cJSON_GetObjectItemCaseSensitive(item, "Two");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find first item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 2);

    found = cJSON_GetObjectItemCaseSensitive(item, "tHree");
    TEST_ASSERT_NOT_NULL_MESSAGE(found, "Failed to find item.");
    TEST_ASSERT_EQUAL_DOUBLE(found->valuedouble, 3);

    found = cJSON_GetObjectItemCaseSensitive(item, "One");
    TEST_ASSERT_NULL_MESSAGE(found, "Should not find something that isn't there.");

    cJSON_Delete(item);
}

static void cjson_get_object_item_should_not_crash_with_array(void)
{
    cJSON *array = NULL;
    cJSON *found = NULL;
    array = cJSON_Parse("[1]");

    found = cJSON_GetObjectItem(array, "name");
    TEST_ASSERT_NULL(found);

    cJSON_Delete(array);
}

static void cjson_get_object_item_case_sensitive_should_not_crash_with_array(void)
{
    cJSON *array = NULL;
    cJSON *found = NULL;
    array = cJSON_Parse("[1]");

    found = cJSON_GetObjectItemCaseSensitive(array, "name");
    TEST_ASSERT_NULL(found);

    cJSON_Delete(array);
}

static void typecheck_functions_should_check_type(void)
{
    cJSON invalid[1];
    cJSON item[1];
    invalid->type = cJSON_Invalid;
    invalid->type |= cJSON_StringIsConst;
    item->type = cJSON_False;
    item->type |= cJSON_StringIsConst;

    TEST_ASSERT_FALSE(cJSON_IsInvalid(NULL));
    TEST_ASSERT_FALSE(cJSON_IsInvalid(item));
    TEST_ASSERT_TRUE(cJSON_IsInvalid(invalid));

    item->type = cJSON_False | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsFalse(NULL));
    TEST_ASSERT_FALSE(cJSON_IsFalse(invalid));
    TEST_ASSERT_TRUE(cJSON_IsFalse(item));
    TEST_ASSERT_TRUE(cJSON_IsBool(item));

    item->type = cJSON_True | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsTrue(NULL));
    TEST_ASSERT_FALSE(cJSON_IsTrue(invalid));
    TEST_ASSERT_TRUE(cJSON_IsTrue(item));
    TEST_ASSERT_TRUE(cJSON_IsBool(item));

    item->type = cJSON_NULL | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsNull(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNull(invalid));
    TEST_ASSERT_TRUE(cJSON_IsNull(item));

    item->type = cJSON_Number | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsNumber(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNumber(invalid));
    TEST_ASSERT_TRUE(cJSON_IsNumber(item));

    item->type = cJSON_String | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsString(NULL));
    TEST_ASSERT_FALSE(cJSON_IsString(invalid));
    TEST_ASSERT_TRUE(cJSON_IsString(item));

    item->type = cJSON_Array | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsArray(NULL));
    TEST_ASSERT_FALSE(cJSON_IsArray(invalid));
    TEST_ASSERT_TRUE(cJSON_IsArray(item));

    item->type = cJSON_Object | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsObject(NULL));
    TEST_ASSERT_FALSE(cJSON_IsObject(invalid));
    TEST_ASSERT_TRUE(cJSON_IsObject(item));

    item->type = cJSON_Raw | cJSON_StringIsConst;
    TEST_ASSERT_FALSE(cJSON_IsRaw(NULL));
    TEST_ASSERT_FALSE(cJSON_IsRaw(invalid));
    TEST_ASSERT_TRUE(cJSON_IsRaw(item));
}

static void cjson_should_not_parse_to_deeply_nested_jsons(void)
{
    char deep_json[CJSON_NESTING_LIMIT + 1];
    size_t position = 0;

    for (position = 0; position < sizeof(deep_json); position++)
    {
        deep_json[position] = '[';
    }
    deep_json[sizeof(deep_json) - 1] = '\0';

    TEST_ASSERT_NULL_MESSAGE(cJSON_Parse(deep_json), "To deep JSONs should not be parsed.");
}

static void cjson_should_not_follow_too_deep_circular_references(void)
{
    cJSON *o = cJSON_CreateArray();
    cJSON *a = cJSON_CreateArray();
    cJSON *b = cJSON_CreateArray();
    cJSON *x;

    cJSON_AddItemToArray(o, a);
    cJSON_AddItemToArray(a, b);
    cJSON_AddItemToArray(b, o);

    x = cJSON_Duplicate(o, 1);
    TEST_ASSERT_NULL(x);
    cJSON_DetachItemFromArray(b, 0);
    cJSON_Delete(o);
}

static void cjson_set_number_value_should_set_numbers(void)
{
    cJSON number[1] = {{NULL, NULL, NULL, cJSON_Number, NULL, 0, 0, NULL}};

    cJSON_SetNumberValue(number, 1.5);
    TEST_ASSERT_EQUAL(1, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(1.5, number->valuedouble);

    cJSON_SetNumberValue(number, -1.5);
    TEST_ASSERT_EQUAL(-1, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(-1.5, number->valuedouble);

    cJSON_SetNumberValue(number, 1 + (double)INT_MAX);
    TEST_ASSERT_EQUAL(INT_MAX, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(1 + (double)INT_MAX, number->valuedouble);

    cJSON_SetNumberValue(number, -1 + (double)INT_MIN);
    TEST_ASSERT_EQUAL(INT_MIN, number->valueint);
    TEST_ASSERT_EQUAL_DOUBLE(-1 + (double)INT_MIN, number->valuedouble);
}

static void cjson_detach_item_via_pointer_should_detach_items(void)
{
    cJSON list[4];
    cJSON parent[1];

    memset(list, '\0', sizeof(list));

    /* link the list */
    list[0].next = &(list[1]);
    list[1].next = &(list[2]);
    list[2].next = &(list[3]);

    list[3].prev = &(list[2]);
    list[2].prev = &(list[1]);
    list[1].prev = &(list[0]);
    list[0].prev = &(list[3]);

    parent->child = &list[0];

    /* detach in the middle (list[1]) */
    TEST_ASSERT_TRUE_MESSAGE(cJSON_DetachItemViaPointer(parent, &(list[1])) == &(list[1]), "Failed to detach in the middle.");
    TEST_ASSERT_TRUE_MESSAGE((list[1].prev == NULL) && (list[1].next == NULL), "Didn't set pointers of detached item to NULL.");
    TEST_ASSERT_TRUE((list[0].next == &(list[2])) && (list[2].prev == &(list[0])));

    /* detach beginning (list[0]) */
    TEST_ASSERT_TRUE_MESSAGE(cJSON_DetachItemViaPointer(parent, &(list[0])) == &(list[0]), "Failed to detach beginning.");
    TEST_ASSERT_TRUE_MESSAGE((list[0].prev == NULL) && (list[0].next == NULL), "Didn't set pointers of detached item to NULL.");
    TEST_ASSERT_TRUE_MESSAGE((list[2].prev == &(list[3])) && (parent->child == &(list[2])), "Didn't set the new beginning.");

    /* detach end (list[3])*/
    TEST_ASSERT_TRUE_MESSAGE(cJSON_DetachItemViaPointer(parent, &(list[3])) == &(list[3]), "Failed to detach end.");
    TEST_ASSERT_TRUE_MESSAGE((list[3].prev == NULL) && (list[3].next == NULL), "Didn't set pointers of detached item to NULL.");
    TEST_ASSERT_TRUE_MESSAGE((list[2].next == NULL) && (parent->child == &(list[2])), "Didn't set the new end");

    /* detach single item (list[2]) */
    TEST_ASSERT_TRUE_MESSAGE(cJSON_DetachItemViaPointer(parent, &list[2]) == &list[2], "Failed to detach single item.");
    TEST_ASSERT_TRUE_MESSAGE((list[2].prev == NULL) && (list[2].next == NULL), "Didn't set pointers of detached item to NULL.");
    TEST_ASSERT_NULL_MESSAGE(parent->child, "Child of the parent wasn't set to NULL.");
}

static void cjson_detach_item_via_pointer_should_return_null_if_item_prev_is_null(void)
{
    cJSON list[2];
    cJSON parent[1];

    memset(list, '\0', sizeof(list));

    /* link the list */
    list[0].next = &(list[1]);

    parent->child = &list[0];
    TEST_ASSERT_NULL_MESSAGE(cJSON_DetachItemViaPointer(parent, &(list[1])), "Failed to detach in the middle.");
    TEST_ASSERT_TRUE_MESSAGE(cJSON_DetachItemViaPointer(parent, &(list[0])) == &(list[0]), "Failed to detach in the middle.");
}

static void cjson_replace_item_via_pointer_should_replace_items(void)
{
    cJSON replacements[3];
    cJSON *beginning = NULL;
    cJSON *middle = NULL;
    cJSON *end = NULL;
    cJSON *array = NULL;

    beginning = cJSON_CreateNull();
    TEST_ASSERT_NOT_NULL(beginning);
    middle = cJSON_CreateNull();
    TEST_ASSERT_NOT_NULL(middle);
    end = cJSON_CreateNull();
    TEST_ASSERT_NOT_NULL(end);

    array = cJSON_CreateArray();
    TEST_ASSERT_NOT_NULL(array);

    cJSON_AddItemToArray(array, beginning);
    cJSON_AddItemToArray(array, middle);
    cJSON_AddItemToArray(array, end);

    memset(replacements, '\0', sizeof(replacements));

    /* replace beginning */
    TEST_ASSERT_TRUE(cJSON_ReplaceItemViaPointer(array, beginning, &(replacements[0])));
    TEST_ASSERT_TRUE(replacements[0].prev == end);
    TEST_ASSERT_TRUE(replacements[0].next == middle);
    TEST_ASSERT_TRUE(middle->prev == &(replacements[0]));
    TEST_ASSERT_TRUE(array->child == &(replacements[0]));

    /* replace middle */
    TEST_ASSERT_TRUE(cJSON_ReplaceItemViaPointer(array, middle, &(replacements[1])));
    TEST_ASSERT_TRUE(replacements[1].prev == &(replacements[0]));
    TEST_ASSERT_TRUE(replacements[1].next == end);
    TEST_ASSERT_TRUE(end->prev == &(replacements[1]));

    /* replace end */
    TEST_ASSERT_TRUE(cJSON_ReplaceItemViaPointer(array, end, &(replacements[2])));
    TEST_ASSERT_TRUE(replacements[2].prev == &(replacements[1]));
    TEST_ASSERT_NULL(replacements[2].next);
    TEST_ASSERT_TRUE(replacements[1].next == &(replacements[2]));

    cJSON_free(array);
}

static void cjson_replace_item_in_object_should_preserve_name(void)
{
    cJSON root[1] = {{NULL, NULL, NULL, 0, NULL, 0, 0, NULL}};
    cJSON *child = NULL;
    cJSON *replacement = NULL;
    cJSON_bool flag = false;

    child = cJSON_CreateNumber(1);
    TEST_ASSERT_NOT_NULL(child);
    replacement = cJSON_CreateNumber(2);
    TEST_ASSERT_NOT_NULL(replacement);

    flag = cJSON_AddItemToObject(root, "child", child);
    TEST_ASSERT_TRUE_MESSAGE(flag, "add item to object failed");
    cJSON_ReplaceItemInObject(root, "child", replacement);

    TEST_ASSERT_TRUE(root->child == replacement);
    TEST_ASSERT_EQUAL_STRING("child", replacement->string);

    cJSON_Delete(replacement);
}

static void cjson_functions_should_not_crash_with_null_pointers(void)
{
    char buffer[10];
    cJSON *item = cJSON_CreateString("item");
    cJSON *array = cJSON_CreateArray();
    cJSON *item1 = cJSON_CreateString("item1");
    cJSON *item2 = cJSON_CreateString("corrupted array item3");
    cJSON *corruptedString = cJSON_CreateString("corrupted");
    struct cJSON *originalPrev;

    add_item_to_array(array, item1);
    add_item_to_array(array, item2);

    originalPrev = item2->prev;
    item2->prev = NULL;
    free(corruptedString->valuestring);
    corruptedString->valuestring = NULL;

    cJSON_InitHooks(NULL);
    TEST_ASSERT_NULL(cJSON_Parse(NULL));
    TEST_ASSERT_NULL(cJSON_ParseWithOpts(NULL, NULL, true));
    TEST_ASSERT_NULL(cJSON_Print(NULL));
    TEST_ASSERT_NULL(cJSON_PrintUnformatted(NULL));
    TEST_ASSERT_NULL(cJSON_PrintBuffered(NULL, 10, true));
    TEST_ASSERT_FALSE(cJSON_PrintPreallocated(NULL, buffer, sizeof(buffer), true));
    TEST_ASSERT_FALSE(cJSON_PrintPreallocated(item, NULL, 1, true));
    cJSON_Delete(NULL);
    cJSON_GetArraySize(NULL);
    TEST_ASSERT_NULL(cJSON_GetArrayItem(NULL, 0));
    TEST_ASSERT_NULL(cJSON_GetObjectItem(NULL, "item"));
    TEST_ASSERT_NULL(cJSON_GetObjectItem(item, NULL));
    TEST_ASSERT_NULL(cJSON_GetObjectItemCaseSensitive(NULL, "item"));
    TEST_ASSERT_NULL(cJSON_GetObjectItemCaseSensitive(item, NULL));
    TEST_ASSERT_FALSE(cJSON_HasObjectItem(NULL, "item"));
    TEST_ASSERT_FALSE(cJSON_HasObjectItem(item, NULL));
    TEST_ASSERT_FALSE(cJSON_IsInvalid(NULL));
    TEST_ASSERT_FALSE(cJSON_IsFalse(NULL));
    TEST_ASSERT_FALSE(cJSON_IsTrue(NULL));
    TEST_ASSERT_FALSE(cJSON_IsBool(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNull(NULL));
    TEST_ASSERT_FALSE(cJSON_IsNumber(NULL));
    TEST_ASSERT_FALSE(cJSON_IsString(NULL));
    TEST_ASSERT_FALSE(cJSON_IsArray(NULL));
    TEST_ASSERT_FALSE(cJSON_IsObject(NULL));
    TEST_ASSERT_FALSE(cJSON_IsRaw(NULL));
    TEST_ASSERT_NULL(cJSON_CreateString(NULL));
    TEST_ASSERT_NULL(cJSON_CreateRaw(NULL));
    TEST_ASSERT_NULL(cJSON_CreateIntArray(NULL, 10));
    TEST_ASSERT_NULL(cJSON_CreateFloatArray(NULL, 10));
    TEST_ASSERT_NULL(cJSON_CreateDoubleArray(NULL, 10));
    TEST_ASSERT_NULL(cJSON_CreateStringArray(NULL, 10));
    cJSON_AddItemToArray(NULL, item);
    cJSON_AddItemToArray(item, NULL);
    cJSON_AddItemToObject(item, "item", NULL);
    cJSON_AddItemToObject(item, NULL, item);
    cJSON_AddItemToObject(NULL, "item", item);
    cJSON_AddItemToObjectCS(item, "item", NULL);
    cJSON_AddItemToObjectCS(item, NULL, item);
    cJSON_AddItemToObjectCS(NULL, "item", item);
    cJSON_AddItemReferenceToArray(NULL, item);
    cJSON_AddItemReferenceToArray(item, NULL);
    cJSON_AddItemReferenceToObject(item, "item", NULL);
    cJSON_AddItemReferenceToObject(item, NULL, item);
    cJSON_AddItemReferenceToObject(NULL, "item", item);
    TEST_ASSERT_NULL(cJSON_DetachItemViaPointer(NULL, item));
    TEST_ASSERT_NULL(cJSON_DetachItemViaPointer(item, NULL));
    TEST_ASSERT_NULL(cJSON_DetachItemFromArray(NULL, 0));
    cJSON_DeleteItemFromArray(NULL, 0);
    TEST_ASSERT_NULL(cJSON_DetachItemFromObject(NULL, "item"));
    TEST_ASSERT_NULL(cJSON_DetachItemFromObject(item, NULL));
    TEST_ASSERT_NULL(cJSON_DetachItemFromObjectCaseSensitive(NULL, "item"));
    TEST_ASSERT_NULL(cJSON_DetachItemFromObjectCaseSensitive(item, NULL));
    cJSON_DeleteItemFromObject(NULL, "item");
    cJSON_DeleteItemFromObject(item, NULL);
    cJSON_DeleteItemFromObjectCaseSensitive(NULL, "item");
    cJSON_DeleteItemFromObjectCaseSensitive(item, NULL);
    TEST_ASSERT_FALSE(cJSON_InsertItemInArray(array, 0, NULL));
    TEST_ASSERT_FALSE(cJSON_InsertItemInArray(array, 1, item));
    TEST_ASSERT_FALSE(cJSON_InsertItemInArray(NULL, 0, item));
    TEST_ASSERT_FALSE(cJSON_InsertItemInArray(item, 0, NULL));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemViaPointer(NULL, item, item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemViaPointer(item, NULL, item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemViaPointer(item, item, NULL));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInArray(item, 0, NULL));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInArray(NULL, 0, item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObject(NULL, "item", item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObject(item, NULL, item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObject(item, "item", NULL));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObjectCaseSensitive(NULL, "item", item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObjectCaseSensitive(item, NULL, item));
    TEST_ASSERT_FALSE(cJSON_ReplaceItemInObjectCaseSensitive(item, "item", NULL));
    TEST_ASSERT_NULL(cJSON_Duplicate(NULL, true));
    TEST_ASSERT_FALSE(cJSON_Compare(item, NULL, false));
    TEST_ASSERT_FALSE(cJSON_Compare(NULL, item, false));
    TEST_ASSERT_NULL(cJSON_SetValuestring(NULL, "test"));
    TEST_ASSERT_NULL(cJSON_SetValuestring(corruptedString, "test"));
    TEST_ASSERT_NULL(cJSON_SetValuestring(item, NULL));
    cJSON_Minify(NULL);
    /* skipped because it is only used via a macro that checks for NULL */
    /* cJSON_SetNumberHelper(NULL, 0); */

    /* restore corrupted item2 to delete it */
    item2->prev = originalPrev;
    cJSON_Delete(corruptedString);
    cJSON_Delete(array);
    cJSON_Delete(item);
}

static void cjson_set_valuestring_should_return_null_if_strings_overlap(void)
{       
    cJSON *obj;
    char* str;
    char* str2;

    obj =  cJSON_Parse("\"foo0z\"");
    
    str =  cJSON_SetValuestring(obj, "abcde");
    str += 1;
    /* The string passed to strcpy overlap which is not allowed.*/
    str2 = cJSON_SetValuestring(obj, str);
    /* If it overlaps, the string will be messed up.*/
    TEST_ASSERT_TRUE(strcmp(str, "bcde") == 0);
    TEST_ASSERT_NULL(str2);
    cJSON_Delete(obj);
}

static void *CJSON_CDECL failing_realloc(void *pointer, size_t size)
{
    (void)size;
    (void)pointer;
    return NULL;
}

static void ensure_should_fail_on_failed_realloc(void)
{
    printbuffer buffer = {NULL, 10, 0, 0, false, false, {&malloc, &free, &failing_realloc}};
    buffer.buffer = (unsigned char *)malloc(100);
    TEST_ASSERT_NOT_NULL(buffer.buffer);

    TEST_ASSERT_NULL_MESSAGE(ensure(&buffer, 200), "Ensure didn't fail with failing realloc.");
}

static void skip_utf8_bom_should_skip_bom(void)
{
    const unsigned char string[] = "\xEF\xBB\xBF{}";
    parse_buffer buffer = {0, 0, 0, 0, {0, 0, 0}};
    buffer.content = string;
    buffer.length = sizeof(string);
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE(skip_utf8_bom(&buffer) == &buffer);
    TEST_ASSERT_EQUAL_UINT(3U, (unsigned int)buffer.offset);
}

static void skip_utf8_bom_should_not_skip_bom_if_not_at_beginning(void)
{
    const unsigned char string[] = " \xEF\xBB\xBF{}";
    parse_buffer buffer = {0, 0, 0, 0, {0, 0, 0}};
    buffer.content = string;
    buffer.length = sizeof(string);
    buffer.hooks = global_hooks;
    buffer.offset = 1;

    TEST_ASSERT_NULL(skip_utf8_bom(&buffer));
}

static void cjson_get_string_value_should_get_a_string(void)
{
    cJSON *string = cJSON_CreateString("test");
    cJSON *number = cJSON_CreateNumber(1);

    TEST_ASSERT_TRUE(cJSON_GetStringValue(string) == string->valuestring);
    TEST_ASSERT_NULL(cJSON_GetStringValue(number));
    TEST_ASSERT_NULL(cJSON_GetStringValue(NULL));

    cJSON_Delete(number);
    cJSON_Delete(string);
}

static void cjson_get_number_value_should_get_a_number(void)
{
    cJSON *string = cJSON_CreateString("test");
    cJSON *number = cJSON_CreateNumber(1);

    TEST_ASSERT_EQUAL_DOUBLE(cJSON_GetNumberValue(number), number->valuedouble);
    TEST_ASSERT_DOUBLE_IS_NAN(cJSON_GetNumberValue(string));
    TEST_ASSERT_DOUBLE_IS_NAN(cJSON_GetNumberValue(NULL));

    cJSON_Delete(number);
    cJSON_Delete(string);
}

static void cjson_create_string_reference_should_create_a_string_reference(void)
{
    const char *string = "I am a string!";

    cJSON *string_reference = cJSON_CreateStringReference(string);
    TEST_ASSERT_TRUE(string_reference->valuestring == string);
    TEST_ASSERT_EQUAL_INT(cJSON_IsReference | cJSON_String, string_reference->type);

    cJSON_Delete(string_reference);
}

static void cjson_create_object_reference_should_create_an_object_reference(void)
{
    cJSON *number_reference = NULL;
    cJSON *number_object = cJSON_CreateObject();
    cJSON *number = cJSON_CreateNumber(42);
    const char key[] = "number";

    TEST_ASSERT_TRUE(cJSON_IsNumber(number));
    TEST_ASSERT_TRUE(cJSON_IsObject(number_object));
    cJSON_AddItemToObjectCS(number_object, key, number);

    number_reference = cJSON_CreateObjectReference(number);
    TEST_ASSERT_TRUE(number_reference->child == number);
    TEST_ASSERT_EQUAL_INT(cJSON_Object | cJSON_IsReference, number_reference->type);

    cJSON_Delete(number_object);
    cJSON_Delete(number_reference);
}

static void cjson_create_array_reference_should_create_an_array_reference(void)
{
    cJSON *number_reference = NULL;
    cJSON *number_array = cJSON_CreateArray();
    cJSON *number = cJSON_CreateNumber(42);

    TEST_ASSERT_TRUE(cJSON_IsNumber(number));
    TEST_ASSERT_TRUE(cJSON_IsArray(number_array));
    cJSON_AddItemToArray(number_array, number);

    number_reference = cJSON_CreateArrayReference(number);
    TEST_ASSERT_TRUE(number_reference->child == number);
    TEST_ASSERT_EQUAL_INT(cJSON_Array | cJSON_IsReference, number_reference->type);

    cJSON_Delete(number_array);
    cJSON_Delete(number_reference);
}

static void cjson_add_item_to_object_or_array_should_not_add_itself(void)
{
    cJSON *object = cJSON_CreateObject();
    cJSON *array = cJSON_CreateArray();
    cJSON_bool flag = false;

    flag = cJSON_AddItemToObject(object, "key", object);
    TEST_ASSERT_FALSE_MESSAGE(flag, "add an object to itself should fail");

    flag = cJSON_AddItemToArray(array, array);
    TEST_ASSERT_FALSE_MESSAGE(flag, "add an array to itself should fail");

    cJSON_Delete(object);
    cJSON_Delete(array);
}

static void cjson_add_item_to_object_should_not_use_after_free_when_string_is_aliased(void)
{
    cJSON *object = cJSON_CreateObject();
    cJSON *number = cJSON_CreateNumber(42);
    char *name = (char *)cJSON_strdup((const unsigned char *)"number", &global_hooks);

    TEST_ASSERT_NOT_NULL(object);
    TEST_ASSERT_NOT_NULL(number);
    TEST_ASSERT_NOT_NULL(name);

    number->string = name;

    /* The following should not have a use after free
     * that would show up in valgrind or with AddressSanitizer */
    cJSON_AddItemToObject(object, number->string, number);

    cJSON_Delete(object);
}

static void cjson_delete_item_from_array_should_not_broken_list_structure(void)
{
    const char expected_json1[] = "{\"rd\":[{\"a\":\"123\"}]}";
    const char expected_json2[] = "{\"rd\":[{\"a\":\"123\"},{\"b\":\"456\"}]}";
    const char expected_json3[] = "{\"rd\":[{\"b\":\"456\"}]}";
    char *str1 = NULL;
    char *str2 = NULL;
    char *str3 = NULL;

    cJSON *root = cJSON_Parse("{}");

    cJSON *array = cJSON_AddArrayToObject(root, "rd");
    cJSON *item1 = cJSON_Parse("{\"a\":\"123\"}");
    cJSON *item2 = cJSON_Parse("{\"b\":\"456\"}");

    cJSON_AddItemToArray(array, item1);
    str1 = cJSON_PrintUnformatted(root);
    TEST_ASSERT_EQUAL_STRING(expected_json1, str1);
    free(str1);

    cJSON_AddItemToArray(array, item2);
    str2 = cJSON_PrintUnformatted(root);
    TEST_ASSERT_EQUAL_STRING(expected_json2, str2);
    free(str2);

    /* this should not broken list structure */
    cJSON_DeleteItemFromArray(array, 0);
    str3 = cJSON_PrintUnformatted(root);
    TEST_ASSERT_EQUAL_STRING(expected_json3, str3);
    free(str3);

    cJSON_Delete(root);
}

static void cjson_set_valuestring_to_object_should_not_leak_memory(void)
{
    cJSON *root = cJSON_Parse("{}");
    const char *stringvalue = "valuestring could be changed safely";
    const char *reference_valuestring = "reference item should be freed by yourself";
    const char *short_valuestring = "shorter valuestring";
    const char *long_valuestring = "new valuestring which much longer than previous should be changed safely";
    cJSON *item1 = cJSON_CreateString(stringvalue);
    cJSON *item2 = cJSON_CreateStringReference(reference_valuestring);
    char *ptr1 = NULL;
    char *return_value = NULL;

    cJSON_AddItemToObject(root, "one", item1);
    cJSON_AddItemToObject(root, "two", item2);

    ptr1 = item1->valuestring;
    return_value = cJSON_SetValuestring(cJSON_GetObjectItem(root, "one"), short_valuestring);
    TEST_ASSERT_NOT_NULL(return_value);
    TEST_ASSERT_EQUAL_PTR_MESSAGE(ptr1, return_value, "new valuestring shorter than old should not reallocate memory");
    TEST_ASSERT_EQUAL_STRING(short_valuestring, cJSON_GetObjectItem(root, "one")->valuestring);

    /* we needn't to free the original valuestring manually */
    ptr1 = item1->valuestring;
    return_value = cJSON_SetValuestring(cJSON_GetObjectItem(root, "one"), long_valuestring);
    TEST_ASSERT_NOT_NULL(return_value);
    TEST_ASSERT_NOT_EQUAL_MESSAGE(ptr1, return_value, "new valuestring longer than old should reallocate memory")
    TEST_ASSERT_EQUAL_STRING(long_valuestring, cJSON_GetObjectItem(root, "one")->valuestring);

    return_value = cJSON_SetValuestring(cJSON_GetObjectItem(root, "two"), long_valuestring);
    TEST_ASSERT_NULL_MESSAGE(return_value, "valuestring of reference object should not be changed");
    TEST_ASSERT_EQUAL_STRING(reference_valuestring, cJSON_GetObjectItem(root, "two")->valuestring);

    cJSON_Delete(root);
}

static void cjson_set_bool_value_must_not_break_objects(void)
{
    cJSON *bobj, *sobj, *oobj, *refobj = NULL;

    TEST_ASSERT_TRUE((cJSON_SetBoolValue(refobj, 1) == cJSON_Invalid));

    bobj = cJSON_CreateFalse();
    TEST_ASSERT_TRUE(cJSON_IsFalse(bobj));
    TEST_ASSERT_TRUE((cJSON_SetBoolValue(bobj, 1) == cJSON_True));
    TEST_ASSERT_TRUE(cJSON_IsTrue(bobj));
    cJSON_SetBoolValue(bobj, 1);
    TEST_ASSERT_TRUE(cJSON_IsTrue(bobj));
    TEST_ASSERT_TRUE((cJSON_SetBoolValue(bobj, 0) == cJSON_False));
    TEST_ASSERT_TRUE(cJSON_IsFalse(bobj));
    cJSON_SetBoolValue(bobj, 0);
    TEST_ASSERT_TRUE(cJSON_IsFalse(bobj));

    sobj = cJSON_CreateString("test");
    TEST_ASSERT_TRUE(cJSON_IsString(sobj));
    cJSON_SetBoolValue(sobj, 1);
    TEST_ASSERT_TRUE(cJSON_IsString(sobj));
    cJSON_SetBoolValue(sobj, 0);
    TEST_ASSERT_TRUE(cJSON_IsString(sobj));

    oobj = cJSON_CreateObject();
    TEST_ASSERT_TRUE(cJSON_IsObject(oobj));
    cJSON_SetBoolValue(oobj, 1);
    TEST_ASSERT_TRUE(cJSON_IsObject(oobj));
    cJSON_SetBoolValue(oobj, 0);
    TEST_ASSERT_TRUE(cJSON_IsObject(oobj));

    refobj = cJSON_CreateStringReference("conststring");
    TEST_ASSERT_TRUE(cJSON_IsString(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_SetBoolValue(refobj, 1);
    TEST_ASSERT_TRUE(cJSON_IsString(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_SetBoolValue(refobj, 0);
    TEST_ASSERT_TRUE(cJSON_IsString(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_Delete(refobj);

    refobj = cJSON_CreateObjectReference(oobj);
    TEST_ASSERT_TRUE(cJSON_IsObject(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_SetBoolValue(refobj, 1);
    TEST_ASSERT_TRUE(cJSON_IsObject(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_SetBoolValue(refobj, 0);
    TEST_ASSERT_TRUE(cJSON_IsObject(refobj));
    TEST_ASSERT_TRUE(refobj->type & cJSON_IsReference);
    cJSON_Delete(refobj);

    cJSON_Delete(oobj);
    cJSON_Delete(bobj);
    cJSON_Delete(sobj);
}

static void cjson_parse_big_numbers_should_not_report_error(void)
{
    cJSON *valid_big_number_json_object1 = cJSON_Parse("{\"a\": true, \"b\": [ null,9999999999999999999999999999999999999999999999912345678901234567]}");
    cJSON *valid_big_number_json_object2 = cJSON_Parse("{\"a\": true, \"b\": [ null,999999999999999999999999999999999999999999999991234567890.1234567E3]}");
    const char *invalid_big_number_json1 = "{\"a\": true, \"b\": [ null,99999999999999999999999999999999999999999999999.1234567890.1234567]}";
    const char *invalid_big_number_json2 = "{\"a\": true, \"b\": [ null,99999999999999999999999999999999999999999999999E1234567890e1234567]}";

    TEST_ASSERT_NOT_NULL(valid_big_number_json_object1);
    TEST_ASSERT_NOT_NULL(valid_big_number_json_object2);
    TEST_ASSERT_NULL_MESSAGE(cJSON_Parse(invalid_big_number_json1), "Invalid big number JSONs should not be parsed.");
    TEST_ASSERT_NULL_MESSAGE(cJSON_Parse(invalid_big_number_json2), "Invalid big number JSONs should not be parsed.");

    cJSON_Delete(valid_big_number_json_object1);
    cJSON_Delete(valid_big_number_json_object2);
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();

    RUN_TEST(cjson_array_foreach_should_loop_over_arrays);
    RUN_TEST(cjson_array_foreach_should_not_dereference_null_pointer);
    RUN_TEST(cjson_get_object_item_should_get_object_items);
    RUN_TEST(cjson_get_object_item_case_sensitive_should_get_object_items);
    RUN_TEST(cjson_get_object_item_should_not_crash_with_array);
    RUN_TEST(cjson_get_object_item_case_sensitive_should_not_crash_with_array);
    RUN_TEST(typecheck_functions_should_check_type);
    RUN_TEST(cjson_should_not_parse_to_deeply_nested_jsons);
    RUN_TEST(cjson_should_not_follow_too_deep_circular_references);
    RUN_TEST(cjson_set_number_value_should_set_numbers);
    RUN_TEST(cjson_detach_item_via_pointer_should_detach_items);
    RUN_TEST(cjson_detach_item_via_pointer_should_return_null_if_item_prev_is_null);
    RUN_TEST(cjson_replace_item_via_pointer_should_replace_items);
    RUN_TEST(cjson_replace_item_in_object_should_preserve_name);
    RUN_TEST(cjson_functions_should_not_crash_with_null_pointers);
    RUN_TEST(cjson_set_valuestring_should_return_null_if_strings_overlap);
    RUN_TEST(ensure_should_fail_on_failed_realloc);
    RUN_TEST(skip_utf8_bom_should_skip_bom);
    RUN_TEST(skip_utf8_bom_should_not_skip_bom_if_not_at_beginning);
    RUN_TEST(cjson_get_string_value_should_get_a_string);
    RUN_TEST(cjson_get_number_value_should_get_a_number);
    RUN_TEST(cjson_create_string_reference_should_create_a_string_reference);
    RUN_TEST(cjson_create_object_reference_should_create_an_object_reference);
    RUN_TEST(cjson_create_array_reference_should_create_an_array_reference);
    RUN_TEST(cjson_add_item_to_object_or_array_should_not_add_itself);
    RUN_TEST(cjson_add_item_to_object_should_not_use_after_free_when_string_is_aliased);
    RUN_TEST(cjson_delete_item_from_array_should_not_broken_list_structure);
    RUN_TEST(cjson_set_valuestring_to_object_should_not_leak_memory);
    RUN_TEST(cjson_set_bool_value_must_not_break_objects);
    RUN_TEST(cjson_parse_big_numbers_should_not_report_error);

    return UNITY_END();
}


/* FILE: tests/parse_examples.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_examples.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON *parse_file(const char *filename)
{
    cJSON *parsed = NULL;
    char *content = read_file(filename);

    parsed = cJSON_Parse(content);

    if (content != NULL)
    {
        free(content);
    }

    return parsed;
}

static void do_test(const char *test_name)
{
    char *expected = NULL;
    char *actual = NULL;
    cJSON *tree = NULL;

    size_t test_name_length = 0;
    /* path of the test input */
    char *test_path = NULL;
    /* path of the expected output */
    char *expected_path = NULL;

    test_name_length = strlen(test_name);

    /* allocate file paths */
#define TEST_DIR_PATH "inputs/"
    test_path = (char*)malloc(sizeof(TEST_DIR_PATH) + test_name_length);
    TEST_ASSERT_NOT_NULL_MESSAGE(test_path, "Failed to allocate test_path buffer.");
    expected_path = (char*)malloc(sizeof(TEST_DIR_PATH) + test_name_length + sizeof(".expected"));
    TEST_ASSERT_NOT_NULL_MESSAGE(expected_path, "Failed to allocate expected_path buffer.");

    /* create file paths */
    sprintf(test_path, TEST_DIR_PATH"%s", test_name);
    sprintf(expected_path, TEST_DIR_PATH"%s.expected", test_name);

    /* read expected output */
    expected = read_file(expected_path);
    TEST_ASSERT_NOT_NULL_MESSAGE(expected, "Failed to read expected output.");

    /* read and parse test */
    tree = parse_file(test_path);
    TEST_ASSERT_NOT_NULL_MESSAGE(tree, "Failed to read of parse test.");

    /* print the parsed tree */
    actual = cJSON_Print(tree);
    TEST_ASSERT_NOT_NULL_MESSAGE(actual, "Failed to print tree back to JSON.");


    TEST_ASSERT_EQUAL_STRING(expected, actual);

    /* cleanup resources */
    if (expected != NULL)
    {
        free(expected);
    }
    if (tree != NULL)
    {
        cJSON_Delete(tree);
    }
    if (actual != NULL)
    {
        free(actual);
    }
    if (test_path != NULL)
    {
        free(test_path);
    }
    if (expected_path != NULL)
    {
        free(expected_path);
    }
}

static void file_test1_should_be_parsed_and_printed(void)
{
    do_test("test1");
}

static void file_test2_should_be_parsed_and_printed(void)
{
    do_test("test2");
}

static void file_test3_should_be_parsed_and_printed(void)
{
    do_test("test3");
}

static void file_test4_should_be_parsed_and_printed(void)
{
    do_test("test4");
}

static void file_test5_should_be_parsed_and_printed(void)
{
    do_test("test5");
}

static void file_test6_should_not_be_parsed(void)
{
    char *test6 = NULL;
    cJSON *tree = NULL;

    test6 = read_file("inputs/test6");
    TEST_ASSERT_NOT_NULL_MESSAGE(test6, "Failed to read test6 data.");

    tree = cJSON_Parse(test6);
    TEST_ASSERT_NULL_MESSAGE(tree, "Should fail to parse what is not JSON.");

    TEST_ASSERT_EQUAL_PTR_MESSAGE(test6, cJSON_GetErrorPtr(), "Error pointer is incorrect.");

    if (test6 != NULL)
    {
        free(test6);
    }
    if (tree != NULL)
    {
        cJSON_Delete(tree);
    }
}

static void file_test7_should_be_parsed_and_printed(void)
{
    do_test("test7");
}

static void file_test8_should_be_parsed_and_printed(void)
{
    do_test("test8");
}

static void file_test9_should_be_parsed_and_printed(void)
{
    do_test("test9");
}

static void file_test10_should_be_parsed_and_printed(void)
{
    do_test("test10");
}

static void file_test11_should_be_parsed_and_printed(void)
{
    do_test("test11");
}

static void test12_should_not_be_parsed(void)
{
    const char *test12 = "{ \"name\": ";
    cJSON *tree = NULL;

    tree = cJSON_Parse(test12);
    TEST_ASSERT_NULL_MESSAGE(tree, "Should fail to parse incomplete JSON.");

    TEST_ASSERT_EQUAL_PTR_MESSAGE(test12 + strlen(test12), cJSON_GetErrorPtr(), "Error pointer is incorrect.");

    if (tree != NULL)
    {
        cJSON_Delete(tree);
    }
}

static void test13_should_be_parsed_without_null_termination(void)
{
    cJSON *tree = NULL;
    const char test_13[] = "{" \
                                "\"Image\":{" \
                                    "\"Width\":800," \
                                    "\"Height\":600," \
                                    "\"Title\":\"Viewfrom15thFloor\"," \
                                    "\"Thumbnail\":{" \
                                        "\"Url\":\"http:/*www.example.com/image/481989943\"," \
                                        "\"Height\":125," \
                                        "\"Width\":\"100\"" \
                                    "}," \
                                    "\"IDs\":[116,943,234,38793]" \
                                "}" \
                            "}";

    char test_13_wo_null[sizeof(test_13) - 1];
    memcpy(test_13_wo_null, test_13, sizeof(test_13) - 1);

    tree = cJSON_ParseWithLength(test_13_wo_null, sizeof(test_13) - 1);
    TEST_ASSERT_NOT_NULL_MESSAGE(tree, "Failed to parse valid json.");

    if (tree != NULL)
    {
        cJSON_Delete(tree);
    }
}

static void test14_should_not_be_parsed(void)
{
    cJSON *tree = NULL;
    const char test_14[] = "{" \
                                "\"Image\":{" \
                                    "\"Width\":800," \
                                    "\"Height\":600," \
                                    "\"Title\":\"Viewfrom15thFloor\"," \
                                    "\"Thumbnail\":{" \
                                        "\"Url\":\"http:/*www.example.com/image/481989943\"," \
                                        "\"Height\":125," \
                                        "\"Width\":\"100\"" \
                                    "}," \
                                    "\"IDs\":[116,943,234,38793]" \
                                "}" \
                            "}";

    tree = cJSON_ParseWithLength(test_14, sizeof(test_14) - 2);
    TEST_ASSERT_NULL_MESSAGE(tree, "Should not continue after buffer_length is reached.");

    if (tree != NULL)
    {
        cJSON_Delete(tree);
    }
}

/* Address Sanitizer */
static void test15_should_not_heap_buffer_overflow(void)
{
    const char *strings[] = {
        "{\"1\":1,",
        "{\"1\":1, ",
    };

    size_t i;

    for (i = 0; i < sizeof(strings) / sizeof(strings[0]); i+=1)
    {
        const char *json_string = strings[i];
        size_t len = strlen(json_string);
        cJSON *json = NULL;

        char *exact_size_heap = (char*)malloc(len);
        TEST_ASSERT_NOT_NULL(exact_size_heap);

        memcpy(exact_size_heap, json_string, len);
        json = cJSON_ParseWithLength(exact_size_heap, len);

        cJSON_Delete(json);
        free(exact_size_heap);
    }
}

int CJSON_CDECL main(void)
{
    UNITY_BEGIN();
    RUN_TEST(file_test1_should_be_parsed_and_printed);
    RUN_TEST(file_test2_should_be_parsed_and_printed);
    RUN_TEST(file_test3_should_be_parsed_and_printed);
    RUN_TEST(file_test4_should_be_parsed_and_printed);
    RUN_TEST(file_test5_should_be_parsed_and_printed);
    RUN_TEST(file_test6_should_not_be_parsed);
    RUN_TEST(file_test7_should_be_parsed_and_printed);
    RUN_TEST(file_test8_should_be_parsed_and_printed);
    RUN_TEST(file_test9_should_be_parsed_and_printed);
    RUN_TEST(file_test10_should_be_parsed_and_printed);
    RUN_TEST(file_test11_should_be_parsed_and_printed);
    RUN_TEST(test12_should_not_be_parsed);
    RUN_TEST(test13_should_be_parsed_without_null_termination);
    RUN_TEST(test14_should_not_be_parsed);
    RUN_TEST(test15_should_not_heap_buffer_overflow);
    return UNITY_END();
}


/* FILE: tests/parse_value.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_value.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON item[1];

static void assert_is_value(cJSON *value_item, int type)
{
    TEST_ASSERT_NOT_NULL_MESSAGE(value_item, "Item is NULL.");

    assert_not_in_list(value_item);
    assert_has_type(value_item, type);
    assert_has_no_reference(value_item);
    assert_has_no_const_string(value_item);
    assert_has_no_string(value_item);
}

static void assert_parse_value(const char *string, int type)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*) string;
    buffer.length = strlen(string) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE(parse_value(item, &buffer));
    assert_is_value(item, type);
}

static void parse_value_should_parse_null(void)
{
    assert_parse_value("null", cJSON_NULL);
    reset(item);
}

static void parse_value_should_parse_true(void)
{
    assert_parse_value("true", cJSON_True);
    reset(item);
}

static void parse_value_should_parse_false(void)
{
    assert_parse_value("false", cJSON_False);
    reset(item);
}

static void parse_value_should_parse_number(void)
{
    assert_parse_value("1.5", cJSON_Number);
    reset(item);
}

static void parse_value_should_parse_string(void)
{
    assert_parse_value("\"\"", cJSON_String);
    reset(item);
    assert_parse_value("\"hello\"", cJSON_String);
    reset(item);
}

static void parse_value_should_parse_array(void)
{
    assert_parse_value("[]", cJSON_Array);
    reset(item);
}

static void parse_value_should_parse_object(void)
{
    assert_parse_value("{}", cJSON_Object);
    reset(item);
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    memset(item, 0, sizeof(cJSON));
    UNITY_BEGIN();
    RUN_TEST(parse_value_should_parse_null);
    RUN_TEST(parse_value_should_parse_true);
    RUN_TEST(parse_value_should_parse_false);
    RUN_TEST(parse_value_should_parse_number);
    RUN_TEST(parse_value_should_parse_string);
    RUN_TEST(parse_value_should_parse_array);
    RUN_TEST(parse_value_should_parse_object);
    return UNITY_END();
}


/* FILE: tests/parse_string.c */
/* LAYER: UTILITY */
/* PATH: tests/parse_string.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static cJSON item[1];

static void assert_is_string(cJSON *string_item)
{
    TEST_ASSERT_NOT_NULL_MESSAGE(string_item, "Item is NULL.");

    assert_not_in_list(string_item);
    assert_has_no_child(string_item);
    assert_has_type(string_item, cJSON_String);
    assert_has_no_reference(string_item);
    assert_has_no_const_string(string_item);
    assert_has_valuestring(string_item);
    assert_has_no_string(string_item);
}

static void assert_parse_string(const char *string, const char *expected)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)string;
    buffer.length = strlen(string) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_TRUE_MESSAGE(parse_string(item, &buffer), "Couldn't parse string.");
    assert_is_string(item);
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, item->valuestring, "The parsed result isn't as expected.");
    global_hooks.deallocate(item->valuestring);
    item->valuestring = NULL;
}

static void assert_not_parse_string(const char * const string)
{
    parse_buffer buffer = { 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.content = (const unsigned char*)string;
    buffer.length = strlen(string) + sizeof("");
    buffer.hooks = global_hooks;

    TEST_ASSERT_FALSE_MESSAGE(parse_string(item, &buffer), "Malformed string should not be accepted.");
    assert_is_invalid(item);
}



static void parse_string_should_parse_strings(void)
{
    assert_parse_string("\"\"", "");
    assert_parse_string(
        "\" !\\\"#$%&'()*+,-./\\/0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\\\]^_'abcdefghijklmnopqrstuvwxyz{|}~\"",
        " !\"#$%&'()*+,-.//0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_'abcdefghijklmnopqrstuvwxyz{|}~");
    assert_parse_string(
        "\"\\\"\\\\\\/\\b\\f\\n\\r\\t\\u20AC\\u732b\"",
        "\"\\/\b\f\n\r\t€猫");
    reset(item);
    assert_parse_string("\"\b\f\n\r\t\"", "\b\f\n\r\t");
    reset(item);
}

static void parse_string_should_parse_utf16_surrogate_pairs(void)
{
    assert_parse_string("\"\\uD83D\\udc31\"", "🐱");
    reset(item);
}

static void parse_string_should_not_parse_non_strings(void)
{
    assert_not_parse_string("this\" is not a string\"");
    reset(item);
    assert_not_parse_string("");
    reset(item);
}

static void parse_string_should_not_parse_invalid_backslash(void)
{
    assert_not_parse_string("Abcdef\\123");
    reset(item);
    assert_not_parse_string("Abcdef\\e23");
    reset(item);
}

static void parse_string_should_not_overflow_with_closing_backslash(void)
{
    assert_not_parse_string("\"000000000000000000\\");
    reset(item);
}

static void parse_string_should_parse_bug_94(void)
{
    const char string[] = "\"~!@\\\\#$%^&*()\\\\\\\\-\\\\+{}[]:\\\\;\\\\\\\"\\\\<\\\\>?/.,DC=ad,DC=com\"";
    assert_parse_string(string, "~!@\\#$%^&*()\\\\-\\+{}[]:\\;\\\"\\<\\>?/.,DC=ad,DC=com");
    reset(item);
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item and error pointer */
    memset(item, 0, sizeof(cJSON));

    UNITY_BEGIN();
    RUN_TEST(parse_string_should_parse_strings);
    RUN_TEST(parse_string_should_parse_utf16_surrogate_pairs);
    RUN_TEST(parse_string_should_not_parse_non_strings);
    RUN_TEST(parse_string_should_not_parse_invalid_backslash);
    RUN_TEST(parse_string_should_parse_bug_94);
    RUN_TEST(parse_string_should_not_overflow_with_closing_backslash);
    return UNITY_END();
}


/* FILE: tests/print_number.c */
/* LAYER: UTILITY */
/* PATH: tests/print_number.c */
/* ------------------------------------------------------------ */
/*
  Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "unity/examples/unity_config.h"
#include "unity/src/unity.h"
#include "common.h"

static void assert_print_number(const char *expected, double input)
{
    unsigned char printed[1024];
    unsigned char new_buffer[26];
    unsigned int i = 0;
    cJSON item[1];
    printbuffer buffer = { 0, 0, 0, 0, 0, 0, { 0, 0, 0 } };
    buffer.buffer = printed;
    buffer.length = sizeof(printed);
    buffer.offset = 0;
    buffer.noalloc = true;
    buffer.hooks = global_hooks;
    buffer.buffer = new_buffer;

    memset(item, 0, sizeof(item));
    memset(new_buffer, 0, sizeof(new_buffer));
    cJSON_SetNumberValue(item, input);
    TEST_ASSERT_TRUE_MESSAGE(print_number(item, &buffer), "Failed to print number.");
    
    /* In MinGW or visual studio(before 2015),the exponten is represented using three digits,like:"1e-009","1e+017"
     * remove extra "0" to output "1e-09" or "1e+17",which makes testcase PASS */
    for(i = 0;i <sizeof(new_buffer);i++)
    {
        if(i >3 && new_buffer[i] =='0')
        {
            if((new_buffer[i-3] =='e' && new_buffer[i-2] == '-' && new_buffer[i] =='0') ||(new_buffer[i-2] =='e' && new_buffer[i-1] =='+'))
            {
                while(new_buffer[i] !='\0')
                {
                    new_buffer[i] = new_buffer[i+1];
                    i++;
                }
            }        
        }  
    }    
    TEST_ASSERT_EQUAL_STRING_MESSAGE(expected, buffer.buffer, "Printed number is not as expected.");
}

static void print_number_should_print_zero(void)
{
    assert_print_number("0", 0);
}

static void print_number_should_print_negative_integers(void)
{
    assert_print_number("-1", -1.0);
    assert_print_number("-32768", -32768.0);
    assert_print_number("-2147483648", -2147483648.0);
}

static void print_number_should_print_positive_integers(void)
{
    assert_print_number("1", 1.0);
    assert_print_number("32767", 32767.0);
    assert_print_number("2147483647", 2147483647.0);
}

static void print_number_should_print_positive_reals(void)
{
    assert_print_number("0.123", 0.123);
    assert_print_number("1e-09", 10e-10);
    assert_print_number("1000000000000", 10e11);
    assert_print_number("1.23e+129", 123e+127);
    assert_print_number("1.23e-126", 123e-128);
    assert_print_number("3.1415926535897931", 3.1415926535897931);
}

static void print_number_should_print_negative_reals(void)
{
    assert_print_number("-0.0123", -0.0123);
    assert_print_number("-1e-09", -10e-10);
    assert_print_number("-1e+21", -10e20);
    assert_print_number("-1.23e+129", -123e+127);
    assert_print_number("-1.23e-126", -123e-128);
}

static void print_number_should_print_non_number(void)
{
    TEST_IGNORE();
    /* FIXME: Cannot test this easily in C89! */
    /* assert_print_number("null", NaN); */
    /* assert_print_number("null", INFTY); */
    /* assert_print_number("null", -INFTY); */
}

int CJSON_CDECL main(void)
{
    /* initialize cJSON item */
    UNITY_BEGIN();

    RUN_TEST(print_number_should_print_zero);
    RUN_TEST(print_number_should_print_negative_integers);
    RUN_TEST(print_number_should_print_positive_integers);
    RUN_TEST(print_number_should_print_positive_reals);
    RUN_TEST(print_number_should_print_negative_reals);
    RUN_TEST(print_number_should_print_non_number);

    return UNITY_END();
}


/* FILE: tests/unity_setup.c */
/* LAYER: UTILITY */
/* PATH: tests/unity_setup.c */
/* ------------------------------------------------------------ */
// msvc doesn't support weak-linking, so we need to define these functions.
void setUp(void) { }
void tearDown(void) { }


/* FILE: tests/unity/src/unity.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/src/unity.c */
/* ------------------------------------------------------------ */
/* =========================================================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007-14 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
============================================================================ */

#define UNITY_INCLUDE_SETUP_STUBS
#include "unity.h"
#include <stddef.h>

/* If omitted from header, declare overridable prototypes here so they're ready for use */
#ifdef UNITY_OMIT_OUTPUT_CHAR_HEADER_DECLARATION
void UNITY_OUTPUT_CHAR(int);
#endif

/* Helpful macros for us to use here in Assert functions */
#define UNITY_FAIL_AND_BAIL   { Unity.CurrentTestFailed  = 1; TEST_ABORT(); }
#define UNITY_IGNORE_AND_BAIL { Unity.CurrentTestIgnored = 1; TEST_ABORT(); }
#define RETURN_IF_FAIL_OR_IGNORE if (Unity.CurrentTestFailed || Unity.CurrentTestIgnored) return

struct UNITY_STORAGE_T Unity;

#ifdef UNITY_OUTPUT_COLOR
static const char UnityStrOk[]                     = "\033[42mOK\033[00m";
static const char UnityStrPass[]                   = "\033[42mPASS\033[00m";
static const char UnityStrFail[]                   = "\033[41mFAIL\033[00m";
static const char UnityStrIgnore[]                 = "\033[43mIGNORE\033[00m";
#else
static const char UnityStrOk[]                     = "OK";
static const char UnityStrPass[]                   = "PASS";
static const char UnityStrFail[]                   = "FAIL";
static const char UnityStrIgnore[]                 = "IGNORE";
#endif
static const char UnityStrNull[]                   = "NULL";
static const char UnityStrSpacer[]                 = ". ";
static const char UnityStrExpected[]               = " Expected ";
static const char UnityStrWas[]                    = " Was ";
static const char UnityStrGt[]                     = " to be greater than ";
static const char UnityStrLt[]                     = " to be less than ";
static const char UnityStrOrEqual[]                = "or equal to ";
static const char UnityStrElement[]                = " Element ";
static const char UnityStrByte[]                   = " Byte ";
static const char UnityStrMemory[]                 = " Memory Mismatch.";
static const char UnityStrDelta[]                  = " Values Not Within Delta ";
static const char UnityStrPointless[]              = " You Asked Me To Compare Nothing, Which Was Pointless.";
static const char UnityStrNullPointerForExpected[] = " Expected pointer to be NULL";
static const char UnityStrNullPointerForActual[]   = " Actual pointer was NULL";
#ifndef UNITY_EXCLUDE_FLOAT
static const char UnityStrNot[]                    = "Not ";
static const char UnityStrInf[]                    = "Infinity";
static const char UnityStrNegInf[]                 = "Negative Infinity";
static const char UnityStrNaN[]                    = "NaN";
static const char UnityStrDet[]                    = "Determinate";
static const char UnityStrInvalidFloatTrait[]      = "Invalid Float Trait";
#endif
const char UnityStrErrFloat[]                      = "Unity Floating Point Disabled";
const char UnityStrErrDouble[]                     = "Unity Double Precision Disabled";
const char UnityStrErr64[]                         = "Unity 64-bit Support Disabled";
static const char UnityStrBreaker[]                = "-----------------------";
static const char UnityStrResultsTests[]           = " Tests ";
static const char UnityStrResultsFailures[]        = " Failures ";
static const char UnityStrResultsIgnored[]         = " Ignored ";
static const char UnityStrDetail1Name[]            = UNITY_DETAIL1_NAME " ";
static const char UnityStrDetail2Name[]            = " " UNITY_DETAIL2_NAME " ";

/*-----------------------------------------------
 * Pretty Printers & Test Result Output Handlers
 *-----------------------------------------------*/

void UnityPrint(const char* string)
{
    const char* pch = string;

    if (pch != NULL)
    {
        while (*pch)
        {
            /* printable characters plus CR & LF are printed */
            if ((*pch <= 126) && (*pch >= 32))
            {
                UNITY_OUTPUT_CHAR(*pch);
            }
            /* write escaped carriage returns */
            else if (*pch == 13)
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('r');
            }
            /* write escaped line feeds */
            else if (*pch == 10)
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('n');
            }
#ifdef UNITY_OUTPUT_COLOR
            /* print ANSI escape code */
            else if (*pch == 27 && *(pch + 1) == '[')
            {
                while (*pch && *pch != 'm')
                {
                    UNITY_OUTPUT_CHAR(*pch);
                    pch++;
                }
                UNITY_OUTPUT_CHAR('m');
            }
#endif
            /* unprintable characters are shown as codes */
            else
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('x');
                UnityPrintNumberHex((UNITY_UINT)*pch, 2);
            }
            pch++;
        }
    }
}

void UnityPrintLen(const char* string, const UNITY_UINT32 length)
{
    const char* pch = string;

    if (pch != NULL)
    {
        while (*pch && (UNITY_UINT32)(pch - string) < length)
        {
            /* printable characters plus CR & LF are printed */
            if ((*pch <= 126) && (*pch >= 32))
            {
                UNITY_OUTPUT_CHAR(*pch);
            }
            /* write escaped carriage returns */
            else if (*pch == 13)
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('r');
            }
            /* write escaped line feeds */
            else if (*pch == 10)
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('n');
            }
            /* unprintable characters are shown as codes */
            else
            {
                UNITY_OUTPUT_CHAR('\\');
                UNITY_OUTPUT_CHAR('x');
                UnityPrintNumberHex((UNITY_UINT)*pch, 2);
            }
            pch++;
        }
    }
}

/*-----------------------------------------------*/
void UnityPrintNumberByStyle(const UNITY_INT number, const UNITY_DISPLAY_STYLE_T style)
{
    if ((style & UNITY_DISPLAY_RANGE_INT) == UNITY_DISPLAY_RANGE_INT)
    {
        UnityPrintNumber(number);
    }
    else if ((style & UNITY_DISPLAY_RANGE_UINT) == UNITY_DISPLAY_RANGE_UINT)
    {
        UnityPrintNumberUnsigned((UNITY_UINT)number);
    }
    else
    {
        UNITY_OUTPUT_CHAR('0');
        UNITY_OUTPUT_CHAR('x');
        UnityPrintNumberHex((UNITY_UINT)number, (char)((style & 0xF) * 2));
    }
}

/*-----------------------------------------------*/
void UnityPrintNumber(const UNITY_INT number_to_print)
{
    UNITY_UINT number = (UNITY_UINT)number_to_print;

    if (number_to_print < 0)
    {
        /* A negative number, including MIN negative */
        UNITY_OUTPUT_CHAR('-');
        number = (UNITY_UINT)(-number_to_print);
    }
    UnityPrintNumberUnsigned(number);
}

/*-----------------------------------------------
 * basically do an itoa using as little ram as possible */
void UnityPrintNumberUnsigned(const UNITY_UINT number)
{
    UNITY_UINT divisor = 1;

    /* figure out initial divisor */
    while (number / divisor > 9)
    {
        divisor *= 10;
    }

    /* now mod and print, then divide divisor */
    do
    {
        UNITY_OUTPUT_CHAR((char)('0' + (number / divisor % 10)));
        divisor /= 10;
    } while (divisor > 0);
}

/*-----------------------------------------------*/
void UnityPrintNumberHex(const UNITY_UINT number, const char nibbles_to_print)
{
    int nibble;
    char nibbles = nibbles_to_print;
    if ((unsigned)nibbles > (2 * sizeof(number)))
        nibbles = 2 * sizeof(number);

    while (nibbles > 0)
    {
        nibbles--;
        nibble = (int)(number >> (nibbles * 4)) & 0x0F;
        if (nibble <= 9)
        {
            UNITY_OUTPUT_CHAR((char)('0' + nibble));
        }
        else
        {
            UNITY_OUTPUT_CHAR((char)('A' - 10 + nibble));
        }
    }
}

/*-----------------------------------------------*/
void UnityPrintMask(const UNITY_UINT mask, const UNITY_UINT number)
{
    UNITY_UINT current_bit = (UNITY_UINT)1 << (UNITY_INT_WIDTH - 1);
    UNITY_INT32 i;

    for (i = 0; i < UNITY_INT_WIDTH; i++)
    {
        if (current_bit & mask)
        {
            if (current_bit & number)
            {
                UNITY_OUTPUT_CHAR('1');
            }
            else
            {
                UNITY_OUTPUT_CHAR('0');
            }
        }
        else
        {
            UNITY_OUTPUT_CHAR('X');
        }
        current_bit = current_bit >> 1;
    }
}

/*-----------------------------------------------*/
#ifndef UNITY_EXCLUDE_FLOAT_PRINT
/* This function prints a floating-point value in a format similar to
 * printf("%.6g").  It can work with either single- or double-precision,
 * but for simplicity, it prints only 6 significant digits in either case.
 * Printing more than 6 digits accurately is hard (at least in the single-
 * precision case) and isn't attempted here. */
void UnityPrintFloat(const UNITY_DOUBLE input_number)
{
    UNITY_DOUBLE number = input_number;

    /* print minus sign (including for negative zero) */
    if (number < (double)0.0f || (number == (double)0.0f && (double)1.0f / number < (double)0.0f))
    {
        UNITY_OUTPUT_CHAR('-');
        number = -number;
    }

    /* handle zero, NaN, and +/- infinity */
    if (number == (double)0.0f) UnityPrint("0");
    else if (isnan(number)) UnityPrint("nan");
    else if (isinf(number)) UnityPrint("inf");
    else
    {
        int exponent = 0;
        int decimals, digits;
        UNITY_INT32 n;
        char buf[16];

        /* scale up or down by powers of 10 */
        while (number < (double)(100000.0f / 1e6f))  { number *= (double)1e6f; exponent -= 6; }
        while (number < (double)100000.0f)         { number *= (double)10.0f; exponent--; }
        while (number > (double)(1000000.0f * 1e6f)) { number /= (double)1e6f; exponent += 6; }
        while (number > (double)1000000.0f)        { number /= (double)10.0f; exponent++; }

        /* round to nearest integer */
        n = ((UNITY_INT32)(number + number) + 1) / 2;
        if (n > 999999)
        {
            n = 100000;
            exponent++;
        }

        /* determine where to place decimal point */
        decimals = (exponent <= 0 && exponent >= -9) ? -exponent : 5;
        exponent += decimals;

        /* truncate trailing zeroes after decimal point */
        while (decimals > 0 && n % 10 == 0)
        {
            n /= 10;
            decimals--;
        }

        /* build up buffer in reverse order */
        digits = 0;
        while (n != 0 || digits < decimals + 1)
        {
            buf[digits++] = (char)('0' + n % 10);
            n /= 10;
        }
        while (digits > 0)
        {
            if(digits == decimals) UNITY_OUTPUT_CHAR('.');
            UNITY_OUTPUT_CHAR(buf[--digits]);
        }

        /* print exponent if needed */
        if (exponent != 0)
        {
            UNITY_OUTPUT_CHAR('e');

            if(exponent < 0)
            {
                UNITY_OUTPUT_CHAR('-');
                exponent = -exponent;
            }
            else
            {
                UNITY_OUTPUT_CHAR('+');
            }

            digits = 0;
            while (exponent != 0 || digits < 2)
            {
                buf[digits++] = (char)('0' + exponent % 10);
                exponent /= 10;
            }
            while (digits > 0)
            {
                UNITY_OUTPUT_CHAR(buf[--digits]);
            }
        }
    }
}
#endif /* ! UNITY_EXCLUDE_FLOAT_PRINT */

/*-----------------------------------------------*/
static void UnityTestResultsBegin(const char* file, const UNITY_LINE_TYPE line)
{
    UnityPrint(file);
    UNITY_OUTPUT_CHAR(':');
    UnityPrintNumber((UNITY_INT)line);
    UNITY_OUTPUT_CHAR(':');
    UnityPrint(Unity.CurrentTestName);
    UNITY_OUTPUT_CHAR(':');
}

/*-----------------------------------------------*/
static void UnityTestResultsFailBegin(const UNITY_LINE_TYPE line)
{
    UnityTestResultsBegin(Unity.TestFile, line);
    UnityPrint(UnityStrFail);
    UNITY_OUTPUT_CHAR(':');
}

/*-----------------------------------------------*/
void UnityConcludeTest(void)
{
    if (Unity.CurrentTestIgnored)
    {
        Unity.TestIgnores++;
    }
    else if (!Unity.CurrentTestFailed)
    {
        UnityTestResultsBegin(Unity.TestFile, Unity.CurrentTestLineNumber);
        UnityPrint(UnityStrPass);
    }
    else
    {
        Unity.TestFailures++;
    }

    Unity.CurrentTestFailed = 0;
    Unity.CurrentTestIgnored = 0;
    UNITY_PRINT_EOL();
    UNITY_FLUSH_CALL();
}

/*-----------------------------------------------*/
static void UnityAddMsgIfSpecified(const char* msg)
{
    if (msg)
    {
        UnityPrint(UnityStrSpacer);
#ifndef UNITY_EXCLUDE_DETAILS
        if (Unity.CurrentDetail1)
        {
            UnityPrint(UnityStrDetail1Name);
            UnityPrint(Unity.CurrentDetail1);
            if (Unity.CurrentDetail2)
            {
                UnityPrint(UnityStrDetail2Name);
                UnityPrint(Unity.CurrentDetail2);
            }
            UnityPrint(UnityStrSpacer);
        }
#endif
        UnityPrint(msg);
    }
}

/*-----------------------------------------------*/
static void UnityPrintExpectedAndActualStrings(const char* expected, const char* actual)
{
    UnityPrint(UnityStrExpected);
    if (expected != NULL)
    {
        UNITY_OUTPUT_CHAR('\'');
        UnityPrint(expected);
        UNITY_OUTPUT_CHAR('\'');
    }
    else
    {
        UnityPrint(UnityStrNull);
    }
    UnityPrint(UnityStrWas);
    if (actual != NULL)
    {
        UNITY_OUTPUT_CHAR('\'');
        UnityPrint(actual);
        UNITY_OUTPUT_CHAR('\'');
    }
    else
    {
        UnityPrint(UnityStrNull);
    }
}

/*-----------------------------------------------*/
static void UnityPrintExpectedAndActualStringsLen(const char* expected,
                                                  const char* actual,
                                                  const UNITY_UINT32 length)
{
    UnityPrint(UnityStrExpected);
    if (expected != NULL)
    {
        UNITY_OUTPUT_CHAR('\'');
        UnityPrintLen(expected, length);
        UNITY_OUTPUT_CHAR('\'');
    }
    else
    {
        UnityPrint(UnityStrNull);
    }
    UnityPrint(UnityStrWas);
    if (actual != NULL)
    {
        UNITY_OUTPUT_CHAR('\'');
        UnityPrintLen(actual, length);
        UNITY_OUTPUT_CHAR('\'');
    }
    else
    {
        UnityPrint(UnityStrNull);
    }
}

/*-----------------------------------------------
 * Assertion & Control Helpers
 *-----------------------------------------------*/

static int UnityIsOneArrayNull(UNITY_INTERNAL_PTR expected,
                               UNITY_INTERNAL_PTR actual,
                               const UNITY_LINE_TYPE lineNumber,
                               const char* msg)
{
    if (expected == actual) return 0; /* Both are NULL or same pointer */

    /* print and return true if just expected is NULL */
    if (expected == NULL)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrNullPointerForExpected);
        UnityAddMsgIfSpecified(msg);
        return 1;
    }

    /* print and return true if just actual is NULL */
    if (actual == NULL)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrNullPointerForActual);
        UnityAddMsgIfSpecified(msg);
        return 1;
    }

    return 0; /* return false if neither is NULL */
}

/*-----------------------------------------------
 * Assertion Functions
 *-----------------------------------------------*/

void UnityAssertBits(const UNITY_INT mask,
                     const UNITY_INT expected,
                     const UNITY_INT actual,
                     const char* msg,
                     const UNITY_LINE_TYPE lineNumber)
{
    RETURN_IF_FAIL_OR_IGNORE;

    if ((mask & expected) != (mask & actual))
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrExpected);
        UnityPrintMask((UNITY_UINT)mask, (UNITY_UINT)expected);
        UnityPrint(UnityStrWas);
        UnityPrintMask((UNITY_UINT)mask, (UNITY_UINT)actual);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertEqualNumber(const UNITY_INT expected,
                            const UNITY_INT actual,
                            const char* msg,
                            const UNITY_LINE_TYPE lineNumber,
                            const UNITY_DISPLAY_STYLE_T style)
{
    RETURN_IF_FAIL_OR_IGNORE;

    if (expected != actual)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrExpected);
        UnityPrintNumberByStyle(expected, style);
        UnityPrint(UnityStrWas);
        UnityPrintNumberByStyle(actual, style);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertGreaterOrLessOrEqualNumber(const UNITY_INT threshold,
                                           const UNITY_INT actual,
                                           const UNITY_COMPARISON_T compare,
                                           const char *msg,
                                           const UNITY_LINE_TYPE lineNumber,
                                           const UNITY_DISPLAY_STYLE_T style)
{
    int failed = 0;
    RETURN_IF_FAIL_OR_IGNORE;

    if (threshold == actual && compare & UNITY_EQUAL_TO) return;
    if (threshold == actual) failed = 1;

    if ((style & UNITY_DISPLAY_RANGE_INT) == UNITY_DISPLAY_RANGE_INT)
    {
        if (actual > threshold && compare & UNITY_SMALLER_THAN) failed = 1;
        if (actual < threshold && compare & UNITY_GREATER_THAN) failed = 1;
    }
    else /* UINT or HEX */
    {
        if ((UNITY_UINT)actual > (UNITY_UINT)threshold && compare & UNITY_SMALLER_THAN) failed = 1;
        if ((UNITY_UINT)actual < (UNITY_UINT)threshold && compare & UNITY_GREATER_THAN) failed = 1;
    }

    if (failed)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrExpected);
        UnityPrintNumberByStyle(actual, style);
        if (compare & UNITY_GREATER_THAN) UnityPrint(UnityStrGt);
        if (compare & UNITY_SMALLER_THAN) UnityPrint(UnityStrLt);
        if (compare & UNITY_EQUAL_TO)     UnityPrint(UnityStrOrEqual);
        UnityPrintNumberByStyle(threshold, style);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

#define UnityPrintPointlessAndBail()       \
{                                          \
    UnityTestResultsFailBegin(lineNumber); \
    UnityPrint(UnityStrPointless);         \
    UnityAddMsgIfSpecified(msg);           \
    UNITY_FAIL_AND_BAIL; }

/*-----------------------------------------------*/
void UnityAssertEqualIntArray(UNITY_INTERNAL_PTR expected,
                              UNITY_INTERNAL_PTR actual,
                              const UNITY_UINT32 num_elements,
                              const char* msg,
                              const UNITY_LINE_TYPE lineNumber,
                              const UNITY_DISPLAY_STYLE_T style,
                              const UNITY_FLAGS_T flags)
{
    UNITY_UINT32 elements = num_elements;
    unsigned int length   = style & 0xF;

    RETURN_IF_FAIL_OR_IGNORE;

    if (num_elements == 0)
    {
        UnityPrintPointlessAndBail();
    }

    if (expected == actual) return; /* Both are NULL or same pointer */
    if (UnityIsOneArrayNull(expected, actual, lineNumber, msg))
        UNITY_FAIL_AND_BAIL;

    while (elements--)
    {
        UNITY_INT expect_val;
        UNITY_INT actual_val;
        switch (length)
        {
            case 1:
                expect_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT8*)expected;
                actual_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT8*)actual;
                break;
            case 2:
                expect_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT16*)expected;
                actual_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT16*)actual;
                break;
#ifdef UNITY_SUPPORT_64
            case 8:
                expect_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT64*)expected;
                actual_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT64*)actual;
                break;
#endif
            default: /* length 4 bytes */
                expect_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT32*)expected;
                actual_val = *(UNITY_PTR_ATTRIBUTE const UNITY_INT32*)actual;
                length = 4;
                break;
        }

        if (expect_val != actual_val)
        {
            if (style & UNITY_DISPLAY_RANGE_UINT && length < sizeof(expect_val))
            {   /* For UINT, remove sign extension (padding 1's) from signed type casts above */
                UNITY_INT mask = 1;
                mask = (mask << 8 * length) - 1;
                expect_val &= mask;
                actual_val &= mask;
            }
            UnityTestResultsFailBegin(lineNumber);
            UnityPrint(UnityStrElement);
            UnityPrintNumberUnsigned(num_elements - elements - 1);
            UnityPrint(UnityStrExpected);
            UnityPrintNumberByStyle(expect_val, style);
            UnityPrint(UnityStrWas);
            UnityPrintNumberByStyle(actual_val, style);
            UnityAddMsgIfSpecified(msg);
            UNITY_FAIL_AND_BAIL;
        }
        if (flags == UNITY_ARRAY_TO_ARRAY)
        {
            expected = (UNITY_INTERNAL_PTR)(length + (const char*)expected);
        }
        actual   = (UNITY_INTERNAL_PTR)(length + (const char*)actual);
    }
}

/*-----------------------------------------------*/
#ifndef UNITY_EXCLUDE_FLOAT
/* Wrap this define in a function with variable types as float or double */
#define UNITY_FLOAT_OR_DOUBLE_WITHIN(delta, expected, actual, diff)                       \
    if (isinf(expected) && isinf(actual) && ((expected < 0) == (actual < 0))) return 1;   \
    if (UNITY_NAN_CHECK) return 1;                                                        \
    diff = actual - expected;                                                             \
    if (diff < 0) diff = -diff;                                                           \
    if (delta < 0) delta = -delta;                                                        \
    return !(isnan(diff) || isinf(diff) || (diff > delta))
    /* This first part of this condition will catch any NaN or Infinite values */
#ifndef UNITY_NAN_NOT_EQUAL_NAN
  #define UNITY_NAN_CHECK isnan(expected) && isnan(actual)
#else
  #define UNITY_NAN_CHECK 0
#endif

#ifndef UNITY_EXCLUDE_FLOAT_PRINT
  #define UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(expected, actual) \
  {                                                               \
    UnityPrint(UnityStrExpected);                                 \
    UnityPrintFloat(expected);                                    \
    UnityPrint(UnityStrWas);                                      \
    UnityPrintFloat(actual); }
#else
  #define UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(expected, actual) \
    UnityPrint(UnityStrDelta)
#endif /* UNITY_EXCLUDE_FLOAT_PRINT */

static int UnityFloatsWithin(UNITY_FLOAT delta, UNITY_FLOAT expected, UNITY_FLOAT actual)
{
    UNITY_FLOAT diff;
    UNITY_FLOAT_OR_DOUBLE_WITHIN(delta, expected, actual, diff);
}

void UnityAssertEqualFloatArray(UNITY_PTR_ATTRIBUTE const UNITY_FLOAT* expected,
                                UNITY_PTR_ATTRIBUTE const UNITY_FLOAT* actual,
                                const UNITY_UINT32 num_elements,
                                const char* msg,
                                const UNITY_LINE_TYPE lineNumber,
                                const UNITY_FLAGS_T flags)
{
    UNITY_UINT32 elements = num_elements;
    UNITY_PTR_ATTRIBUTE const UNITY_FLOAT* ptr_expected = expected;
    UNITY_PTR_ATTRIBUTE const UNITY_FLOAT* ptr_actual = actual;

    RETURN_IF_FAIL_OR_IGNORE;

    if (elements == 0)
    {
        UnityPrintPointlessAndBail();
    }

    if (expected == actual) return; /* Both are NULL or same pointer */
    if (UnityIsOneArrayNull((UNITY_INTERNAL_PTR)expected, (UNITY_INTERNAL_PTR)actual, lineNumber, msg))
        UNITY_FAIL_AND_BAIL;

    while (elements--)
    {
        if (!UnityFloatsWithin(*ptr_expected * UNITY_FLOAT_PRECISION, *ptr_expected, *ptr_actual))
        {
            UnityTestResultsFailBegin(lineNumber);
            UnityPrint(UnityStrElement);
            UnityPrintNumberUnsigned(num_elements - elements - 1);
            UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT((UNITY_DOUBLE)*ptr_expected, (UNITY_DOUBLE)*ptr_actual);
            UnityAddMsgIfSpecified(msg);
            UNITY_FAIL_AND_BAIL;
        }
        if (flags == UNITY_ARRAY_TO_ARRAY)
        {
            ptr_expected++;
        }
        ptr_actual++;
    }
}

/*-----------------------------------------------*/
void UnityAssertFloatsWithin(const UNITY_FLOAT delta,
                             const UNITY_FLOAT expected,
                             const UNITY_FLOAT actual,
                             const char* msg,
                             const UNITY_LINE_TYPE lineNumber)
{
    RETURN_IF_FAIL_OR_IGNORE;


    if (!UnityFloatsWithin(delta, expected, actual))
    {
        UnityTestResultsFailBegin(lineNumber);
        UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT((UNITY_DOUBLE)expected, (UNITY_DOUBLE)actual);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertFloatSpecial(const UNITY_FLOAT actual,
                             const char* msg,
                             const UNITY_LINE_TYPE lineNumber,
                             const UNITY_FLOAT_TRAIT_T style)
{
    const char* trait_names[] = {UnityStrInf, UnityStrNegInf, UnityStrNaN, UnityStrDet};
    UNITY_INT should_be_trait = ((UNITY_INT)style & 1);
    UNITY_INT is_trait        = !should_be_trait;
    UNITY_INT trait_index     = (UNITY_INT)(style >> 1);

    RETURN_IF_FAIL_OR_IGNORE;

    switch (style)
    {
        case UNITY_FLOAT_IS_INF:
        case UNITY_FLOAT_IS_NOT_INF:
            is_trait = isinf(actual) && (actual > 0);
            break;
        case UNITY_FLOAT_IS_NEG_INF:
        case UNITY_FLOAT_IS_NOT_NEG_INF:
            is_trait = isinf(actual) && (actual < 0);
            break;

        case UNITY_FLOAT_IS_NAN:
        case UNITY_FLOAT_IS_NOT_NAN:
            is_trait = isnan(actual) ? 1 : 0;
            break;

        case UNITY_FLOAT_IS_DET: /* A determinate number is non infinite and not NaN. */
        case UNITY_FLOAT_IS_NOT_DET:
            is_trait = !isinf(actual) && !isnan(actual);
            break;

        default:
            trait_index = 0;
            trait_names[0] = UnityStrInvalidFloatTrait;
            break;
    }

    if (is_trait != should_be_trait)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrExpected);
        if (!should_be_trait)
            UnityPrint(UnityStrNot);
        UnityPrint(trait_names[trait_index]);
        UnityPrint(UnityStrWas);
#ifndef UNITY_EXCLUDE_FLOAT_PRINT
        UnityPrintFloat((UNITY_DOUBLE)actual);
#else
        if (should_be_trait)
            UnityPrint(UnityStrNot);
        UnityPrint(trait_names[trait_index]);
#endif
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

#endif /* not UNITY_EXCLUDE_FLOAT */

/*-----------------------------------------------*/
#ifndef UNITY_EXCLUDE_DOUBLE
static int UnityDoublesWithin(UNITY_DOUBLE delta, UNITY_DOUBLE expected, UNITY_DOUBLE actual)
{
    UNITY_DOUBLE diff;
    UNITY_FLOAT_OR_DOUBLE_WITHIN(delta, expected, actual, diff);
}

void UnityAssertEqualDoubleArray(UNITY_PTR_ATTRIBUTE const UNITY_DOUBLE* expected,
                                 UNITY_PTR_ATTRIBUTE const UNITY_DOUBLE* actual,
                                 const UNITY_UINT32 num_elements,
                                 const char* msg,
                                 const UNITY_LINE_TYPE lineNumber,
                                 const UNITY_FLAGS_T flags)
{
    UNITY_UINT32 elements = num_elements;
    UNITY_PTR_ATTRIBUTE const UNITY_DOUBLE* ptr_expected = expected;
    UNITY_PTR_ATTRIBUTE const UNITY_DOUBLE* ptr_actual = actual;

    RETURN_IF_FAIL_OR_IGNORE;

    if (elements == 0)
    {
        UnityPrintPointlessAndBail();
    }

    if (expected == actual) return; /* Both are NULL or same pointer */
    if (UnityIsOneArrayNull((UNITY_INTERNAL_PTR)expected, (UNITY_INTERNAL_PTR)actual, lineNumber, msg))
        UNITY_FAIL_AND_BAIL;

    while (elements--)
    {
        if (!UnityDoublesWithin(*ptr_expected * UNITY_DOUBLE_PRECISION, *ptr_expected, *ptr_actual))
        {
            UnityTestResultsFailBegin(lineNumber);
            UnityPrint(UnityStrElement);
            UnityPrintNumberUnsigned(num_elements - elements - 1);
            UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(*ptr_expected, *ptr_actual);
            UnityAddMsgIfSpecified(msg);
            UNITY_FAIL_AND_BAIL;
        }
        if (flags == UNITY_ARRAY_TO_ARRAY)
        {
            ptr_expected++;
        }
        ptr_actual++;
    }
}

/*-----------------------------------------------*/
void UnityAssertDoublesWithin(const UNITY_DOUBLE delta,
                              const UNITY_DOUBLE expected,
                              const UNITY_DOUBLE actual,
                              const char* msg,
                              const UNITY_LINE_TYPE lineNumber)
{
    RETURN_IF_FAIL_OR_IGNORE;

    if (!UnityDoublesWithin(delta, expected, actual))
    {
        UnityTestResultsFailBegin(lineNumber);
        UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(expected, actual);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/

void UnityAssertDoubleSpecial(const UNITY_DOUBLE actual,
                              const char* msg,
                              const UNITY_LINE_TYPE lineNumber,
                              const UNITY_FLOAT_TRAIT_T style)
{
    const char* trait_names[] = {UnityStrInf, UnityStrNegInf, UnityStrNaN, UnityStrDet};
    UNITY_INT should_be_trait = ((UNITY_INT)style & 1);
    UNITY_INT is_trait        = !should_be_trait;
    UNITY_INT trait_index     = (UNITY_INT)(style >> 1);

    RETURN_IF_FAIL_OR_IGNORE;

    switch (style)
    {
        case UNITY_FLOAT_IS_INF:
        case UNITY_FLOAT_IS_NOT_INF:
            is_trait = isinf(actual) && (actual > 0);
            break;
        case UNITY_FLOAT_IS_NEG_INF:
        case UNITY_FLOAT_IS_NOT_NEG_INF:
            is_trait = isinf(actual) && (actual < 0);
            break;

        case UNITY_FLOAT_IS_NAN:
        case UNITY_FLOAT_IS_NOT_NAN:
            is_trait = isnan(actual) ? 1 : 0;
            break;

        case UNITY_FLOAT_IS_DET: /* A determinate number is non infinite and not NaN. */
        case UNITY_FLOAT_IS_NOT_DET:
            is_trait = !isinf(actual) && !isnan(actual);
            break;

        default:
            trait_index = 0;
            trait_names[0] = UnityStrInvalidFloatTrait;
            break;
    }

    if (is_trait != should_be_trait)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrExpected);
        if (!should_be_trait)
            UnityPrint(UnityStrNot);
        UnityPrint(trait_names[trait_index]);
        UnityPrint(UnityStrWas);
#ifndef UNITY_EXCLUDE_FLOAT_PRINT
        UnityPrintFloat(actual);
#else
        if (should_be_trait)
            UnityPrint(UnityStrNot);
        UnityPrint(trait_names[trait_index]);
#endif
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

#endif /* not UNITY_EXCLUDE_DOUBLE */

/*-----------------------------------------------*/
void UnityAssertNumbersWithin(const UNITY_UINT delta,
                              const UNITY_INT expected,
                              const UNITY_INT actual,
                              const char* msg,
                              const UNITY_LINE_TYPE lineNumber,
                              const UNITY_DISPLAY_STYLE_T style)
{
    RETURN_IF_FAIL_OR_IGNORE;

    if ((style & UNITY_DISPLAY_RANGE_INT) == UNITY_DISPLAY_RANGE_INT)
    {
        if (actual > expected)
          Unity.CurrentTestFailed = (UNITY_UINT)((UNITY_UINT)(actual - expected) > delta);
        else
            Unity.CurrentTestFailed = (UNITY_UINT)((UNITY_UINT)(expected - actual) > delta);
    }
    else
    {
        if ((UNITY_UINT)actual > (UNITY_UINT)expected)
            Unity.CurrentTestFailed = (UNITY_UINT)((UNITY_UINT)(actual - expected) > delta);
        else
            Unity.CurrentTestFailed = (UNITY_UINT)((UNITY_UINT)(expected - actual) > delta);
    }

    if (Unity.CurrentTestFailed)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrint(UnityStrDelta);
        UnityPrintNumberByStyle((UNITY_INT)delta, style);
        UnityPrint(UnityStrExpected);
        UnityPrintNumberByStyle(expected, style);
        UnityPrint(UnityStrWas);
        UnityPrintNumberByStyle(actual, style);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertEqualString(const char* expected,
                            const char* actual,
                            const char* msg,
                            const UNITY_LINE_TYPE lineNumber)
{
    UNITY_UINT32 i;

    RETURN_IF_FAIL_OR_IGNORE;

    /* if both pointers not null compare the strings */
    if (expected && actual)
    {
        for (i = 0; expected[i] || actual[i]; i++)
        {
            if (expected[i] != actual[i])
            {
                Unity.CurrentTestFailed = 1;
                break;
            }
        }
    }
    else
    { /* handle case of one pointers being null (if both null, test should pass) */
        if (expected != actual)
        {
            Unity.CurrentTestFailed = 1;
        }
    }

    if (Unity.CurrentTestFailed)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrintExpectedAndActualStrings(expected, actual);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertEqualStringLen(const char* expected,
                               const char* actual,
                               const UNITY_UINT32 length,
                               const char* msg,
                               const UNITY_LINE_TYPE lineNumber)
{
    UNITY_UINT32 i;

    RETURN_IF_FAIL_OR_IGNORE;

    /* if both pointers not null compare the strings */
    if (expected && actual)
    {
        for (i = 0; (i < length) && (expected[i] || actual[i]); i++)
        {
            if (expected[i] != actual[i])
            {
                Unity.CurrentTestFailed = 1;
                break;
            }
        }
    }
    else
    { /* handle case of one pointers being null (if both null, test should pass) */
        if (expected != actual)
        {
            Unity.CurrentTestFailed = 1;
        }
    }

    if (Unity.CurrentTestFailed)
    {
        UnityTestResultsFailBegin(lineNumber);
        UnityPrintExpectedAndActualStringsLen(expected, actual, length);
        UnityAddMsgIfSpecified(msg);
        UNITY_FAIL_AND_BAIL;
    }
}

/*-----------------------------------------------*/
void UnityAssertEqualStringArray(UNITY_INTERNAL_PTR expected,
                                 const char** actual,
                                 const UNITY_UINT32 num_elements,
                                 const char* msg,
                                 const UNITY_LINE_TYPE lineNumber,
                                 const UNITY_FLAGS_T flags)
{
    UNITY_UINT32 i = 0;
    UNITY_UINT32 j = 0;
    const char* expd = NULL;
    const char* act = NULL;

    RETURN_IF_FAIL_OR_IGNORE;

    /* if no elements, it's an error */
    if (num_elements == 0)
    {
        UnityPrintPointlessAndBail();
    }

    if ((const void*)expected == (const void*)actual)
    {
        return; /* Both are NULL or same pointer */
    }

    if (UnityIsOneArrayNull((UNITY_INTERNAL_PTR)expected, (UNITY_INTERNAL_PTR)actual, lineNumber, msg))
    {
        UNITY_FAIL_AND_BAIL;
    }

    if (flags != UNITY_ARRAY_TO_ARRAY)
    {
        expd = (const char*)expected;
    }

    do
    {
        act = actual[j];
        if (flags == UNITY_ARRAY_TO_ARRAY)
        {
            expd = ((const char* const*)expected)[j];
        }

        /* if both pointers not null compare the strings */
        if (expd && act)
        {
            for (i = 0; expd[i] || act[i]; i++)
            {
                if (expd[i] != act[i])
                {
                    Unity.CurrentTestFailed = 1;
                    break;
                }
            }
        }
        else
        { /* handle case of one pointers being null (if both null, test should pass) */
            if (expd != act)
            {
                Unity.CurrentTestFailed = 1;
            }
        }

        if (Unity.CurrentTestFailed)
        {
            UnityTestResultsFailBegin(lineNumber);
            if (num_elements > 1)
            {
                UnityPrint(UnityStrElement);
                UnityPrintNumberUnsigned(j);
            }
            UnityPrintExpectedAndActualStrings(expd, act);
            UnityAddMsgIfSpecified(msg);
            UNITY_FAIL_AND_BAIL;
        }
    } while (++j < num_elements);
}

/*-----------------------------------------------*/
void UnityAssertEqualMemory(UNITY_INTERNAL_PTR expected,
                            UNITY_INTERNAL_PTR actual,
                            const UNITY_UINT32 length,
                            const UNITY_UINT32 num_elements,
                            const char* msg,
                            const UNITY_LINE_TYPE lineNumber,
                            const UNITY_FLAGS_T flags)
{
    UNITY_PTR_ATTRIBUTE const unsigned char* ptr_exp = (UNITY_PTR_ATTRIBUTE const unsigned char*)expected;
    UNITY_PTR_ATTRIBUTE const unsigned char* ptr_act = (UNITY_PTR_ATTRIBUTE const unsigned char*)actual;
    UNITY_UINT32 elements = num_elements;
    UNITY_UINT32 bytes;

    RETURN_IF_FAIL_OR_IGNORE;

    if ((elements == 0) || (length == 0))
    {
        UnityPrintPointlessAndBail();
    }

    if (expected == actual) return; /* Both are NULL or same pointer */
    if (UnityIsOneArrayNull(expected, actual, lineNumber, msg))
        UNITY_FAIL_AND_BAIL;

    while (elements--)
    {
        bytes = length;
        while (bytes--)
        {
            if (*ptr_exp != *ptr_act)
            {
                UnityTestResultsFailBegin(lineNumber);
                UnityPrint(UnityStrMemory);
                if (num_elements > 1)
                {
                    UnityPrint(UnityStrElement);
                    UnityPrintNumberUnsigned(num_elements - elements - 1);
                }
                UnityPrint(UnityStrByte);
                UnityPrintNumberUnsigned(length - bytes - 1);
                UnityPrint(UnityStrExpected);
                UnityPrintNumberByStyle(*ptr_exp, UNITY_DISPLAY_STYLE_HEX8);
                UnityPrint(UnityStrWas);
                UnityPrintNumberByStyle(*ptr_act, UNITY_DISPLAY_STYLE_HEX8);
                UnityAddMsgIfSpecified(msg);
                UNITY_FAIL_AND_BAIL;
            }
            ptr_exp++;
            ptr_act++;
        }
        if (flags == UNITY_ARRAY_TO_VAL)
        {
            ptr_exp = (UNITY_PTR_ATTRIBUTE const unsigned char*)expected;
        }
    }
}

/*-----------------------------------------------*/

static union
{
    UNITY_INT8 i8;
    UNITY_INT16 i16;
    UNITY_INT32 i32;
#ifdef UNITY_SUPPORT_64
    UNITY_INT64 i64;
#endif
#ifndef UNITY_EXCLUDE_FLOAT
    float f;
#endif
#ifndef UNITY_EXCLUDE_DOUBLE
    double d;
#endif
} UnityQuickCompare;

UNITY_INTERNAL_PTR UnityNumToPtr(const UNITY_INT num, const UNITY_UINT8 size)
{
    switch(size)
    {
        case 1:
          UnityQuickCompare.i8 = (UNITY_INT8)num;
          return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.i8);

        case 2:
          UnityQuickCompare.i16 = (UNITY_INT16)num;
          return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.i16);

#ifdef UNITY_SUPPORT_64
        case 8:
          UnityQuickCompare.i64 = (UNITY_INT64)num;
          return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.i64);
#endif
        default: /* 4 bytes */
          UnityQuickCompare.i32 = (UNITY_INT32)num;
          return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.i32);
    }
}

#ifndef UNITY_EXCLUDE_FLOAT
UNITY_INTERNAL_PTR UnityFloatToPtr(const float num)
{
    UnityQuickCompare.f = num;
    return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.f);
}
#endif

#ifndef UNITY_EXCLUDE_DOUBLE
UNITY_INTERNAL_PTR UnityDoubleToPtr(const double num)
{
    UnityQuickCompare.d = num;
    return (UNITY_INTERNAL_PTR)(&UnityQuickCompare.d);
}
#endif

/*-----------------------------------------------
 * Control Functions
 *-----------------------------------------------*/

void UnityFail(const char* msg, const UNITY_LINE_TYPE line)
{
    RETURN_IF_FAIL_OR_IGNORE;

    UnityTestResultsBegin(Unity.TestFile, line);
    UnityPrint(UnityStrFail);
    if (msg != NULL)
    {
        UNITY_OUTPUT_CHAR(':');

#ifndef UNITY_EXCLUDE_DETAILS
        if (Unity.CurrentDetail1)
        {
            UnityPrint(UnityStrDetail1Name);
            UnityPrint(Unity.CurrentDetail1);
            if (Unity.CurrentDetail2)
            {
                UnityPrint(UnityStrDetail2Name);
                UnityPrint(Unity.CurrentDetail2);
            }
            UnityPrint(UnityStrSpacer);
        }
#endif
        if (msg[0] != ' ')
        {
            UNITY_OUTPUT_CHAR(' ');
        }
        UnityPrint(msg);
    }

    UNITY_FAIL_AND_BAIL;
}

/*-----------------------------------------------*/
void UnityIgnore(const char* msg, const UNITY_LINE_TYPE line)
{
    RETURN_IF_FAIL_OR_IGNORE;

    UnityTestResultsBegin(Unity.TestFile, line);
    UnityPrint(UnityStrIgnore);
    if (msg != NULL)
    {
        UNITY_OUTPUT_CHAR(':');
        UNITY_OUTPUT_CHAR(' ');
        UnityPrint(msg);
    }
    UNITY_IGNORE_AND_BAIL;
}

/*-----------------------------------------------*/
void UnityDefaultTestRun(UnityTestFunction Func, const char* FuncName, const int FuncLineNum)
{
    Unity.CurrentTestName = FuncName;
    Unity.CurrentTestLineNumber = (UNITY_LINE_TYPE)FuncLineNum;
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    if (TEST_PROTECT())
    {
        setUp();
        Func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
    }
    UnityConcludeTest();
}

/*-----------------------------------------------*/
void UnityBegin(const char* filename)
{
    Unity.TestFile = filename;
    Unity.CurrentTestName = NULL;
    Unity.CurrentTestLineNumber = 0;
    Unity.NumberOfTests = 0;
    Unity.TestFailures = 0;
    Unity.TestIgnores = 0;
    Unity.CurrentTestFailed = 0;
    Unity.CurrentTestIgnored = 0;

    UNITY_CLR_DETAILS();
    UNITY_OUTPUT_START();
}

/*-----------------------------------------------*/
int UnityEnd(void)
{
    UNITY_PRINT_EOL();
    UnityPrint(UnityStrBreaker);
    UNITY_PRINT_EOL();
    UnityPrintNumber((UNITY_INT)(Unity.NumberOfTests));
    UnityPrint(UnityStrResultsTests);
    UnityPrintNumber((UNITY_INT)(Unity.TestFailures));
    UnityPrint(UnityStrResultsFailures);
    UnityPrintNumber((UNITY_INT)(Unity.TestIgnores));
    UnityPrint(UnityStrResultsIgnored);
    UNITY_PRINT_EOL();
    if (Unity.TestFailures == 0U)
    {
        UnityPrint(UnityStrOk);
    }
    else
    {
        UnityPrint(UnityStrFail);
#ifdef UNITY_DIFFERENTIATE_FINAL_FAIL
        UNITY_OUTPUT_CHAR('E'); UNITY_OUTPUT_CHAR('D');
#endif
    }
    UNITY_PRINT_EOL();
    UNITY_FLUSH_CALL();
    UNITY_OUTPUT_COMPLETE();
    return (int)(Unity.TestFailures);
}

/*-----------------------------------------------
 * Command Line Argument Support
 *-----------------------------------------------*/
#ifdef UNITY_USE_COMMAND_LINE_ARGS

char* UnityOptionIncludeNamed = NULL;
char* UnityOptionExcludeNamed = NULL;
int UnityVerbosity            = 1;

int UnityParseOptions(int argc, char** argv)
{
    UnityOptionIncludeNamed = NULL;
    UnityOptionExcludeNamed = NULL;

    for (int i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            switch (argv[i][1])
            {
                case 'l': /* list tests */
                    return -1;
                case 'n': /* include tests with name including this string */
                case 'f': /* an alias for -n */
                    if (argv[i][2] == '=')
                        UnityOptionIncludeNamed = &argv[i][3];
                    else if (++i < argc)
                        UnityOptionIncludeNamed = argv[i];
                    else
                    {
                        UnityPrint("ERROR: No Test String to Include Matches For");
                        UNITY_PRINT_EOL();
                        return 1;
                    }
                    break;
                case 'q': /* quiet */
                    UnityVerbosity = 0;
                    break;
                case 'v': /* verbose */
                    UnityVerbosity = 2;
                    break;
                case 'x': /* exclude tests with name including this string */
                    if (argv[i][2] == '=')
                        UnityOptionExcludeNamed = &argv[i][3];
                    else if (++i < argc)
                        UnityOptionExcludeNamed = argv[i];
                    else
                    {
                        UnityPrint("ERROR: No Test String to Exclude Matches For");
                        UNITY_PRINT_EOL();
                        return 1;
                    }
                    break;
                default:
                    UnityPrint("ERROR: Unknown Option ");
                    UNITY_OUTPUT_CHAR(argv[i][1]);
                    UNITY_PRINT_EOL();
                    return 1;
            }
        }
    }

    return 0;
}

int IsStringInBiggerString(const char* longstring, const char* shortstring)
{
    const char* lptr = longstring;
    const char* sptr = shortstring;
    const char* lnext = lptr;

    if (*sptr == '*')
        return 1;

    while (*lptr)
    {
        lnext = lptr + 1;

        /* If they current bytes match, go on to the next bytes */
        while (*lptr && *sptr && (*lptr == *sptr))
        {
            lptr++;
            sptr++;

            /* We're done if we match the entire string or up to a wildcard */
            if (*sptr == '*')
                return 1;
            if (*sptr == ',')
                return 1;
            if (*sptr == '"')
                return 1;
            if (*sptr == '\'')
                return 1;
            if (*sptr == ':')
                return 2;
            if (*sptr == 0)
                return 1;
        }

        /* Otherwise we start in the long pointer 1 character further and try again */
        lptr = lnext;
        sptr = shortstring;
    }
    return 0;
}

int UnityStringArgumentMatches(const char* str)
{
    int retval;
    const char* ptr1;
    const char* ptr2;
    const char* ptrf;

    /* Go through the options and get the substrings for matching one at a time */
    ptr1 = str;
    while (ptr1[0] != 0)
    {
        if ((ptr1[0] == '"') || (ptr1[0] == '\''))
            ptr1++;

        /* look for the start of the next partial */
        ptr2 = ptr1;
        ptrf = 0;
        do
        {
            ptr2++;
            if ((ptr2[0] == ':') && (ptr2[1] != 0) && (ptr2[0] != '\'') && (ptr2[0] != '"') && (ptr2[0] != ','))
                ptrf = &ptr2[1];
        } while ((ptr2[0] != 0) && (ptr2[0] != '\'') && (ptr2[0] != '"') && (ptr2[0] != ','));
        while ((ptr2[0] != 0) && ((ptr2[0] == ':') || (ptr2[0] == '\'') || (ptr2[0] == '"') || (ptr2[0] == ',')))
            ptr2++;

        /* done if complete filename match */
        retval = IsStringInBiggerString(Unity.TestFile, ptr1);
        if (retval == 1)
            return retval;

        /* done if testname match after filename partial match */
        if ((retval == 2) && (ptrf != 0))
        {
            if (IsStringInBiggerString(Unity.CurrentTestName, ptrf))
                return 1;
        }

        /* done if complete testname match */
        if (IsStringInBiggerString(Unity.CurrentTestName, ptr1) == 1)
            return 1;

        ptr1 = ptr2;
    }

    /* we couldn't find a match for any substrings */
    return 0;
}

int UnityTestMatches(void)
{
    /* Check if this test name matches the included test pattern */
    int retval;
    if (UnityOptionIncludeNamed)
    {
        retval = UnityStringArgumentMatches(UnityOptionIncludeNamed);
    }
    else
        retval = 1;

    /* Check if this test name matches the excluded test pattern */
    if (UnityOptionExcludeNamed)
    {
        if (UnityStringArgumentMatches(UnityOptionExcludeNamed))
            retval = 0;
    }
    return retval;
}

#endif /* UNITY_USE_COMMAND_LINE_ARGS */
/*-----------------------------------------------*/


/* FILE: tests/unity/test/testdata/testRunnerGenerator.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/testdata/testRunnerGenerator.c */
/* ------------------------------------------------------------ */
/* This Test File Is Used To Verify Many Combinations Of Using the Generate Test Runner Script */

#include <stdio.h>
#include "unity.h"
#include "Defs.h"

#ifdef USE_CEXCEPTION
#include "CException.h"
#endif

/* Notes about prefixes:
   test     - normal default prefix. these are "always run" tests for this procedure
   spec     - normal default prefix. required to run default setup/teardown calls.
   should   - normal default prefix.
   qwiktest - custom prefix for when tests skip all setup/teardown calls.
   custtest - custom prefix for when tests use custom setup/teardown calls.
   paratest - custom prefix for when we want to verify parameterized tests.
   extest   - custom prefix only used during cexception
   suitetest- custom prefix for when we want to use custom suite setup/teardown
*/

/* Support for Meta Test Rig */
#define TEST_CASE(a)
void putcharSpy(int c) { (void)putchar(c);} // include passthrough for linking tests

/* Global Variables Used During These Tests */
int CounterSetup = 0;
int CounterTeardown = 0;
int CounterSuiteSetup = 0;

void setUp(void)
{
    CounterSetup = 1;
}

void tearDown(void)
{
    CounterTeardown = 1;
}

void custom_setup(void)
{
    CounterSetup = 2;
}

void custom_teardown(void)
{
    CounterTeardown = 2;
}

/*
void test_OldSchoolCommentsShouldBeIgnored(void)
{
    TEST_ASSERT_FAIL("Old-School Comments Should Be Ignored");
}
*/

void test_ThisTestAlwaysPasses(void)
{
    TEST_PASS();
}

void test_ThisTestAlwaysFails(void)
{
    TEST_FAIL_MESSAGE("This Test Should Fail");
}

void test_ThisTestAlwaysIgnored(void)
{
    TEST_IGNORE_MESSAGE("This Test Should Be Ignored");
}

void qwiktest_ThisTestPassesWhenNoSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterSetup, "Setup Was Unexpectedly Run");
}

void qwiktest_ThisTestPassesWhenNoTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterTeardown, "Teardown Was Unexpectedly Run");
}

void spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterSuiteSetup, "Suite Setup Was Unexpectedly Run");
}

void spec_ThisTestPassesWhenNormalSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterSetup, "Normal Setup Wasn't Run");
}

void spec_ThisTestPassesWhenNormalTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterTeardown, "Normal Teardown Wasn't Run");
}

void custtest_ThisTestPassesWhenCustomSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(2, CounterSetup, "Custom Setup Wasn't Run");
}

void custtest_ThisTestPassesWhenCustomTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(2, CounterTeardown, "Custom Teardown Wasn't Run");
}

//void test_NewStyleCommentsShouldBeIgnored(void)
//{
//    TEST_ASSERT_FAIL("New Style Comments Should Be Ignored");
//}

void test_NotBeConfusedByLongComplicatedStrings(void)
{
    const char* crazyString = "GET / HTTP/1.1\r\nHost: 127.0.0.1:8081\r\nConnection: keep-alive\r\nCache-Control: no-cache\r\nUser-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.80 Safari/537.36\r\nPostman-Token: 768c7149-c3fb-f704-71a2-63918d9195b2\r\nAccept: */*\r\nAccept-Encoding: gzip, deflate, sdch\r\nAccept-Language: en-GB,en-US;q=0.8,en;q=0.6\r\n\r\n";

    TEST_ASSERT_EQUAL_STRING_MESSAGE(crazyString, crazyString, "These Strings Are The Same");
}

void test_NotDisappearJustBecauseTheTestBeforeAndAfterHaveCrazyStrings(void)
{
    TEST_ASSERT_TRUE_MESSAGE(1, "1 Should be True");
}

void test_StillNotBeConfusedByLongComplicatedStrings(void)
{
    const char* crazyString = "GET / HTTP/1.1\r\nHost: 127.0.0.1:8081\r\nConnection: keep-alive\r\nCache-Control: no-cache\r\nUser-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.80 Safari/537.36\r\nPostman-Token: 768c7149-c3fb-f704-71a2-63918d9195b2\r\nAccept: */*\r\nAccept-Encoding: gzip, deflate, sdch\r\nAccept-Language: en-GB,en-US;q=0.8,en;q=0.6\r\n\r\n";

    TEST_ASSERT_EQUAL_STRING_MESSAGE(crazyString, crazyString, "These Strings Are Still The Same");
}

void should_RunTestsStartingWithShouldByDefault(void)
{
    TEST_ASSERT_TRUE_MESSAGE(1, "1 Should be True");
}

TEST_CASE(25)
TEST_CASE(125)
TEST_CASE(5)
void paratest_ShouldHandleParameterizedTests(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, (Num % 5), "All The Values Are Divisible By 5");
}

TEST_CASE(7)
void paratest_ShouldHandleParameterizedTests2(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(7, Num, "The Only Call To This Passes");
}

void paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid(void)
{
    TEST_PASS();
}

TEST_CASE(17)
void paratest_ShouldHandleParameterizedTestsThatFail(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(3, Num, "This call should fail");
}

#ifdef USE_CEXCEPTION
void extest_ShouldHandleCExceptionInTest(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CEXCEPTION_BEING_USED, "Should be pulling in CException");
}
#endif

#ifdef USE_ANOTHER_MAIN
int custom_main(void);

int main(void)
{
    return custom_main();
}
#endif

void suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterSuiteSetup, "Suite Setup Should Have Run");
}




/* FILE: tests/unity/test/testdata/testRunnerGeneratorWithMocks.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/testdata/testRunnerGeneratorWithMocks.c */
/* ------------------------------------------------------------ */
/* This Test File Is Used To Verify Many Combinations Of Using the Generate Test Runner Script */

#include <stdio.h>
#include "unity.h"
#include "Defs.h"
#include "mockMock.h"

#ifdef USE_CEXCEPTION
#include "CException.h"
#endif

/* Notes about prefixes:
   test     - normal default prefix. these are "always run" tests for this procedure
   spec     - normal default prefix. required to run default setup/teardown calls.
   should   - normal default prefix.
   qwiktest - custom prefix for when tests skip all setup/teardown calls.
   custtest - custom prefix for when tests use custom setup/teardown calls.
   paratest - custom prefix for when we want to verify parameterized tests.
   extest   - custom prefix only used during cexception
   suitetest- custom prefix for when we want to use custom suite setup/teardown
*/

/* Support for Meta Test Rig */
#define TEST_CASE(a)
void putcharSpy(int c) { (void)putchar(c);} // include passthrough for linking tests

/* Global Variables Used During These Tests */
int CounterSetup = 0;
int CounterTeardown = 0;
int CounterSuiteSetup = 0;

void setUp(void)
{
    CounterSetup = 1;
}

void tearDown(void)
{
    CounterTeardown = 1;
}

void custom_setup(void)
{
    CounterSetup = 2;
}

void custom_teardown(void)
{
    CounterTeardown = 2;
}

/*
void test_OldSchoolCommentsShouldBeIgnored(void)
{
    TEST_ASSERT_FAIL("Old-School Comments Should Be Ignored");
}
*/

void test_ThisTestAlwaysPasses(void)
{
    TEST_PASS();
}

void test_ThisTestAlwaysFails(void)
{
    TEST_FAIL_MESSAGE("This Test Should Fail");
}

void test_ThisTestAlwaysIgnored(void)
{
    TEST_IGNORE_MESSAGE("This Test Should Be Ignored");
}

void qwiktest_ThisTestPassesWhenNoSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterSetup, "Setup Was Unexpectedly Run");
}

void qwiktest_ThisTestPassesWhenNoTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterTeardown, "Teardown Was Unexpectedly Run");
}

void spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, CounterSuiteSetup, "Suite Setup Was Unexpectedly Run");
}

void spec_ThisTestPassesWhenNormalSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterSetup, "Normal Setup Wasn't Run");
}

void spec_ThisTestPassesWhenNormalTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterTeardown, "Normal Teardown Wasn't Run");
}

void custtest_ThisTestPassesWhenCustomSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(2, CounterSetup, "Custom Setup Wasn't Run");
}

void custtest_ThisTestPassesWhenCustomTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(2, CounterTeardown, "Custom Teardown Wasn't Run");
}

//void test_NewStyleCommentsShouldBeIgnored(void)
//{
//    TEST_ASSERT_FAIL("New Style Comments Should Be Ignored");
//}

void test_NotBeConfusedByLongComplicatedStrings(void)
{
    const char* crazyString = "GET / HTTP/1.1\r\nHost: 127.0.0.1:8081\r\nConnection: keep-alive\r\nCache-Control: no-cache\r\nUser-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.80 Safari/537.36\r\nPostman-Token: 768c7149-c3fb-f704-71a2-63918d9195b2\r\nAccept: */*\r\nAccept-Encoding: gzip, deflate, sdch\r\nAccept-Language: en-GB,en-US;q=0.8,en;q=0.6\r\n\r\n";

    TEST_ASSERT_EQUAL_STRING_MESSAGE(crazyString, crazyString, "These Strings Are The Same");
}

void test_NotDisappearJustBecauseTheTestBeforeAndAfterHaveCrazyStrings(void)
{
    TEST_ASSERT_TRUE_MESSAGE(1, "1 Should be True");
}

void test_StillNotBeConfusedByLongComplicatedStrings(void)
{
    const char* crazyString = "GET / HTTP/1.1\r\nHost: 127.0.0.1:8081\r\nConnection: keep-alive\r\nCache-Control: no-cache\r\nUser-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.80 Safari/537.36\r\nPostman-Token: 768c7149-c3fb-f704-71a2-63918d9195b2\r\nAccept: */*\r\nAccept-Encoding: gzip, deflate, sdch\r\nAccept-Language: en-GB,en-US;q=0.8,en;q=0.6\r\n\r\n";

    TEST_ASSERT_EQUAL_STRING_MESSAGE(crazyString, crazyString, "These Strings Are Still The Same");
}

void should_RunTestsStartingWithShouldByDefault(void)
{
    TEST_ASSERT_TRUE_MESSAGE(1, "1 Should be True");
}

TEST_CASE(25)
TEST_CASE(125)
TEST_CASE(5)
void paratest_ShouldHandleParameterizedTests(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(0, (Num % 5), "All The Values Are Divisible By 5");
}

TEST_CASE(7)
void paratest_ShouldHandleParameterizedTests2(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(7, Num, "The Only Call To This Passes");
}

void paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid(void)
{
    TEST_PASS();
}

TEST_CASE(17)
void paratest_ShouldHandleParameterizedTestsThatFail(int Num)
{
    TEST_ASSERT_EQUAL_MESSAGE(3, Num, "This call should fail");
}

#ifdef USE_CEXCEPTION
void extest_ShouldHandleCExceptionInTest(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CEXCEPTION_BEING_USED, "Should be pulling in CException");
}
#endif

#ifdef USE_ANOTHER_MAIN
int custom_main(void);

int main(void)
{
    return custom_main();
}
#endif

void suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterSuiteSetup, "Suite Setup Should Have Run");
}

void test_ShouldCallMockInitAndVerifyFunctionsForEachTest(void)
{
    int passesOrIgnores = (int)(Unity.NumberOfTests - Unity.TestFailures);
    TEST_ASSERT_EQUAL_MESSAGE(Unity.NumberOfTests,     mockMock_Init_Counter,    "Mock Init Should Be Called Once Per Test Started");
    TEST_ASSERT_EQUAL_MESSAGE(passesOrIgnores,         mockMock_Verify_Counter,  "Mock Verify Should Be Called Once Per Test Passed");
    TEST_ASSERT_EQUAL_MESSAGE(Unity.NumberOfTests - 1, mockMock_Destroy_Counter, "Mock Destroy Should Be Called Once Per Test Completed");
    TEST_ASSERT_EQUAL_MESSAGE(0,                       CMockMemFreeFinalCounter, "Mock MemFreeFinal Should Not Be Called Until End");
}



/* FILE: tests/unity/test/testdata/testRunnerGeneratorSmall.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/testdata/testRunnerGeneratorSmall.c */
/* ------------------------------------------------------------ */
/* This Test File Is Used To Verify Many Combinations Of Using the Generate Test Runner Script */

#include <stdio.h>
#include "unity.h"
#include "Defs.h"

TEST_FILE("some_file.c")

/* Notes about prefixes:
   test     - normal default prefix. these are "always run" tests for this procedure
   spec     - normal default prefix. required to run default setup/teardown calls.
*/

/* Support for Meta Test Rig */
#define TEST_CASE(a)
void putcharSpy(int c) { (void)putchar(c);} // include passthrough for linking tests

/* Global Variables Used During These Tests */
int CounterSetup = 0;
int CounterTeardown = 0;
int CounterSuiteSetup = 0;

void setUp(void)
{
    CounterSetup = 1;
}

void tearDown(void)
{
    CounterTeardown = 1;
}

void custom_setup(void)
{
    CounterSetup = 2;
}

void custom_teardown(void)
{
    CounterTeardown = 2;
}

void test_ThisTestAlwaysPasses(void)
{
    TEST_PASS();
}

void test_ThisTestAlwaysFails(void)
{
    TEST_FAIL_MESSAGE("This Test Should Fail");
}

void test_ThisTestAlwaysIgnored(void)
{
    TEST_IGNORE_MESSAGE("This Test Should Be Ignored");
}

void spec_ThisTestPassesWhenNormalSetupRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterSetup, "Normal Setup Wasn't Run");
}

void spec_ThisTestPassesWhenNormalTeardownRan(void)
{
    TEST_ASSERT_EQUAL_MESSAGE(1, CounterTeardown, "Normal Teardown Wasn't Run");
}



/* FILE: tests/unity/test/tests/testparameterized.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/tests/testparameterized.c */
/* ------------------------------------------------------------ */
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#include <setjmp.h>
#include <stdio.h>
#include "unity.h"

void putcharSpy(int c) { (void)putchar(c);} // include passthrough for linking tests

#define TEST_CASE(...)

#define EXPECT_ABORT_BEGIN \
    if (TEST_PROTECT())    \
    {

#define VERIFY_FAILS_END                                                       \
    }                                                                          \
    Unity.CurrentTestFailed = (Unity.CurrentTestFailed != 0) ? 0 : 1;          \
    if (Unity.CurrentTestFailed == 1) {                                        \
      SetToOneMeanWeAlreadyCheckedThisGuy = 1;                                 \
      UnityPrintNumberUnsigned(Unity.CurrentTestLineNumber);                   \
      UNITY_OUTPUT_CHAR(':');                                                  \
      UnityPrint(Unity.CurrentTestName);                                       \
      UnityPrint(":FAIL: [[[[ Test Should Have Failed But Did Not ]]]]");      \
      UNITY_OUTPUT_CHAR('\n');                                                 \
    }

#define VERIFY_IGNORES_END                                                     \
    }                                                                          \
    Unity.CurrentTestFailed = (Unity.CurrentTestIgnored != 0) ? 0 : 1;         \
    Unity.CurrentTestIgnored = 0;                                              \
    if (Unity.CurrentTestFailed == 1) {                                        \
      SetToOneMeanWeAlreadyCheckedThisGuy = 1;                                 \
      UnityPrintNumberUnsigned(Unity.CurrentTestLineNumber);                   \
      UNITY_OUTPUT_CHAR(':');                                                  \
      UnityPrint(Unity.CurrentTestName);                                       \
      UnityPrint(":FAIL: [[[[ Test Should Have Ignored But Did Not ]]]]");     \
      UNITY_OUTPUT_CHAR('\n');                                                 \
    }

int SetToOneToFailInTearDown;
int SetToOneMeanWeAlreadyCheckedThisGuy;

void setUp(void)
{
  SetToOneToFailInTearDown = 0;
  SetToOneMeanWeAlreadyCheckedThisGuy = 0;
}

void tearDown(void)
{
  if (SetToOneToFailInTearDown == 1)
    TEST_FAIL_MESSAGE("<= Failed in tearDown");
  if ((SetToOneMeanWeAlreadyCheckedThisGuy == 0) && (Unity.CurrentTestFailed > 0))
  {
    UnityPrint(": [[[[ Test Should Have Passed But Did Not ]]]]");
    UNITY_OUTPUT_CHAR('\n');
  }
}

TEST_CASE(0)
TEST_CASE(44)
TEST_CASE((90)+9)
void test_TheseShouldAllPass(int Num)
{
    TEST_ASSERT_TRUE(Num < 100);
}

TEST_CASE(3)
TEST_CASE(77)
TEST_CASE( (99) + 1 - (1))
void test_TheseShouldAllFail(int Num)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_TRUE(Num > 100);
    VERIFY_FAILS_END
}

TEST_CASE(1)
TEST_CASE(44)
TEST_CASE(99)
TEST_CASE(98)
void test_TheseAreEveryOther(int Num)
{
    if (Num & 1)
    {
        EXPECT_ABORT_BEGIN
        TEST_ASSERT_TRUE(Num > 100);
        VERIFY_FAILS_END
    }
    else
    {
        TEST_ASSERT_TRUE(Num < 100);
    }
}

void test_NormalPassesStillWork(void)
{
    TEST_ASSERT_TRUE(1);
}

void test_NormalFailsStillWork(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_TRUE(0);
    VERIFY_FAILS_END
}


/* FILE: tests/unity/test/tests/testunity.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/tests/testunity.c */
/* ------------------------------------------------------------ */
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#include "unity.h"
#include <string.h>
#include <stdint.h>

// Dividing by these constants produces +/- infinity.
// The rationale is given in UnityAssertFloatIsInf's body.
#ifndef UNITY_EXCLUDE_FLOAT
static const UNITY_FLOAT f_zero = 0.0f;
#endif

#ifndef UNITY_EXCLUDE_DOUBLE
static const UNITY_DOUBLE d_zero = 0.0;
#endif

#define EXPECT_ABORT_BEGIN \
    startPutcharSpy();     \
    if (TEST_PROTECT())    \
    {

#define VERIFY_FAILS_END                                                       \
    }                                                                          \
    endPutcharSpy(); /* start/end Spy to suppress output of failure message */ \
    Unity.CurrentTestFailed = (Unity.CurrentTestFailed == 1) ? 0 : 1;          \
    if (Unity.CurrentTestFailed == 1) {                                        \
      SetToOneMeanWeAlreadyCheckedThisGuy = 1;                                 \
      UnityPrintNumberUnsigned(Unity.CurrentTestLineNumber);                   \
      UNITY_OUTPUT_CHAR(':');                                                  \
      UnityPrint(Unity.CurrentTestName);                                       \
      UnityPrint(":FAIL: [[[[ Test Should Have Failed But Did Not ]]]]");      \
      UNITY_OUTPUT_CHAR('\n');                                                 \
    }

#define VERIFY_IGNORES_END                                                     \
    }                                                                          \
    endPutcharSpy(); /* start/end Spy to suppress output of ignore message */  \
    Unity.CurrentTestFailed = (Unity.CurrentTestIgnored == 1) ? 0 : 1;         \
    Unity.CurrentTestIgnored = 0;                                              \
    if (Unity.CurrentTestFailed == 1) {                                        \
      SetToOneMeanWeAlreadyCheckedThisGuy = 1;                                 \
      UnityPrintNumberUnsigned(Unity.CurrentTestLineNumber);                   \
      UNITY_OUTPUT_CHAR(':');                                                  \
      UnityPrint(Unity.CurrentTestName);                                       \
      UnityPrint(":FAIL: [[[[ Test Should Have Ignored But Did Not ]]]]");     \
      UNITY_OUTPUT_CHAR('\n');                                                 \
    }

void startPutcharSpy(void);
void endPutcharSpy(void);
char* getBufferPutcharSpy(void);

static int SetToOneToFailInTearDown;
static int SetToOneMeanWeAlreadyCheckedThisGuy;

void setUp(void)
{
    SetToOneToFailInTearDown = 0;
    SetToOneMeanWeAlreadyCheckedThisGuy = 0;
}

void tearDown(void)
{
    endPutcharSpy(); /* Stop suppressing test output */
    if (SetToOneToFailInTearDown == 1)
    {
        /* These will be skipped internally if already failed/ignored */
        TEST_FAIL_MESSAGE("<= Failed in tearDown");
        TEST_IGNORE_MESSAGE("<= Ignored in tearDown");
    }
    if ((SetToOneMeanWeAlreadyCheckedThisGuy == 0) && (Unity.CurrentTestFailed > 0))
    {
        UnityPrint(": [[[[ Test Should Have Passed But Did Not ]]]]");
        UNITY_OUTPUT_CHAR('\n');
    }
}

void testUnitySizeInitializationReminder(void)
{
    /* This test ensures that sizeof(struct UNITY_STORAGE_T) doesn't change. If this
     * test breaks, go look at the initialization of the Unity global variable
     * in unity.c and make sure we're filling in the proper fields. */
    const char* message = "Unexpected size for UNITY_STORAGE_T struct. Please check that "
                     "the initialization of the Unity symbol in unity.c is "
                     "still correct.";

    /* Define a structure with all the same fields as `struct UNITY_STORAGE_T`. */
#ifdef UNITY_EXCLUDE_DETAILS
    struct {
        const char* TestFile;
        const char* CurrentTestName;
        UNITY_LINE_TYPE CurrentTestLineNumber;
        UNITY_COUNTER_TYPE NumberOfTests;
        UNITY_COUNTER_TYPE TestFailures;
        UNITY_COUNTER_TYPE TestIgnores;
        UNITY_COUNTER_TYPE CurrentTestFailed;
        UNITY_COUNTER_TYPE CurrentTestIgnored;
#ifndef UNITY_EXCLUDE_SETJMP_H
        jmp_buf AbortFrame;
#endif
    } _Expected_Unity;
#else
    struct {
        const char* TestFile;
        const char* CurrentTestName;
        const char* CurrentDetails1;
        const char* CurrentDetails2;
        UNITY_LINE_TYPE CurrentTestLineNumber;
        UNITY_COUNTER_TYPE NumberOfTests;
        UNITY_COUNTER_TYPE TestFailures;
        UNITY_COUNTER_TYPE TestIgnores;
        UNITY_COUNTER_TYPE CurrentTestFailed;
        UNITY_COUNTER_TYPE CurrentTestIgnored;
#ifndef UNITY_EXCLUDE_SETJMP_H
        jmp_buf AbortFrame;
#endif
    } _Expected_Unity;
#endif

    /* Compare our fake structure's size to the actual structure's size. They
     * should be the same.
     *
     * This accounts for alignment, padding, and packing issues that might come
     * up between different architectures. */
    TEST_ASSERT_EQUAL_MESSAGE(sizeof(_Expected_Unity), sizeof(Unity), message);
}

void testPassShouldEndImmediatelyWithPass(void)
{
    TEST_PASS();
    TEST_FAIL_MESSAGE("We should have passed already and finished this test");
}

void testTrue(void)
{
    TEST_ASSERT(1);

    TEST_ASSERT_TRUE(1);
}

void testFalse(void)
{
    TEST_ASSERT_FALSE(0);

    TEST_ASSERT_UNLESS(0);
}

void testPreviousPass(void)
{
    TEST_ASSERT_EQUAL_INT(0U, Unity.TestFailures);
}

void testNotVanilla(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT(0);
    VERIFY_FAILS_END
}

void testNotTrue(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_TRUE(0);
    VERIFY_FAILS_END
}

void testNotFalse(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FALSE(1);
    VERIFY_FAILS_END
}

void testNotUnless(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UNLESS(1);
    VERIFY_FAILS_END
}

void testNotNotEqual(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_NOT_EQUAL(10, 10);
    VERIFY_FAILS_END
}

void testFail(void)
{
    EXPECT_ABORT_BEGIN
    TEST_FAIL_MESSAGE("Expected for testing");
    VERIFY_FAILS_END
}

void testIsNull(void)
{
    char* ptr1 = NULL;
    const char* ptr2 = "hello";

    TEST_ASSERT_NULL(ptr1);
    TEST_ASSERT_NOT_NULL(ptr2);
}

void testIsNullShouldFailIfNot(void)
{
    const char* ptr1 = "hello";

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_NULL(ptr1);
    VERIFY_FAILS_END
}

void testNotNullShouldFailIfNULL(void)
{
    char* ptr1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_NOT_NULL(ptr1);
    VERIFY_FAILS_END
}

void testIgnore(void)
{
    EXPECT_ABORT_BEGIN
    TEST_IGNORE();
    TEST_FAIL_MESSAGE("This should not be reached");
    VERIFY_IGNORES_END
}

void testIgnoreMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_IGNORE_MESSAGE("This is an expected TEST_IGNORE_MESSAGE string!");
    TEST_FAIL_MESSAGE("This should not be reached");
    VERIFY_IGNORES_END
}

void testNotEqualInts(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT(3982, 3983);
    VERIFY_FAILS_END
}

void testNotEqualInt8s(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT8(-127, -126);
    VERIFY_FAILS_END
}

void testNotEqualInt16s(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT16(-16383, -16382);
    VERIFY_FAILS_END
}

void testNotEqualInt32s(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT32(-2147483647, -2147483648); //use largest 32 bit negative to test printability
    VERIFY_FAILS_END
}

void testNotEqualBits(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_BITS(0xFF00, 0x5555, 0x5A55);
    VERIFY_FAILS_END
}

void testNotEqualUInts(void)
{
    UNITY_UINT16 v0, v1;

    v0 = 9000;
    v1 = 9001;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualUInt8s(void)
{
    UNITY_UINT8 v0, v1;

    v0 = 254;
    v1 = 255;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT8(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualUInt16s(void)
{
    UNITY_UINT16 v0, v1;

    v0 = 65535;
    v1 = 65534;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT16(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualUInt32s(void)
{
    UNITY_UINT32 v0, v1;

    v0 = 4294967295;
    v1 = 4294967294;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT32(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex8s(void)
{
    UNITY_UINT8 v0, v1;

    v0 = 0x23;
    v1 = 0x22;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex8sIfSigned(void)
{
    UNITY_INT8 v0, v1;

    v0 = -2;
    v1 = 2;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex16s(void)
{
    UNITY_UINT16 v0, v1;

    v0 = 0x1234;
    v1 = 0x1235;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX16(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex16sIfSigned(void)
{
    UNITY_INT16 v0, v1;

    v0 = -1024;
    v1 = -1028;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX16(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex32s(void)
{
    UNITY_UINT32 v0, v1;

    v0 = 900000;
    v1 = 900001;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32(v0, v1);
    VERIFY_FAILS_END
}

void testNotEqualHex32sIfSigned(void)
{
    UNITY_INT32 v0, v1;

    v0 = -900000;
    v1 = 900001;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32(v0, v1);
    VERIFY_FAILS_END
}

void testEqualInts(void)
{
    int v0, v1;
    int *p0, *p1;

    v0 = 19467;
    v1 = 19467;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT(1837, 1837);
    TEST_ASSERT_EQUAL_INT(-27365, -27365);
    TEST_ASSERT_EQUAL_INT(v0, v1);
    TEST_ASSERT_EQUAL_INT(19467, v1);
    TEST_ASSERT_EQUAL_INT(v0, 19467);
    TEST_ASSERT_EQUAL_INT(*p0, v1);
    TEST_ASSERT_EQUAL_INT(*p0, *p1);
    TEST_ASSERT_EQUAL_INT(*p0, 19467);
}

void testEqualInt8s(void)
{
    UNITY_INT8 v0, v1;
    UNITY_INT8 *p0, *p1;

    v0 = 0x22;
    v1 = 0x22;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT8(0x22, 0x22);
    TEST_ASSERT_EQUAL_INT8(v0, v1);
    TEST_ASSERT_EQUAL_INT8(0x22, v1);
    TEST_ASSERT_EQUAL_INT8(v0, 0x22);
    TEST_ASSERT_EQUAL_INT8(*p0, v1);
    TEST_ASSERT_EQUAL_INT8(*p0, *p1);
    TEST_ASSERT_EQUAL_INT8(*p0, 0x22);
}

void testEqualInt8sWhenThereAreDifferencesOutside8Bits(void)
{
    TEST_ASSERT_EQUAL_INT8(0x321,0x421);
    TEST_ASSERT_EQUAL_INT8(0xFF21,0x0021);
}

void testEqualInt16s(void)
{
    UNITY_INT16 v0, v1;
    UNITY_INT16 *p0, *p1;

    v0 = 0x7876;
    v1 = 0x7876;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT16(0x7876, 0x7876);
    TEST_ASSERT_EQUAL_INT16(v0, v1);
    TEST_ASSERT_EQUAL_INT16(0x7876, v1);
    TEST_ASSERT_EQUAL_INT16(v0, 0x7876);
    TEST_ASSERT_EQUAL_INT16(*p0, v1);
    TEST_ASSERT_EQUAL_INT16(*p0, *p1);
    TEST_ASSERT_EQUAL_INT16(*p0, 0x7876);
}

void testEqualInt16sNegatives(void)
{
    UNITY_INT16 v0, v1;
    UNITY_INT16 *p0, *p1;

    v0 = -7876;
    v1 = -7876;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT16(-7876, -7876);
    TEST_ASSERT_EQUAL_INT16(v0, v1);
    TEST_ASSERT_EQUAL_INT16(-7876, v1);
    TEST_ASSERT_EQUAL_INT16(v0, -7876);
    TEST_ASSERT_EQUAL_INT16(*p0, v1);
    TEST_ASSERT_EQUAL_INT16(*p0, *p1);
    TEST_ASSERT_EQUAL_INT16(*p0, -7876);
}

void testEqualInt16sWhenThereAreDifferencesOutside16Bits(void)
{
    TEST_ASSERT_EQUAL_INT16(0x54321,0x64321);
    TEST_ASSERT_EQUAL_INT16(0xFFFF4321,0x00004321);
}

void testEqualInt32s(void)
{
    UNITY_INT32 v0, v1;
    UNITY_INT32 *p0, *p1;

    v0 = 0x78760000;
    v1 = 0x78760000;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT32(0x78760000, 0x78760000);
    TEST_ASSERT_EQUAL_INT32(v0, v1);
    TEST_ASSERT_EQUAL_INT32(0x78760000, v1);
    TEST_ASSERT_EQUAL_INT32(v0, 0x78760000);
    TEST_ASSERT_EQUAL_INT32(*p0, v1);
    TEST_ASSERT_EQUAL_INT32(*p0, *p1);
    TEST_ASSERT_EQUAL_INT32(*p0, 0x78760000);
}

void testEqualInt32sNegatives(void)
{
    UNITY_INT32 v0, v1;
    UNITY_INT32 *p0, *p1;

    v0 = -123456789;
    v1 = -123456789;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT32(-123456789, -123456789);
    TEST_ASSERT_EQUAL_INT32(v0, v1);
    TEST_ASSERT_EQUAL_INT32(-123456789, v1);
    TEST_ASSERT_EQUAL_INT32(v0, -123456789);
    TEST_ASSERT_EQUAL_INT32(*p0, v1);
    TEST_ASSERT_EQUAL_INT32(*p0, *p1);
    TEST_ASSERT_EQUAL_INT32(*p0, -123456789);
}


void testEqualUints(void)
{
    unsigned int v0, v1;
    unsigned int *p0, *p1;

    v0 = 19467;
    v1 = 19467;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT(1837, 1837);
    TEST_ASSERT_EQUAL_UINT(v0, v1);
    TEST_ASSERT_EQUAL_UINT(19467, v1);
    TEST_ASSERT_EQUAL_UINT(v0, 19467);
    TEST_ASSERT_EQUAL_UINT(*p0, v1);
    TEST_ASSERT_EQUAL_UINT(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT(*p0, 19467);
    TEST_ASSERT_EQUAL_UINT(60872u, 60872u);
}


void testEqualUint8s(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0x22;
    v1 = 0x22;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT8(0x22, 0x22);
    TEST_ASSERT_EQUAL_UINT8(v0, v1);
    TEST_ASSERT_EQUAL_UINT8(0x22, v1);
    TEST_ASSERT_EQUAL_UINT8(v0, 0x22);
    TEST_ASSERT_EQUAL_UINT8(*p0, v1);
    TEST_ASSERT_EQUAL_UINT8(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT8(*p0, 0x22);
}

void testEqualUint8sWhenThereAreDifferencesOutside8Bits(void)
{
    TEST_ASSERT_EQUAL_UINT8(0x321,0x421);
    TEST_ASSERT_EQUAL_UINT8(0xFF21,0x0021);
}

void testEqualUint16s(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 0x9876;
    v1 = 0x9876;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT16(0x9876, 0x9876);
    TEST_ASSERT_EQUAL_UINT16(v0, v1);
    TEST_ASSERT_EQUAL_UINT16(0x9876, v1);
    TEST_ASSERT_EQUAL_UINT16(v0, 0x9876);
    TEST_ASSERT_EQUAL_UINT16(*p0, v1);
    TEST_ASSERT_EQUAL_UINT16(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT16(*p0, 0x9876);
}

void testEqualUint16sWhenThereAreDifferencesOutside16Bits(void)
{
    TEST_ASSERT_EQUAL_UINT16(0x54321,0x64321);
    TEST_ASSERT_EQUAL_UINT16(0xFFFF4321,0x00004321);
}

void testEqualUint32s(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 0x98760000;
    v1 = 0x98760000;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT32(0x98760000, 0x98760000);
    TEST_ASSERT_EQUAL_UINT32(v0, v1);
    TEST_ASSERT_EQUAL_UINT32(0x98760000, v1);
    TEST_ASSERT_EQUAL_UINT32(v0, 0x98760000);
    TEST_ASSERT_EQUAL_UINT32(*p0, v1);
    TEST_ASSERT_EQUAL_UINT32(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT32(*p0, 0x98760000);
}

void testNotEqual(void)
{
    TEST_ASSERT_NOT_EQUAL(0, 1);
    TEST_ASSERT_NOT_EQUAL(1, 0);
    TEST_ASSERT_NOT_EQUAL(100, 101);
    TEST_ASSERT_NOT_EQUAL(0, -1);
    TEST_ASSERT_NOT_EQUAL(65535, -65535);
    TEST_ASSERT_NOT_EQUAL(75, 900);
    TEST_ASSERT_NOT_EQUAL(-100, -101);
}

void testEqualHex8s(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0x22;
    v1 = 0x22;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_HEX8(0x22, 0x22);
    TEST_ASSERT_EQUAL_HEX8(v0, v1);
    TEST_ASSERT_EQUAL_HEX8(0x22, v1);
    TEST_ASSERT_EQUAL_HEX8(v0, 0x22);
    TEST_ASSERT_EQUAL_HEX8(*p0, v1);
    TEST_ASSERT_EQUAL_HEX8(*p0, *p1);
    TEST_ASSERT_EQUAL_HEX8(*p0, 0x22);
}

void testEqualHex8sWhenThereAreDifferencesOutside8Bits(void)
{
    TEST_ASSERT_EQUAL_HEX8(0x321,0x421);
    TEST_ASSERT_EQUAL_HEX8(0xFF21,0x0021);
}

void testEqualHex8sNegatives(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0xDD;
    v1 = 0xDD;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_HEX8(0xDD, 0xDD);
    TEST_ASSERT_EQUAL_HEX8(v0, v1);
    TEST_ASSERT_EQUAL_HEX8(0xDD, v1);
    TEST_ASSERT_EQUAL_HEX8(v0, 0xDD);
    TEST_ASSERT_EQUAL_HEX8(*p0, v1);
    TEST_ASSERT_EQUAL_HEX8(*p0, *p1);
    TEST_ASSERT_EQUAL_HEX8(*p0, 0xDD);
}

void testEqualHex16s(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 0x9876;
    v1 = 0x9876;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_HEX16(0x9876, 0x9876);
    TEST_ASSERT_EQUAL_HEX16(v0, v1);
    TEST_ASSERT_EQUAL_HEX16(0x9876, v1);
    TEST_ASSERT_EQUAL_HEX16(v0, 0x9876);
    TEST_ASSERT_EQUAL_HEX16(*p0, v1);
    TEST_ASSERT_EQUAL_HEX16(*p0, *p1);
    TEST_ASSERT_EQUAL_HEX16(*p0, 0x9876);
}

void testEqualHex16sWhenThereAreDifferencesOutside16Bits(void)
{
    TEST_ASSERT_EQUAL_HEX16(0x54321,0x64321);
    TEST_ASSERT_EQUAL_HEX16(0xFFFF4321,0x00004321);
}

void testEqualHex32s(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 0x98765432ul;
    v1 = 0x98765432ul;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_HEX32(0x98765432ul, 0x98765432ul);
    TEST_ASSERT_EQUAL_HEX32(v0, v1);
    TEST_ASSERT_EQUAL_HEX32(0x98765432ul, v1);
    TEST_ASSERT_EQUAL_HEX32(v0, 0x98765432ul);
    TEST_ASSERT_EQUAL_HEX32(*p0, v1);
    TEST_ASSERT_EQUAL_HEX32(*p0, *p1);
    TEST_ASSERT_EQUAL_HEX32(*p0, 0x98765432ul);
}

void testEqualBits(void)
{
    UNITY_UINT32 v0 = 0xFF55AA00;
    UNITY_UINT32 v1 = 0x55550000;

    TEST_ASSERT_BITS(v1, v0, 0x55550000);
    TEST_ASSERT_BITS(v1, v0, 0xFF55CC00);
    TEST_ASSERT_BITS(0xFFFFFFFF, v0, 0xFF55AA00);
    TEST_ASSERT_BITS(0xFFFFFFFF, v0, v0);
    TEST_ASSERT_BITS(0xF0F0F0F0, v0, 0xFC5DAE0F);
    TEST_ASSERT_BITS_HIGH(v1, v0);
    TEST_ASSERT_BITS_LOW(0x000055FF, v0);
    TEST_ASSERT_BIT_HIGH(30, v0);
    TEST_ASSERT_BIT_LOW(5, v0);
}

void testNotEqualBitHigh(void)
{
    UNITY_UINT32 v0 = 0x7F55AA00;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_BIT_HIGH(31, v0);
    VERIFY_FAILS_END
}

void testNotEqualBitLow(void)
{
    UNITY_UINT32 v0 = 0xFF55AA00;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_BIT_LOW(30, v0);
    VERIFY_FAILS_END
}

void testNotEqualBitsHigh(void)
{
    UNITY_UINT32 v0 = 0xFF55AA00;
    UNITY_UINT32 v1 = 0x55550000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_BITS_HIGH(v0, v1);
    VERIFY_FAILS_END

}

void testNotEqualBitsLow(void)
{
    UNITY_UINT32 v0 = 0xFF55AA00;
    UNITY_UINT32 v1 = 0x55550000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_BITS_LOW(v0, v1);
    VERIFY_FAILS_END
}


void testEqualShorts(void)
{
    short v0, v1;
    short *p0, *p1;

    v0 = 19467;
    v1 = 19467;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT(1837, 1837);
    TEST_ASSERT_EQUAL_INT(-2987, -2987);
    TEST_ASSERT_EQUAL_INT(v0, v1);
    TEST_ASSERT_EQUAL_INT(19467, v1);
    TEST_ASSERT_EQUAL_INT(v0, 19467);
    TEST_ASSERT_EQUAL_INT(*p0, v1);
    TEST_ASSERT_EQUAL_INT(*p0, *p1);
    TEST_ASSERT_EQUAL_INT(*p0, 19467);
}

void testEqualUShorts(void)
{
    unsigned short v0, v1;
    unsigned short *p0, *p1;

    v0 = 19467;
    v1 = 19467;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT(1837, 1837);
    TEST_ASSERT_EQUAL_UINT(2987, 2987);
    TEST_ASSERT_EQUAL_UINT(v0, v1);
    TEST_ASSERT_EQUAL_UINT(19467, v1);
    TEST_ASSERT_EQUAL_UINT(v0, 19467);
    TEST_ASSERT_EQUAL_UINT(*p0, v1);
    TEST_ASSERT_EQUAL_UINT(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT(*p0, 19467);
}

void testEqualChars(void)
{
    signed char v0, v1;
    signed char *p0, *p1;

    v0 = 109;
    v1 = 109;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT(42, 42);
    TEST_ASSERT_EQUAL_INT(-116, -116);
    TEST_ASSERT_EQUAL_INT(v0, v1);
    TEST_ASSERT_EQUAL_INT(109, v1);
    TEST_ASSERT_EQUAL_INT(v0, 109);
    TEST_ASSERT_EQUAL_INT(*p0, v1);
    TEST_ASSERT_EQUAL_INT(*p0, *p1);
    TEST_ASSERT_EQUAL_INT(*p0, 109);
}

void testEqualUChars(void)
{
    unsigned char v0, v1;
    unsigned char *p0, *p1;

    v0 = 251;
    v1 = 251;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT(42, 42);
    TEST_ASSERT_EQUAL_INT(v0, v1);
    TEST_ASSERT_EQUAL_INT(251, v1);
    TEST_ASSERT_EQUAL_INT(v0, 251);
    TEST_ASSERT_EQUAL_INT(*p0, v1);
    TEST_ASSERT_EQUAL_INT(*p0, *p1);
    TEST_ASSERT_EQUAL_INT(*p0, 251);
}

void testEqualPointers(void)
{
    int v0, v1;
    int *p0, *p1, *p2;

    v0 = 19467;
    v1 = 18271;
    p0 = &v0;
    p1 = &v1;
    p2 = &v1;

    TEST_ASSERT_EQUAL_PTR(p0, &v0);
    TEST_ASSERT_EQUAL_PTR(&v1, p1);
    TEST_ASSERT_EQUAL_PTR(p2, p1);
    TEST_ASSERT_EQUAL_PTR(&v0, &v0);
}

void testNotEqualPointers(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR(0x12345678, 0x12345677);
    VERIFY_FAILS_END
}

void testIntsWithinDelta(void)
{
    TEST_ASSERT_INT_WITHIN(1, 5000, 5001);
    TEST_ASSERT_INT_WITHIN(5, 5000, 4996);
    TEST_ASSERT_INT_WITHIN(5, 5000, 5005);
    TEST_ASSERT_INT_WITHIN(500, 50, -440);

    TEST_ASSERT_INT_WITHIN(2, -1, -1);
    TEST_ASSERT_INT_WITHIN(5, 1, -1);
    TEST_ASSERT_INT_WITHIN(5, -1, 1);
}

void testIntsWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_INT_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_INT_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_INT_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
    TEST_ASSERT_INT_WITHIN_MESSAGE(500, 50, -440, "Custom Message.");

    TEST_ASSERT_INT_WITHIN_MESSAGE(2, -1, -1, "Custom Message.");
    TEST_ASSERT_INT_WITHIN_MESSAGE(5, 1, -1, "Custom Message.");
    TEST_ASSERT_INT_WITHIN_MESSAGE(5, -1, 1, "Custom Message.");
}

void testIntsNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT_WITHIN(5, 5000, 5006);
    VERIFY_FAILS_END
}

void testIntsNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT_WITHIN_MESSAGE(5, 5000, 5006, "Custom Message.");
    VERIFY_FAILS_END
}

void testUIntsWithinDelta(void)
{
    TEST_ASSERT_UINT_WITHIN(1, 5000, 5001);
    TEST_ASSERT_UINT_WITHIN(5, 5000, 4996);
    TEST_ASSERT_UINT_WITHIN(5, 5000, 5005);
}

void testUIntsWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_UINT_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_UINT_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_UINT_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
}

void testUIntsNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN(1, 2147483647u, 2147483649u);
    VERIFY_FAILS_END
}

void testUIntsNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN_MESSAGE(1, 2147483647u, 2147483649u, "Custom Message.");
    VERIFY_FAILS_END
}

void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirst(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN(5, 1, -1);
    VERIFY_FAILS_END
}

void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirstAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN_MESSAGE(5, 1, -1, "Custom Message.");
    VERIFY_FAILS_END
}

void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirst(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN(5, -1, 1);
    VERIFY_FAILS_END
}

void testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirstAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT_WITHIN_MESSAGE(5, -1, 1, "Custom Message.");
    VERIFY_FAILS_END
}

void testHEX32sWithinDelta(void)
{
    TEST_ASSERT_HEX32_WITHIN(1, 5000, 5001);
    TEST_ASSERT_HEX32_WITHIN(5, 5000, 4996);
    TEST_ASSERT_HEX32_WITHIN(5, 5000, 5005);
}

void testHEX32sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_HEX32_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_HEX32_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_HEX32_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
}

void testHEX32sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX32_WITHIN(1, 2147483647u, 2147483649u);
    VERIFY_FAILS_END
}

void testHEX32sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX32_WITHIN_MESSAGE(1, 2147483647u, 2147483649u, "Custom Message.");
    VERIFY_FAILS_END
}

void testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPass(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX32_WITHIN(5, 1, -1);
    VERIFY_FAILS_END
}

void testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX32_WITHIN_MESSAGE(5, 1, -1, "Custom Message.");
    VERIFY_FAILS_END
}

void testHEX16sWithinDelta(void)
{
    TEST_ASSERT_HEX16_WITHIN(1, 5000, 5001);
    TEST_ASSERT_HEX16_WITHIN(5, 5000, 4996);
    TEST_ASSERT_HEX16_WITHIN(5, 5000, 5005);
}

void testHEX16sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_HEX16_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_HEX16_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_HEX16_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
}

void testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits(void)
{
    TEST_ASSERT_HEX16_WITHIN(5, 0x54321, 0x44321);
}

void testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage(void)
{
    TEST_ASSERT_HEX16_WITHIN_MESSAGE(5, 0x54321, 0x44321, "Custom Message.");
}

void testHEX16sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX16_WITHIN(2, 65535, 0);
    VERIFY_FAILS_END
}

void testHEX16sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX16_WITHIN_MESSAGE(2, 65535, 0, "Custom Message.");
    VERIFY_FAILS_END
}

void testHEX8sWithinDelta(void)
{
    TEST_ASSERT_HEX8_WITHIN(1, 254, 255);
    TEST_ASSERT_HEX8_WITHIN(5, 251, 255);
    TEST_ASSERT_HEX8_WITHIN(5, 1, 4);
}

void testHEX8sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_HEX8_WITHIN_MESSAGE(1, 254, 255, "Custom Message.");
    TEST_ASSERT_HEX8_WITHIN_MESSAGE(5, 251, 255, "Custom Message.");
    TEST_ASSERT_HEX8_WITHIN_MESSAGE(5, 1, 4, "Custom Message.");
}

void testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits(void)
{
    TEST_ASSERT_HEX8_WITHIN(5, 0x123, 0xF23);
}

void testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage(void)
{
    TEST_ASSERT_HEX8_WITHIN_MESSAGE(5, 0x123, 0xF23, "Custom Message.");
}

void testHEX8sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX8_WITHIN(2, 255, 0);
    VERIFY_FAILS_END
}

void testHEX8sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX8_WITHIN_MESSAGE(2, 255, 0, "Custom Message.");
    VERIFY_FAILS_END
}

//-----------------

void testUINT32sWithinDelta(void)
{
    TEST_ASSERT_UINT32_WITHIN(1, 5000, 5001);
    TEST_ASSERT_UINT32_WITHIN(5, 5000, 4996);
    TEST_ASSERT_UINT32_WITHIN(5, 5000, 5005);
}

void testUINT32sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_UINT32_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_UINT32_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_UINT32_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
}

void testUINT32sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT32_WITHIN(1, 2147483647u, 2147483649u);
    VERIFY_FAILS_END
}

void testUINT32sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT32_WITHIN_MESSAGE(1, 2147483647u, 2147483649u, "Custom Message.");
    VERIFY_FAILS_END
}

void testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPass(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT32_WITHIN(5, 1, -1);
    VERIFY_FAILS_END
}

void testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT32_WITHIN_MESSAGE(5, 1, -1, "Custom Message.");
    VERIFY_FAILS_END
}

void testUINT16sWithinDelta(void)
{
    TEST_ASSERT_UINT16_WITHIN(1, 5000, 5001);
    TEST_ASSERT_UINT16_WITHIN(5, 5000, 4996);
    TEST_ASSERT_UINT16_WITHIN(5, 5000, 5005);
}

void testUINT16sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_UINT16_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
    TEST_ASSERT_UINT16_WITHIN_MESSAGE(5, 5000, 4996, "Custom Message.");
    TEST_ASSERT_UINT16_WITHIN_MESSAGE(5, 5000, 5005, "Custom Message.");
}

void testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits(void)
{
    TEST_ASSERT_UINT16_WITHIN(5, 0x54321, 0x44321);
}

void testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage(void)
{
    TEST_ASSERT_UINT16_WITHIN_MESSAGE(5, 0x54321, 0x44321, "Custom Message.");
}

void testUINT16sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT16_WITHIN(2, 65535, 0);
    VERIFY_FAILS_END
}

void testUINT16sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT16_WITHIN_MESSAGE(2, 65535, 0, "Custom Message.");
    VERIFY_FAILS_END
}

void testUINT8sWithinDelta(void)
{
    TEST_ASSERT_UINT8_WITHIN(1, 254, 255);
    TEST_ASSERT_UINT8_WITHIN(5, 251, 255);
    TEST_ASSERT_UINT8_WITHIN(5, 1, 4);
}

void testUINT8sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_UINT8_WITHIN_MESSAGE(1, 254, 255, "Custom Message.");
    TEST_ASSERT_UINT8_WITHIN_MESSAGE(5, 251, 255, "Custom Message.");
    TEST_ASSERT_UINT8_WITHIN_MESSAGE(5, 1, 4, "Custom Message.");
}

void testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits(void)
{
    TEST_ASSERT_UINT8_WITHIN(5, 0x123, 0xF23);
}

void testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage(void)
{
    TEST_ASSERT_UINT8_WITHIN_MESSAGE(5, 0x123, 0xF23, "Custom Message.");
}

void testUINT8sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT8_WITHIN(2, 255, 0);
    VERIFY_FAILS_END
}

void testUINT8sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT8_WITHIN_MESSAGE(2, 255, 0, "Custom Message.");
    VERIFY_FAILS_END
}

void testINT32sWithinDelta(void)
{
    TEST_ASSERT_INT32_WITHIN(1, 5000, 5001);
    TEST_ASSERT_INT32_WITHIN(5, 1, -2);
    TEST_ASSERT_INT32_WITHIN(5, -2, 1);
}

void testINT32sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_INT32_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
}

void testINT32sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT32_WITHIN(1, -3, 1);
    VERIFY_FAILS_END
}

void testINT32sNotWithinDeltaAndDifferenceOverflows(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT32_WITHIN(1, -1, 0x7FFFFFFF);
    VERIFY_FAILS_END
}
void testINT32sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT32_WITHIN_MESSAGE(1, -2, 1, "Custom Message.");
    VERIFY_FAILS_END
}

void testINT16sWithinDelta(void)
{
    TEST_ASSERT_INT16_WITHIN(1, 5000, 5001);
    TEST_ASSERT_INT16_WITHIN(5, 2, -2);
    TEST_ASSERT_INT16_WITHIN(5, -2, 2);
}

void testINT16sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_INT16_WITHIN_MESSAGE(1, 5000, 5001, "Custom Message.");
}

void testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits(void)
{
    TEST_ASSERT_INT16_WITHIN(5, 0x54321, 0x44321);
}

void testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage(void)
{
    TEST_ASSERT_INT16_WITHIN_MESSAGE(5, 0x54321, 0x44321, "Custom Message.");
}

void testINT16sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT16_WITHIN(2, 4, -2);
    VERIFY_FAILS_END
}

void testINT16sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT16_WITHIN_MESSAGE(2, 3, 0, "Custom Message.");
    VERIFY_FAILS_END
}

void testINT8sWithinDelta(void)
{
    TEST_ASSERT_INT8_WITHIN(1, 127, 126);
    TEST_ASSERT_INT8_WITHIN(5, -2, 2);
    TEST_ASSERT_INT8_WITHIN(5, 2, -2);
}

void testINT8sWithinDeltaAndCustomMessage(void)
{
    TEST_ASSERT_INT8_WITHIN_MESSAGE(5, 1, 4, "Custom Message.");
}

void testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits(void)
{
    TEST_ASSERT_INT8_WITHIN(5, 0x123, 0xF23);
}

void testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage(void)
{
    TEST_ASSERT_INT8_WITHIN_MESSAGE(5, 0x123, 0xF23, "Custom Message.");
}

void testINT8sNotWithinDelta(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT8_WITHIN(2, -3, 0);
    VERIFY_FAILS_END
}

void testINT8sNotWithinDeltaAndCustomMessage(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT8_WITHIN_MESSAGE(2, -4, 0, "Custom Message.");
    VERIFY_FAILS_END
}


//-----------------
void testGreaterThan(void)
{
    UNITY_INT v0, v1;
    UNITY_INT *p0, *p1;

    v0 = 0;
    v1 = 1;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN(v0, v1);
    TEST_ASSERT_GREATER_THAN(*p0, v1);
    TEST_ASSERT_GREATER_THAN(v0, *p1);
    TEST_ASSERT_GREATER_THAN(*p0, *p1);
}

void testGreaterThanINT(void)
{
    UNITY_INT v0, v1;
    UNITY_INT *p0, *p1;

    v0 = 302;
    v1 = 3334;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_INT(v0, v1);
    TEST_ASSERT_GREATER_THAN_INT(*p0, v1);
    TEST_ASSERT_GREATER_THAN_INT(v0, *p1);
    TEST_ASSERT_GREATER_THAN_INT(*p0, *p1);
}


void testGreaterThanINT8(void)
{
    UNITY_INT8 v0, v1;
    UNITY_INT8 *p0, *p1;

    v0 = -128;
    v1 = 127;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_INT8(v0, v1);
    TEST_ASSERT_GREATER_THAN_INT8(*p0, v1);
    TEST_ASSERT_GREATER_THAN_INT8(v0, *p1);
    TEST_ASSERT_GREATER_THAN_INT8(*p0, *p1);
}

void testGreaterThanINT16(void)
{
    UNITY_INT16 v0, v1;
    UNITY_INT16 *p0, *p1;

    v0 = -32768;
    v1 = 32767;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_INT16(v0, v1);
    TEST_ASSERT_GREATER_THAN_INT16(*p0, v1);
    TEST_ASSERT_GREATER_THAN_INT16(v0, *p1);
    TEST_ASSERT_GREATER_THAN_INT16(*p0, *p1);
}

void testGreaterThanINT32(void)
{
    UNITY_INT32 v0, v1;
    UNITY_INT32 *p0, *p1;

    v0 = -214783648;
    v1 = 214783647;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_INT32(v0, v1);
    TEST_ASSERT_GREATER_THAN_INT32(*p0, v1);
    TEST_ASSERT_GREATER_THAN_INT32(v0, *p1);
    TEST_ASSERT_GREATER_THAN_INT32(*p0, *p1);
}

void testGreaterThanUINT(void)
{
    UNITY_UINT v0, v1;
    UNITY_UINT *p0, *p1;

    v0 = 0;
    v1 = 1;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_UINT(v0, v1);
    TEST_ASSERT_GREATER_THAN_UINT(*p0, v1);
    TEST_ASSERT_GREATER_THAN_UINT(v0, *p1);
    TEST_ASSERT_GREATER_THAN_UINT(*p0, *p1);
}


void testGreaterThanUINT8(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0;
    v1 = 255;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_UINT8(v0, v1);
    TEST_ASSERT_GREATER_THAN_UINT8(*p0, v1);
    TEST_ASSERT_GREATER_THAN_UINT8(v0, *p1);
    TEST_ASSERT_GREATER_THAN_UINT8(*p0, *p1);
}

void testGreaterThanUINT16(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 0;
    v1 = 65535;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_UINT16(v0, v1);
    TEST_ASSERT_GREATER_THAN_UINT16(*p0, v1);
    TEST_ASSERT_GREATER_THAN_UINT16(v0, *p1);
    TEST_ASSERT_GREATER_THAN_UINT16(*p0, *p1);
}

void testGreaterThanUINT32(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 0;
    v1 = 4294967295;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_UINT32(v0, v1);
    TEST_ASSERT_GREATER_THAN_UINT32(*p0, v1);
    TEST_ASSERT_GREATER_THAN_UINT32(v0, *p1);
    TEST_ASSERT_GREATER_THAN_UINT32(*p0, *p1);
}

void testGreaterThanHEX8(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0x00;
    v1 = 0xFF;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_HEX8(v0, v1);
    TEST_ASSERT_GREATER_THAN_HEX8(*p0, v1);
    TEST_ASSERT_GREATER_THAN_HEX8(v0, *p1);
    TEST_ASSERT_GREATER_THAN_HEX8(*p0, *p1);
}

void testGreaterThanHEX16(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 0x0000;
    v1 = 0xFFFF;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_HEX16(v0, v1);
    TEST_ASSERT_GREATER_THAN_HEX16(*p0, v1);
    TEST_ASSERT_GREATER_THAN_HEX16(v0, *p1);
    TEST_ASSERT_GREATER_THAN_HEX16(*p0, *p1);
}

void testGreaterThanHEX32(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 0x00000000;
    v1 = 0xFFFFFFFF;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_GREATER_THAN_HEX32(v0, v1);
    TEST_ASSERT_GREATER_THAN_HEX32(*p0, v1);
    TEST_ASSERT_GREATER_THAN_HEX32(v0, *p1);
    TEST_ASSERT_GREATER_THAN_HEX32(*p0, *p1);
}


void testNotGreaterThan(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_GREATER_THAN(0, -1);
    VERIFY_FAILS_END
}

void testLessThan(void)
{
    UNITY_INT v0, v1;
    UNITY_INT *p0, *p1;

    v0 = 0;
    v1 = -1;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN(v0, v1);
    TEST_ASSERT_LESS_THAN(*p0, v1);
    TEST_ASSERT_LESS_THAN(v0, *p1);
    TEST_ASSERT_LESS_THAN(*p0, *p1);
}

void testLessThanINT(void)
{
    UNITY_INT v0, v1;
    UNITY_INT *p0, *p1;

    v0 = 3334;
    v1 = 302;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_INT(v0, v1);
    TEST_ASSERT_LESS_THAN_INT(*p0, v1);
    TEST_ASSERT_LESS_THAN_INT(v0, *p1);
    TEST_ASSERT_LESS_THAN_INT(*p0, *p1);
}


void testLessThanINT8(void)
{
    UNITY_INT8 v0, v1;
    UNITY_INT8 *p0, *p1;

    v0 = 127;
    v1 = -128;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_INT8(v0, v1);
    TEST_ASSERT_LESS_THAN_INT8(*p0, v1);
    TEST_ASSERT_LESS_THAN_INT8(v0, *p1);
    TEST_ASSERT_LESS_THAN_INT8(*p0, *p1);
}

void testLessThanINT16(void)
{
    UNITY_INT16 v0, v1;
    UNITY_INT16 *p0, *p1;

    v0 = 32767;
    v1 = -32768;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_INT16(v0, v1);
    TEST_ASSERT_LESS_THAN_INT16(*p0, v1);
    TEST_ASSERT_LESS_THAN_INT16(v0, *p1);
    TEST_ASSERT_LESS_THAN_INT16(*p0, *p1);
}

void testLessThanINT32(void)
{
    UNITY_INT32 v0, v1;
    UNITY_INT32 *p0, *p1;

    v0 = 214783647;
    v1 = -214783648;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_INT32(v0, v1);
    TEST_ASSERT_LESS_THAN_INT32(*p0, v1);
    TEST_ASSERT_LESS_THAN_INT32(v0, *p1);
    TEST_ASSERT_LESS_THAN_INT32(*p0, *p1);
}

void testLessThanUINT(void)
{
    UNITY_UINT v0, v1;
    UNITY_UINT *p0, *p1;

    v0 = 1;
    v1 = 0;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_UINT(v0, v1);
    TEST_ASSERT_LESS_THAN_UINT(*p0, v1);
    TEST_ASSERT_LESS_THAN_UINT(v0, *p1);
    TEST_ASSERT_LESS_THAN_UINT(*p0, *p1);
}


void testLessThanUINT8(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 255;
    v1 = 0;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_UINT8(v0, v1);
    TEST_ASSERT_LESS_THAN_UINT8(*p0, v1);
    TEST_ASSERT_LESS_THAN_UINT8(v0, *p1);
    TEST_ASSERT_LESS_THAN_UINT8(*p0, *p1);
}

void testLessThanUINT16(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 65535;
    v1 = 0;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_UINT16(v0, v1);
    TEST_ASSERT_LESS_THAN_UINT16(*p0, v1);
    TEST_ASSERT_LESS_THAN_UINT16(v0, *p1);
    TEST_ASSERT_LESS_THAN_UINT16(*p0, *p1);
}

void testLessThanUINT32(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 4294967295;
    v1 = 0;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_UINT32(v0, v1);
    TEST_ASSERT_LESS_THAN_UINT32(*p0, v1);
    TEST_ASSERT_LESS_THAN_UINT32(v0, *p1);
    TEST_ASSERT_LESS_THAN_UINT32(*p0, *p1);
}

void testLessThanHEX8(void)
{
    UNITY_UINT8 v0, v1;
    UNITY_UINT8 *p0, *p1;

    v0 = 0xFF;
    v1 = 0x00;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_HEX8(v0, v1);
    TEST_ASSERT_LESS_THAN_HEX8(*p0, v1);
    TEST_ASSERT_LESS_THAN_HEX8(v0, *p1);
    TEST_ASSERT_LESS_THAN_HEX8(*p0, *p1);
}

void testLessThanHEX16(void)
{
    UNITY_UINT16 v0, v1;
    UNITY_UINT16 *p0, *p1;

    v0 = 0xFFFF;
    v1 = 0x0000;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_HEX16(v0, v1);
    TEST_ASSERT_LESS_THAN_HEX16(*p0, v1);
    TEST_ASSERT_LESS_THAN_HEX16(v0, *p1);
    TEST_ASSERT_LESS_THAN_HEX16(*p0, *p1);
}

void testLessThanHEX32(void)
{
    UNITY_UINT32 v0, v1;
    UNITY_UINT32 *p0, *p1;

    v0 = 0xFFFFFFFF;
    v1 = 0x00000000;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_LESS_THAN_HEX32(v0, v1);
    TEST_ASSERT_LESS_THAN_HEX32(*p0, v1);
    TEST_ASSERT_LESS_THAN_HEX32(v0, *p1);
    TEST_ASSERT_LESS_THAN_HEX32(*p0, *p1);
}


void testNotLessThan(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_LESS_THAN(0, 1);
    VERIFY_FAILS_END
}



//-----------------
void testEqualStrings(void)
{
    const char *testString = "foo";

    TEST_ASSERT_EQUAL_STRING(testString, testString);
    TEST_ASSERT_EQUAL_STRING_MESSAGE("foo", "foo", "foo isn't foo");
    TEST_ASSERT_EQUAL_STRING("foo", testString);
    TEST_ASSERT_EQUAL_STRING(testString, "foo");
    TEST_ASSERT_EQUAL_STRING("", "");
}

void testEqualStringsLen(void)
{
    const char *testString = "foobar";
    TEST_ASSERT_EQUAL_STRING_LEN(testString, testString, strlen(testString));
    TEST_ASSERT_EQUAL_STRING_LEN_MESSAGE("foobar", "foobaz", 5, "fooba isn't fooba");
    TEST_ASSERT_EQUAL_STRING_LEN("foo", testString, 3);
    TEST_ASSERT_EQUAL_STRING_LEN(testString, "foo", 3);
    TEST_ASSERT_EQUAL_STRING_LEN("", "", 3);
}

void testEqualStringsWithCarriageReturnsAndLineFeeds(void)
{
    const char *testString = "foo\r\nbar";

    TEST_ASSERT_EQUAL_STRING(testString, testString);
    TEST_ASSERT_EQUAL_STRING("foo\r\nbar", "foo\r\nbar");
    TEST_ASSERT_EQUAL_STRING("foo\r\nbar", testString);
    TEST_ASSERT_EQUAL_STRING(testString, "foo\r\nbar");
    TEST_ASSERT_EQUAL_STRING("", "");
}

void testNotEqualString1(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING("foo", "bar");
    VERIFY_FAILS_END
}

void testNotEqualStringLen1(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN("foobar", "foobaz", 6);
    VERIFY_FAILS_END
}

void testNotEqualString2(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING("foo", "");
    VERIFY_FAILS_END
}

void testNotEqualStringLen2(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN("foo", "", 3);
    VERIFY_FAILS_END
}

void testNotEqualString3(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING("", "bar");
    VERIFY_FAILS_END
}

void testNotEqualStringLen3(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN("", "bar", 3);
    VERIFY_FAILS_END
}

void testNotEqualString4(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING("bar\r", "bar\n");
    VERIFY_FAILS_END
}

void testNotEqualStringLen4(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN("ba\r\x16", "ba\r\n", 4);
    VERIFY_FAILS_END
}

void testNotEqualString5(void)
{
    const char str1[] = { 0x41, 0x42, 0x03, 0x00 };
    const char str2[] = { 0x41, 0x42, 0x04, 0x00 };
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING(str1, str2);
    VERIFY_FAILS_END
}

void testNotEqualString_ExpectedStringIsNull(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING(NULL, "bar");
    VERIFY_FAILS_END
}

void testNotEqualStringLen_ExpectedStringIsNull(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN(NULL, "bar", 1);
    VERIFY_FAILS_END
}

void testNotEqualString_ActualStringIsNull(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING("foo", NULL);
    VERIFY_FAILS_END
}

void testNotEqualStringLen_ActualStringIsNull(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_LEN("foo", NULL, 1);
    VERIFY_FAILS_END
}

void testEqualStringArrays(void)
{
    const char *testStrings[] = { "foo", "boo", "woo", "moo" };
    const char *expStrings[] = { "foo", "boo", "woo", "zoo" };

    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, expStrings, 3);
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 3);
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 2);
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 1);
}

void testNotEqualStringArray1(void)
{
    const char *testStrings[] = { "foo", "boo", "woo", "moo" };
    const char *expStrings[] = { "foo", "boo", "woo", "zoo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringArray2(void)
{
    const char *testStrings[] = { "zoo", "boo", "woo", "moo" };
    const char *expStrings[] = { "foo", "boo", "woo", "moo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringArray3(void)
{
    const char *testStrings[] = { "foo", "boo", "woo", NULL };
    const char *expStrings[] = { "foo", "boo", "woo", "zoo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringArray4(void)
{
    const char *testStrings[] = { "foo", "boo", "woo", "moo" };
    const char *expStrings[] = { "foo", NULL, "woo", "moo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringArray5(void)
{
    const char **testStrings = NULL;
    const char *expStrings[] = { "foo", "boo", "woo", "zoo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringArray6(void)
{
    const char *testStrings[] = { "foo", "boo", "woo", "zoo" };
    const char **expStrings = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
    VERIFY_FAILS_END
}

void testEqualStringArrayIfBothNulls(void)
{
    const char **testStrings = NULL;
    const char **expStrings = NULL;

    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 4);
}

void testNotEqualStringArrayLengthZero(void)
{
    const char *testStrings[] = {NULL};
    const char **expStrings = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_ARRAY(expStrings, testStrings, 0);
    VERIFY_FAILS_END
}

void testEqualStringEachEqual(void)
{
    const char *testStrings1[] = { "foo", "foo", "foo", "foo" };
    const char *testStrings2[] = { "boo", "boo", "boo", "zoo" };
    const char *testStrings3[] = { "", "", "", "" };

    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings1, 4);
    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings1, 1);
    TEST_ASSERT_EACH_EQUAL_STRING("boo", testStrings2, 3);
    TEST_ASSERT_EACH_EQUAL_STRING("", testStrings3, 4);
}

void testNotEqualStringEachEqual1(void)
{
    const char *testStrings[] = { "foo", "foo", "foo", "moo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringEachEqual2(void)
{
    const char *testStrings[] = { "boo", "foo", "foo", "foo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringEachEqual3(void)
{
    const char *testStrings[] = { "foo", "foo", "foo", NULL };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringEachEqual4(void)
{
    const char *testStrings[] = { "foo", "foo", "woo", "foo" };

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_STRING("foo", testStrings, 4);
    VERIFY_FAILS_END
}

void testNotEqualStringEachEqual5(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_STRING("foo", NULL, 1);
    VERIFY_FAILS_END
}

void testEqualMemory(void)
{
    const char *testString = "whatever";

    TEST_ASSERT_EQUAL_MEMORY(testString, testString, 8);
    TEST_ASSERT_EQUAL_MEMORY("whatever", "whatever", 8);
    TEST_ASSERT_EQUAL_MEMORY("whatever", testString, 8);
    TEST_ASSERT_EQUAL_MEMORY(testString, "whatever", 8);
    TEST_ASSERT_EQUAL_MEMORY(testString, "whatever", 2);
    TEST_ASSERT_EQUAL_MEMORY(NULL, NULL, 1);
}

void testNotEqualMemory1(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY("foo", "bar", 3);
    VERIFY_FAILS_END
}

void testNotEqualMemory2(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY("fool", "food", 4);
    VERIFY_FAILS_END
}

void testNotEqualMemory3(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY(NULL, "food", 4);
    VERIFY_FAILS_END
}

void testNotEqualMemory4(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY("fool", NULL, 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryLengthZero(void)
{
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY(NULL, NULL, 0);
    VERIFY_FAILS_END
}

void testEqualIntArrays(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, -2};
    int p2[] = {1, 8, 987, 2};
    int p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p3, 1);
    TEST_ASSERT_EQUAL_INT_ARRAY(NULL, NULL, 1);
}

void testNotEqualIntArraysNullExpected(void)
{
    int* p0 = NULL;
    int p1[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntArraysNullActual(void)
{
    int* p1 = NULL;
    int p0[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntArrays1(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntArrays2(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {2, 8, 987, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntArrays3(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 986, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntArraysLengthZero(void)
{
    UNITY_UINT32 p0[1] = {1};
    UNITY_UINT32 p1[1] = {1};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_ARRAY(p0, p1, 0);
    VERIFY_FAILS_END
}

void testEqualIntEachEqual(void)
{
    int p0[] = {1, 1, 1, 1};
    int p1[] = {987, 987, 987, 987};
    int p2[] = {-2, -2, -2, -3};
    int p3[] = {1, 5, 600, 700};

    TEST_ASSERT_EACH_EQUAL_INT(1, p0, 1);
    TEST_ASSERT_EACH_EQUAL_INT(1, p0, 4);
    TEST_ASSERT_EACH_EQUAL_INT(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_INT(-2, p2, 3);
    TEST_ASSERT_EACH_EQUAL_INT(1, p3, 1);
}

void testNotEqualIntEachEqualNullActual(void)
{
    int* p1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT(1, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntEachEqual1(void)
{
    int p0[] = {1, 1, 1, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT(1, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntEachEqual2(void)
{
    int p0[] = {-5, -5, -1, -5};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT(-5, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualIntEachEqual3(void)
{
    int p0[] = {1, 88, 88, 88};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT(88, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualEachEqualLengthZero(void)
{
    UNITY_UINT32 p0[1] = {1};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT(0, p0, 0);
    VERIFY_FAILS_END
}

void testEqualPtrArrays(void)
{
    char A = 1;
    char B = 2;
    char C = 3;
    char* p0[] = {&A, &B, &C};
    char* p1[] = {&A, &B, &C, &A};
    char* p2[] = {&A, &B};
    char* p3[] = {&A};

    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p0, 3);
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p1, 3);
    TEST_ASSERT_EQUAL_PTR_ARRAY(p1, p2, 2);
    TEST_ASSERT_EQUAL_PTR_ARRAY(p3, p0, 1);
}

void testNotEqualPtrArraysNullExpected(void)
{
    char A = 1;
    char B = 2;
    char** p0 = NULL;
    char* p1[] = {&A, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p1, 2);
    VERIFY_FAILS_END
}

void testNotEqualPtrArraysNullActual(void)
{
    char A = 1;
    char B = 2;
    char** p0 = NULL;
    char* p1[] = {&A, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR_ARRAY(p1, p0, 2);
    VERIFY_FAILS_END
}

void testNotEqualPtrArrays1(void)
{
    char A = 1;
    char B = 2;
    char C = 3;
    char* p0[] = {&A, &B, &C, &B};
    char* p1[] = {&A, &B, &C, &A};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualPtrArrays2(void)
{
    char A = 1;
    char B = 2;
    char C = 3;
    char* p0[] = {&B, &B, &C, &A};
    char* p1[] = {&A, &B, &C, &A};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualPtrArrays3(void)
{
    char A = 1;
    char B = 2;
    char C = 3;
    char* p0[] = {&A, &B, &B, &A};
    char* p1[] = {&A, &B, &C, &A};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_PTR_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualPtrEachEqual(void)
{
    char A = 1;
    char B = 2;
    char C = 3;
    char* p0[] = {&A, &A, &A};
    char* p1[] = {&A, &B, &C, &A};
    char* p2[] = {&B, &B};
    char* p3[] = {&C};

    TEST_ASSERT_EACH_EQUAL_PTR(&A, p0, 1);
    TEST_ASSERT_EACH_EQUAL_PTR(&A, p0, 3);
    TEST_ASSERT_EACH_EQUAL_PTR(&A, p1, 1);
    TEST_ASSERT_EACH_EQUAL_PTR(&B, p2, 2);
    TEST_ASSERT_EACH_EQUAL_PTR(&C, p3, 1);
}

void testNotEqualPtrEachEqualNullExpected(void)
{
    char A = 1;
    char B = 1;
    char* p0[] = {&A, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_PTR(&A, p0, 2);
    VERIFY_FAILS_END
}

void testNotEqualPtrEachEqualNullActual(void)
{
    char A = 1;
    char** p0 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_PTR(&A, p0, 2);
    VERIFY_FAILS_END
}

void testNotEqualPtrEachEqual1(void)
{
    char A = 1;
    char B = 1;
    char* p0[] = {&A, &A, &A, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_PTR(&A, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualPtrEachEqual2(void)
{
    char A = 1;
    char B = 1;
    char* p0[] = {&B, &B, &A, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_PTR(&B, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualPtrEachEqual3(void)
{
    char A = 1;
    char B = 1;
    char* p0[] = {&A, &B, &B, &B};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_PTR(&B, p0, 4);
    VERIFY_FAILS_END
}

void testEqualInt8Arrays(void)
{
    UNITY_INT8 p0[] = {1, 8, 117, -2};
    UNITY_INT8 p1[] = {1, 8, 117, -2};
    UNITY_INT8 p2[] = {1, 8, 117, 2};
    UNITY_INT8 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p3, 1);
}

void testNotEqualInt8Arrays(void)
{
    UNITY_INT8 p0[] = {1, 8, 36, -2};
    UNITY_INT8 p1[] = {1, 8, 36, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualInt8EachEqual(void)
{
    UNITY_INT8 p0[] = {1, 1, 1, 1};
    UNITY_INT8 p1[] = {117, 117, 117, -2};
    UNITY_INT8 p2[] = {-1, -1, 117, 2};
    UNITY_INT8 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EACH_EQUAL_INT8(1, p0, 1);
    TEST_ASSERT_EACH_EQUAL_INT8(1, p0, 4);
    TEST_ASSERT_EACH_EQUAL_INT8(117, p1, 3);
    TEST_ASSERT_EACH_EQUAL_INT8(-1, p2, 2);
    TEST_ASSERT_EACH_EQUAL_INT8(1, p3, 1);
}

void testNotEqualInt8EachEqual(void)
{
    UNITY_INT8 p0[] = {1, 8, 36, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT8(1, p0, 2);
    VERIFY_FAILS_END
}

void testEqualUIntArrays(void)
{
    unsigned int p0[] = {1, 8, 987, 65132u};
    unsigned int p1[] = {1, 8, 987, 65132u};
    unsigned int p2[] = {1, 8, 987, 2};
    unsigned int p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p3, 1);
}

void testNotEqualUIntArrays1(void)
{
    unsigned int p0[] = {1, 8, 987, 65132u};
    unsigned int p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUIntArrays2(void)
{
    unsigned int p0[] = {1, 8, 987, 65132u};
    unsigned int p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUIntArrays3(void)
{
    unsigned int p0[] = {1, 8, 987, 65132u};
    unsigned int p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualUIntEachEqual(void)
{
    unsigned int p0[] = {1, 1, 1, 1};
    unsigned int p1[] = {65132u, 65132u, 65132u, 65132u};
    unsigned int p2[] = {8, 8, 987, 2};
    unsigned int p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_UINT(1, p0, 1);
    TEST_ASSERT_EACH_EQUAL_UINT(1, p0, 4);
    TEST_ASSERT_EACH_EQUAL_UINT(65132u, p1, 4);
    TEST_ASSERT_EACH_EQUAL_UINT(8, p2, 2);
    TEST_ASSERT_EACH_EQUAL_UINT(1, p3, 1);
}

void testNotEqualUIntEachEqual1(void)
{
    unsigned int p0[] = {1, 65132u, 65132u, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUIntEachEqual2(void)
{
    unsigned int p0[] = {987, 8, 987, 987};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT(987, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUIntEachEqual3(void)
{
    unsigned int p0[] = {1, 1, 1, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT(1, p0, 4);
    VERIFY_FAILS_END
}

void testEqualInt16Arrays(void)
{
    UNITY_INT16 p0[] = {1, 8, 117, 3};
    UNITY_INT16 p1[] = {1, 8, 117, 3};
    UNITY_INT16 p2[] = {1, 8, 117, 2};
    UNITY_INT16 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p3, 1);
}

void testNotEqualInt16Arrays(void)
{
    UNITY_INT16 p0[] = {1, 8, 127, 3};
    UNITY_INT16 p1[] = {1, 8, 127, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualInt16EachEqual(void)
{
    UNITY_INT16 p0[] = {1, 1, 1, 1};
    UNITY_INT16 p1[] = {32111, 32111, 32111, 3};
    UNITY_INT16 p2[] = {-1, -1, -1, 2};
    UNITY_INT16 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EACH_EQUAL_INT16(1, p0, 1);
    TEST_ASSERT_EACH_EQUAL_INT16(1, p0, 4);
    TEST_ASSERT_EACH_EQUAL_INT16(32111, p1, 3);
    TEST_ASSERT_EACH_EQUAL_INT16(-1, p2, 3);
    TEST_ASSERT_EACH_EQUAL_INT16(1, p3, 1);
}

void testNotEqualInt16EachEqual(void)
{
    UNITY_INT16 p0[] = {127, 127, 127, 3};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT16(127, p0, 4);
    VERIFY_FAILS_END
}

void testEqualInt32Arrays(void)
{
    UNITY_INT32 p0[] = {1, 8, 117, 3};
    UNITY_INT32 p1[] = {1, 8, 117, 3};
    UNITY_INT32 p2[] = {1, 8, 117, 2};
    UNITY_INT32 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p3, 1);
}

void testNotEqualInt32Arrays(void)
{
    UNITY_INT32 p0[] = {1, 8, 127, 3};
    UNITY_INT32 p1[] = {1, 8, 127, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualInt32EachEqual(void)
{
    UNITY_INT32 p0[] = {8, 8, 8, 8};
    UNITY_INT32 p1[] = {65537, 65537, 65537, 65537};
    UNITY_INT32 p2[] = {-3, -3, -3, 2};
    UNITY_INT32 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EACH_EQUAL_INT32(8, p0, 1);
    TEST_ASSERT_EACH_EQUAL_INT32(8, p0, 4);
    TEST_ASSERT_EACH_EQUAL_INT32(65537, p1, 4);
    TEST_ASSERT_EACH_EQUAL_INT32(-3, p2, 3);
    TEST_ASSERT_EACH_EQUAL_INT32(1, p3, 1);
}

void testNotEqualInt32EachEqual(void)
{
    UNITY_INT32 p0[] = {127, 8, 127, 127};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_INT32(127, p0, 4);
    VERIFY_FAILS_END
}

void testEqualUINT8Arrays(void)
{
    UNITY_UINT8 p0[] = {1, 8, 100, 127};
    UNITY_UINT8 p1[] = {1, 8, 100, 127};
    UNITY_UINT8 p2[] = {1, 8, 100, 2};
    UNITY_UINT8 p3[] = {1, 50, 60, 70};

    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p3, 1);
}

void testNotEqualUINT8Arrays1(void)
{
    unsigned char p0[] = {1, 8, 100, 127u};
    unsigned char p1[] = {1, 8, 100, 255u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT8Arrays2(void)
{
    unsigned char p0[] = {1, 8, 100, 127u};
    unsigned char p1[] = {1, 8, 100, 255u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT8Arrays3(void)
{
    unsigned char p0[] = {1, 8, 100, 127u};
    unsigned char p1[] = {1, 8, 100, 255u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}


void testEqualUINT16Arrays(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 987, 65132u};
    unsigned short p2[] = {1, 8, 987, 2};
    unsigned short p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p3, 1);
}

void testNotEqualUINT16Arrays1(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT16Arrays2(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT16Arrays3(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualUINT32Arrays(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p2[] = {1, 8, 987, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p3, 1);
}

void testNotEqualUINT32Arrays1(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT32Arrays2(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT32Arrays3(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualHEXArrays(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p2[] = {1, 8, 987, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_HEX_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_HEX_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_HEX_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p3, 1);
}

void testNotEqualHEXArrays1(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEXArrays2(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEXArrays3(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualHEX32Arrays(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p2[] = {1, 8, 987, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p3, 1);
}

void testNotEqualHEX32Arrays1(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX32Arrays2(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX32Arrays3(void)
{
    UNITY_UINT32 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT32 p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX32_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualHEX16Arrays(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 987, 65132u};
    unsigned short p2[] = {1, 8, 987, 2};
    unsigned short p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p3, 1);
}

void testNotEqualHEX16Arrays1(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX16Arrays2(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX16Arrays3(void)
{
    unsigned short p0[] = {1, 8, 987, 65132u};
    unsigned short p1[] = {1, 8, 986, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX16_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualHEX8Arrays(void)
{
    unsigned char p0[] = {1, 8, 254u, 123};
    unsigned char p1[] = {1, 8, 254u, 123};
    unsigned char p2[] = {1, 8, 254u, 2};
    unsigned char p3[] = {1, 23, 25, 26};

    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p3, 1);
}

void testNotEqualHEX8Arrays1(void)
{
    unsigned char p0[] = {1, 8, 254u, 253u};
    unsigned char p1[] = {1, 8, 254u, 252u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX8Arrays2(void)
{
    unsigned char p0[] = {1, 8, 254u, 253u};
    unsigned char p1[] = {2, 8, 254u, 253u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX8Arrays3(void)
{
    unsigned char p0[] = {1, 8, 254u, 253u};
    unsigned char p1[] = {1, 8, 255u, 253u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
}

void testEqualUINT8EachEqual(void)
{
    UNITY_UINT8 p0[] = {127u, 127u, 127u, 127u};
    UNITY_UINT8 p1[] = {1u, 1u, 1u, 1u};
    UNITY_UINT8 p2[] = {128u, 128u, 128u, 2u};
    UNITY_UINT8 p3[] = {1u, 50u, 60u, 70u};

    TEST_ASSERT_EACH_EQUAL_UINT8(127u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_UINT8(127u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_UINT8(1u, p1, 4);
    TEST_ASSERT_EACH_EQUAL_UINT8(128u, p2, 3);
    TEST_ASSERT_EACH_EQUAL_UINT8(1u, p3, 1);
}

void testNotEqualUINT8EachEqual1(void)
{
    unsigned char p0[] = {127u, 127u, 128u, 127u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT8(127u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT8EachEqual2(void)
{
    unsigned char p0[] = {1, 1, 1, 127u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT8(1, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT8EachEqual3(void)
{
    unsigned char p0[] = {54u, 55u, 55u, 55u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT8(55u, p0, 4);
    VERIFY_FAILS_END
}

void testEqualUINT16EachEqual(void)
{
    unsigned short p0[] = {65132u, 65132u, 65132u, 65132u};
    unsigned short p1[] = {987, 987, 987, 987};
    unsigned short p2[] = {1, 1, 1, 2};
    unsigned short p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_UINT16(65132u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_UINT16(65132u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_UINT16(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_UINT16(1, p2, 3);
    TEST_ASSERT_EACH_EQUAL_UINT16(1, p3, 1);
}

void testNotEqualUINT16EachEqual1(void)
{
    unsigned short p0[] = {1, 65132u, 65132u, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT16(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT16EachEqual2(void)
{
    unsigned short p0[] = {65132u, 65132u, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT16(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT16EachEqual3(void)
{
    unsigned short p0[] = {65132u, 65132u, 65132u, 65133u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT16(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testEqualUINT32EachEqual(void)
{
    UNITY_UINT32 p0[] = {65132u, 65132u, 65132u, 65132u};
    UNITY_UINT32 p1[] = {987, 987, 987, 987};
    UNITY_UINT32 p2[] = {8, 8, 8, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_UINT32(65132u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_UINT32(65132u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_UINT32(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_UINT32(8, p2, 3);
    TEST_ASSERT_EACH_EQUAL_UINT32(1, p3, 1);
}

void testNotEqualUINT32EachEqual1(void)
{
    UNITY_UINT32 p0[] = {65132u, 65132u, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT32(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT32EachEqual2(void)
{
    UNITY_UINT32 p0[] = {1, 987, 987, 987};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT32(987, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualUINT32EachEqual3(void)
{
    UNITY_UINT32 p0[] = {1, 1, 1, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_UINT32(1, p0, 4);
    VERIFY_FAILS_END
}

void testEqualHEXEachEqual(void)
{
    UNITY_UINT32 p0[] = {65132u, 65132u, 65132u, 65132u};
    UNITY_UINT32 p1[] = {987, 987, 987, 987};
    UNITY_UINT32 p2[] = {8, 8, 8, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_HEX(65132u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_HEX(65132u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_HEX(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_HEX(8, p2, 3);
    TEST_ASSERT_EACH_EQUAL_HEX(1, p3, 1);
}

void testNotEqualHEXEachEqual1(void)
{
    UNITY_UINT32 p0[] = {1, 65132u, 65132u, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX32(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEXEachEqual2(void)
{
    UNITY_UINT32 p0[] = {987, 987, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX32(987, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEXEachEqual3(void)
{
    UNITY_UINT32 p0[] = {8, 8, 987, 8};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX(8, p0, 4);
    VERIFY_FAILS_END
}

void testEqualHEX32EachEqual(void)
{
    UNITY_UINT32 p0[] = {65132u, 65132u, 65132u, 65132u};
    UNITY_UINT32 p1[] = {987, 987, 987, 987};
    UNITY_UINT32 p2[] = {8, 8, 8, 2};
    UNITY_UINT32 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_HEX32(65132u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_HEX32(65132u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_HEX32(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_HEX32(8, p2, 3);
    TEST_ASSERT_EACH_EQUAL_HEX32(1, p3, 1);
}

void testNotEqualHEX32EachEqual1(void)
{
    UNITY_UINT32 p0[] = {65132u, 8, 65132u, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX32(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX32EachEqual2(void)
{
    UNITY_UINT32 p0[] = {1, 987, 987, 987};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX32(987, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX32EachEqual3(void)
{
    UNITY_UINT32 p0[] = {8, 8, 8, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX32(8, p0, 4);
    VERIFY_FAILS_END
}

void testEqualHEX16EachEqual(void)
{
    UNITY_UINT16 p0[] = {65132u, 65132u, 65132u, 65132u};
    UNITY_UINT16 p1[] = {987, 987, 987, 987};
    UNITY_UINT16 p2[] = {8, 8, 8, 2};
    UNITY_UINT16 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EACH_EQUAL_HEX16(65132u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_HEX16(65132u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_HEX16(987, p1, 4);
    TEST_ASSERT_EACH_EQUAL_HEX16(8, p2, 3);
    TEST_ASSERT_EACH_EQUAL_HEX16(1, p3, 1);
}

void testNotEqualHEX16EachEqual1(void)
{
    unsigned short p0[] = {65132u, 65132u, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX16(65132u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX16EachEqual2(void)
{
    unsigned short p0[] = {1, 987, 987, 987};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX16(987, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX16EachEqual3(void)
{
    unsigned short p0[] = {8, 8, 8, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX16(8, p0, 4);
    VERIFY_FAILS_END
}

void testEqualHEX8EachEqual(void)
{
    unsigned char p0[] = {254u, 254u, 254u, 254u};
    unsigned char p1[] = {123, 123, 123, 123};
    unsigned char p2[] = {8, 8, 8, 2};
    unsigned char p3[] = {1, 23, 25, 26};

    TEST_ASSERT_EACH_EQUAL_HEX8(254u, p0, 1);
    TEST_ASSERT_EACH_EQUAL_HEX8(254u, p0, 4);
    TEST_ASSERT_EACH_EQUAL_HEX8(123, p1, 4);
    TEST_ASSERT_EACH_EQUAL_HEX8(8, p2, 3);
    TEST_ASSERT_EACH_EQUAL_HEX8(1, p3, 1);
}

void testNotEqualHEX8EachEqual1(void)
{
    unsigned char p0[] = {253u, 253u, 254u, 253u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX8(253u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX8EachEqual2(void)
{
    unsigned char p0[] = {254u, 254u, 254u, 253u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX8(254u, p0, 4);
    VERIFY_FAILS_END
}

void testNotEqualHEX8EachEqual3(void)
{
    unsigned char p0[] = {1, 8, 8, 8};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_HEX8(8, p0, 4);
    VERIFY_FAILS_END
}

void testEqualMemoryArrays(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, -2};
    int p2[] = {1, 8, 987, 2};
    int p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p0, sizeof(int), 1);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p0, sizeof(int), 4);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p2, sizeof(int), 3);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p3, sizeof(int), 1);
}

void testNotEqualMemoryArraysExpectedNull(void)
{
    int* p0 = NULL;
    int p1[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryArraysActualNull(void)
{
    int p0[] = {1, 8, 987, -2};
    int* p1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryArrays1(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryArrays2(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {2, 8, 987, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryArrays3(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 986, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testEqualMemoryEachEqual(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, -2, 1, 8, 987, -2};
    int p2[] = {8, 8, 8, 2};
    int p3[] = {8, 500, 600, 700};
    int v = 8;

    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p0, sizeof(int)*4, 1);
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int)*4, 2);
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int)*4, 1);
    TEST_ASSERT_EACH_EQUAL_MEMORY(&v, p2, sizeof(int), 3);
    TEST_ASSERT_EACH_EQUAL_MEMORY(&v, p3, sizeof(int), 1);
}

void testNotEqualMemoryEachEqualExpectedNull(void)
{
    int* p0 = NULL;
    int p1[] = {1, 8, 987, 2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryEachEqualActualNull(void)
{
    int p0[] = {1, 8, 987, -2};
    int* p1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int), 4);
    VERIFY_FAILS_END
}

void testNotEqualMemoryEachEqual1(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {9, 8, 987, -2, 1, 8, 987, -2, 1, 8, 987, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int)*4, 3);
    VERIFY_FAILS_END
}

void testNotEqualMemoryEachEqual2(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, -2, 1, 8, 987, -2, 1, 8, 987, 9};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int)*4, 3);
    VERIFY_FAILS_END
}

void testNotEqualMemoryEachEqual3(void)
{
    int p0[] = {1, 8, 987, -2};
    int p1[] = {1, 8, 987, -2, 1, 9, 987, -2, 1, 8, 987, -2};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_MEMORY(p0, p1, sizeof(int)*4, 3);
    VERIFY_FAILS_END
}

void testProtection(void)
{
    volatile int mask = 0;

    if (TEST_PROTECT())
    {
        mask |= 1;
        TEST_ABORT();
    }
    else
    {
        Unity.CurrentTestFailed = 0;
        mask |= 2;
    }

    TEST_ASSERT_EQUAL(3, mask);
}

void testIgnoredAndThenFailInTearDown(void)
{
    SetToOneToFailInTearDown = 1;
    TEST_IGNORE();
}

// Tricky series of macros to set USING_OUTPUT_SPY
#define USING_SPY_AS(a)           EXPAND_AND_USE_2ND(ASSIGN_VALUE(a), 0)
#define ASSIGN_VALUE(a)           VAL_##a
#define VAL_putcharSpy            0, 1
#define EXPAND_AND_USE_2ND(a, b)  SECOND_PARAM(a, b, throwaway)
#define SECOND_PARAM(a, b, ...)   b
#if USING_SPY_AS(UNITY_OUTPUT_CHAR)
  #define USING_OUTPUT_SPY // true only if UNITY_OUTPUT_CHAR = putcharSpy
#endif

#ifdef USING_OUTPUT_SPY
#include <stdio.h>
#define SPY_BUFFER_MAX 40
static char putcharSpyBuffer[SPY_BUFFER_MAX];
#endif
static int indexSpyBuffer;
static int putcharSpyEnabled;

void startPutcharSpy(void) {indexSpyBuffer = 0; putcharSpyEnabled = 1;}

void endPutcharSpy(void) {putcharSpyEnabled = 0;}

char* getBufferPutcharSpy(void)
{
#ifdef USING_OUTPUT_SPY
    putcharSpyBuffer[indexSpyBuffer] = '\0';
    return putcharSpyBuffer;
#else
    return NULL;
#endif
}

void putcharSpy(int c)
{
#ifdef USING_OUTPUT_SPY
    if (putcharSpyEnabled)
    {
        if (indexSpyBuffer < SPY_BUFFER_MAX - 1)
            putcharSpyBuffer[indexSpyBuffer++] = (char)c;
    } else
        putchar((char)c);
#endif
}

void testFailureCountIncrementsAndIsReturnedAtEnd(void)
{
    UNITY_UINT savedFailures = Unity.TestFailures;
    Unity.CurrentTestFailed = 1;
    startPutcharSpy(); // Suppress output
    UnityConcludeTest();
    endPutcharSpy();
    TEST_ASSERT_EQUAL(savedFailures + 1, Unity.TestFailures);

    startPutcharSpy(); // Suppress output
    int failures = UnityEnd();
    Unity.TestFailures--;
    endPutcharSpy();
    TEST_ASSERT_EQUAL(savedFailures + 1, failures);
}

void testCstringsEscapeSequence(void)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    startPutcharSpy();
    UnityPrint("\x16\x10");
    endPutcharSpy();
    TEST_ASSERT_EQUAL_STRING("\\x16\\x10", getBufferPutcharSpy());
#endif
}

void testHexPrintsUpToMaxNumberOfNibbles(void)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    startPutcharSpy();
    UnityPrintNumberHex(0xBEE, 21);
    endPutcharSpy();
    TEST_ASSERT_EQUAL_INT(sizeof(UNITY_INT)*2, strlen(getBufferPutcharSpy()));
#endif
}

#define TEST_ASSERT_EQUAL_PRINT_NUMBERS(expected, actual) {             \
        startPutcharSpy(); UnityPrintNumber((actual)); endPutcharSpy(); \
        TEST_ASSERT_EQUAL_STRING((expected), getBufferPutcharSpy());    \
        }

#define TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS(expected, actual) {            \
        startPutcharSpy(); UnityPrintNumberUnsigned((actual)); endPutcharSpy(); \
        TEST_ASSERT_EQUAL_STRING((expected), getBufferPutcharSpy());            \
        }

void testPrintNumbers32(void)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE_MESSAGE("Compile with '-D UNITY_OUTPUT_CHAR=putcharSpy' to enable print testing");
#else
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("0", 0);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("1", 1);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("-1", -1);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("2000000000", 2000000000);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("-2147483648", (UNITY_INT32)0x80000000);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("-1",          (UNITY_INT32)0xFFFFFFFF);
#endif
}

void testPrintNumbersUnsigned32(void)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("0", 0);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("1", 1);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("1500000000", 1500000000);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("2147483648", (UNITY_UINT32)0x80000000);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("4294967295", (UNITY_UINT32)0xFFFFFFFF);
#endif
}

// ===================== THESE TEST WILL RUN IF YOUR CONFIG INCLUDES 64 BIT SUPPORT ==================

void testPrintNumbersInt64(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
  #ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
  #else
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("0", 0);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("10000000000", 10000000000);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("-9223372036854775808", (UNITY_INT)0x8000000000000000);
    TEST_ASSERT_EQUAL_PRINT_NUMBERS("-1", (UNITY_INT)0xFFFFFFFFFFFFFFFF);
  #endif
#endif
}

void testPrintNumbersUInt64(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
  #ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
  #else
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("0", 0);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("70000000000", 70000000000);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("9223372036854775808",  (UNITY_UINT)0x8000000000000000);
    TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS("18446744073709551615", (UNITY_UINT)0xFFFFFFFFFFFFFFFF);
  #endif
#endif
}

void testEqualHex64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 v0, v1;
    UNITY_UINT64 *p0, *p1;

    v0 = 0x9876543201234567;
    v1 = 0x9876543201234567;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_HEX64(0x9876543201234567, 0x9876543201234567);
    TEST_ASSERT_EQUAL_HEX64(v0, v1);
    TEST_ASSERT_EQUAL_HEX64(0x9876543201234567, v1);
    TEST_ASSERT_EQUAL_HEX64(v0, 0x9876543201234567);
    TEST_ASSERT_EQUAL_HEX64(*p0, v1);
    TEST_ASSERT_EQUAL_HEX64(*p0, *p1);
    TEST_ASSERT_EQUAL_HEX64(*p0, 0x9876543201234567);
#endif
}

void testEqualUint64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 v0, v1;
    UNITY_UINT64 *p0, *p1;

    v0 = 0x9876543201234567;
    v1 = 0x9876543201234567;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_UINT64(0x9876543201234567, 0x9876543201234567);
    TEST_ASSERT_EQUAL_UINT64(v0, v1);
    TEST_ASSERT_EQUAL_UINT64(0x9876543201234567, v1);
    TEST_ASSERT_EQUAL_UINT64(v0, 0x9876543201234567);
    TEST_ASSERT_EQUAL_UINT64(*p0, v1);
    TEST_ASSERT_EQUAL_UINT64(*p0, *p1);
    TEST_ASSERT_EQUAL_UINT64(*p0, 0x9876543201234567);
#endif
}

void testEqualInt64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_INT64 v0, v1;
    UNITY_INT64 *p0, *p1;

    v0 = (UNITY_INT64)0x9876543201234567;
    v1 = (UNITY_INT64)0x9876543201234567;
    p0 = &v0;
    p1 = &v1;

    TEST_ASSERT_EQUAL_INT64(0x9876543201234567, 0x9876543201234567);
    TEST_ASSERT_EQUAL_INT64(v0, v1);
    TEST_ASSERT_EQUAL_INT64(0x9876543201234567, v1);
    TEST_ASSERT_EQUAL_INT64(v0, 0x9876543201234567);
    TEST_ASSERT_EQUAL_INT64(*p0, v1);
    TEST_ASSERT_EQUAL_INT64(*p0, *p1);
    TEST_ASSERT_EQUAL_INT64(*p0, 0x9876543201234567);
#endif
}


void testNotEqualHex64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 v0, v1;

    v0 = 9000000000;
    v1 = 9100000000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX64(v0, v1);
    VERIFY_FAILS_END
#endif
}

void testNotEqualUint64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 v0, v1;

    v0 = 9000000000;
    v1 = 9100000000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT64(v0, v1);
    VERIFY_FAILS_END
#endif
}

void testNotEqualInt64s(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_INT64 v0, v1;

    v0 = -9000000000;
    v1 = 9100000000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT64(v0, v1);
    VERIFY_FAILS_END
#endif
}

void testNotEqualHex64sIfSigned(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_INT64 v0, v1;

    v0 = -9000000000;
    v1 = 9000000000;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX64(v0, v1);
    VERIFY_FAILS_END
#endif
}

void testHEX64sWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    TEST_ASSERT_HEX64_WITHIN(1, 0x7FFFFFFFFFFFFFFF,0x7FFFFFFFFFFFFFFE);
    TEST_ASSERT_HEX64_WITHIN(5, 5000, 4996);
    TEST_ASSERT_HEX64_WITHIN(5, 5000, 5005);
#endif
}

void testHEX64sNotWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX64_WITHIN(1, 0x7FFFFFFFFFFFFFFF, 0x7FFFFFFFFFFFFFFC);
    VERIFY_FAILS_END
#endif
}

void testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_HEX64_WITHIN(5, 1, -1);
    VERIFY_FAILS_END
#endif
}

void testUINT64sWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    TEST_ASSERT_UINT64_WITHIN(1, 0x7FFFFFFFFFFFFFFF,0x7FFFFFFFFFFFFFFE);
    TEST_ASSERT_UINT64_WITHIN(5, 5000, 4996);
    TEST_ASSERT_UINT64_WITHIN(5, 5000, 5005);
#endif
}

void testUINT64sNotWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT64_WITHIN(1, 0x7FFFFFFFFFFFFFFF, 0x7FFFFFFFFFFFFFFC);
    VERIFY_FAILS_END
#endif
}

void testUINT64sNotWithinDeltaEvenThoughASignedIntWouldPass(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_UINT64_WITHIN(5, 1, -1);
    VERIFY_FAILS_END
#endif
}

void testINT64sWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    TEST_ASSERT_INT64_WITHIN(1, 0x7FFFFFFFFFFFFFFF,0x7FFFFFFFFFFFFFFE);
    TEST_ASSERT_INT64_WITHIN(5, 5000, 4996);
    TEST_ASSERT_INT64_WITHIN(5, 5000, 5005);
#endif
}

void testINT64sNotWithinDelta(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT64_WITHIN(1, 0x7FFFFFFFFFFFFFFF, 0x7FFFFFFFFFFFFFFC);
    VERIFY_FAILS_END
#endif
}

void testINT64sNotWithinDeltaAndDifferenceOverflows(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_INT64_WITHIN(1, 0x8000000000000000, 0x7FFFFFFFFFFFFFFF);
    VERIFY_FAILS_END
#endif
}

void testEqualHEX64Arrays(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p1[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p2[] = {1, 8, 987, 2};
    UNITY_UINT64 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p3, 1);
#endif
}

void testEqualUint64Arrays(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p1[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p2[] = {1, 8, 987, 2};
    UNITY_UINT64 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p3, 1);
#endif
}

void testEqualInt64Arrays(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_INT64 p0[] = {1, 8, 987, -65132};
    UNITY_INT64 p1[] = {1, 8, 987, -65132};
    UNITY_INT64 p2[] = {1, 8, 987, -2};
    UNITY_INT64 p3[] = {1, 500, 600, 700};

    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p3, 1);
#endif
}


void testNotEqualHEX64Arrays1(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualHEX64Arrays2(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p1[] = {2, 8, 987, 65132u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX64_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualUint64Arrays(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_UINT64 p0[] = {1, 8, 987, 65132u};
    UNITY_UINT64 p1[] = {1, 8, 987, 65131u};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_UINT64_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualInt64Arrays(void)
{
#ifndef UNITY_SUPPORT_64
    TEST_IGNORE();
#else
    UNITY_INT64 p0[] = {1, 8, 987, -65132};
    UNITY_INT64 p1[] = {1, 8, 987, -65131};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT64_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}
// ===================== THESE TEST WILL RUN IF YOUR CONFIG INCLUDES FLOAT SUPPORT ==================

void testFloatsWithinDelta(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_WITHIN(0.00003f, 187245.03485f, 187245.03488f);
    TEST_ASSERT_FLOAT_WITHIN(1.0f, 187245.0f, 187246.0f);
    TEST_ASSERT_FLOAT_WITHIN(0.05f, 9273.2549f, 9273.2049f);
    TEST_ASSERT_FLOAT_WITHIN(0.007f, -726.93724f, -726.94424f);
#endif
}

void testFloatsNotWithinDelta(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_WITHIN(0.05f, 9273.2649f, 9273.2049f);
    VERIFY_FAILS_END
#endif
}

void testFloatsEqual(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_FLOAT(187245.0f, 187246.0f);
    TEST_ASSERT_EQUAL_FLOAT(18724.5f, 18724.6f);
    TEST_ASSERT_EQUAL_FLOAT(9273.2549f, 9273.2599f);
    TEST_ASSERT_EQUAL_FLOAT(-726.93724f, -726.9374f);
#endif
}

void testFloatsNotEqual(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(9273.9649f, 9273.0049f);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualNegative1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(-9273.9649f, -9273.0049f);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualNegative2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(-9273.0049f, -9273.9649f);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualActualNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(85.963f, 0.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualExpectedNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(0.0f / f_zero, 85.963f);
    VERIFY_FAILS_END
#endif
}

void testFloatsEqualBothNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_FLOAT(0.0f / f_zero, 0.0f / f_zero);
#endif
}

void testFloatsNotEqualInfNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(1.0f / f_zero, 0.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualNaNInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(0.0f / f_zero, 1.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualActualInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(321.642f, 1.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatsNotEqualExpectedInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(1.0f / f_zero, 321.642f);
    VERIFY_FAILS_END
#endif
}

void testFloatsEqualBothInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_FLOAT(1.0f / f_zero, 1.0f / f_zero);
#endif
}

void testFloatsNotEqualPlusMinusInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT(1.0f / f_zero, -1.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatIsPosInf1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_INF(2.0f / f_zero);
#endif
}

void testFloatIsPosInf2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NOT_INF(2.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNegInf1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_NEG_INF(-3.0f / f_zero);
#endif
}

void testFloatIsNegInf2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NOT_NEG_INF(-3.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNotPosInf1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_INF(2.0f);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNotPosInf2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_NOT_INF(2.0f);
#endif
}

void testFloatIsNotNegInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NEG_INF(-999.876f);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNan1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_NAN(0.0f / f_zero);
#endif
}

void testFloatIsNan2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NOT_NAN(0.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNotNan1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NAN(234.9f);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNotNan2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_NOT_NAN(234.9f);
#endif
}

void testFloatInfIsNotNan(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NAN(1.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatNanIsNotInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_INF(0.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatIsDeterminate1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_DETERMINATE(0.0f);
    TEST_ASSERT_FLOAT_IS_DETERMINATE(123.3f);
    TEST_ASSERT_FLOAT_IS_DETERMINATE(-88.3f);
#endif
}

void testFloatIsDeterminate2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(-88.3f);
    VERIFY_FAILS_END
#endif
}

void testFloatIsNotDeterminate1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(1.0f / f_zero);
    TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(-1.0f / f_zero);
    TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE(0.0f / f_zero);
#endif
}

void testFloatIsNotDeterminate2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_FLOAT_IS_DETERMINATE(-1.0f / f_zero);
    VERIFY_FAILS_END
#endif
}

void testFloatTraitFailsOnInvalidTrait(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    UnityAssertFloatSpecial(1.0f, NULL, __LINE__, UNITY_FLOAT_INVALID_TRAIT);
    VERIFY_FAILS_END
#endif
}


void testEqualFloatArrays(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, -8.0f,  25.4f, -0.123f};
    float p1[] = {1.0f, -8.0f,  25.4f, -0.123f};
    float p2[] = {1.0f, -8.0f,  25.4f, -0.2f};
    float p3[] = {1.0f, -23.0f, 25.0f, -0.26f};

    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p3, 1);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(NULL, NULL, 1);
#endif
}

void testNotEqualFloatArraysExpectedNull(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float* p0 = NULL;
    float p1[] = {1.0f, 8.0f, 25.4f, 0.252f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArraysActualNull(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 8.0f, 25.4f, 0.253f};
    float* p1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArrays1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 8.0f, 25.4f, 0.253f};
    float p1[] = {1.0f, 8.0f, 25.4f, 0.252f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArrays2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 8.0f, 25.4f, 0.253f};
    float p1[] = {2.0f, 8.0f, 25.4f, 0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArrays3(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 8.0f, 25.4f, 0.253f};
    float p1[] = {1.0f, 8.0f, 25.5f, 0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArraysNegative1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-1.0f, -8.0f, -25.4f, -0.253f};
    float p1[] = {-1.0f, -8.0f, -25.4f, -0.252f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArraysNegative2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-1.0f, -8.0f, -25.4f, -0.253f};
    float p1[] = {-2.0f, -8.0f, -25.4f, -0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatArraysNegative3(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-1.0f, -8.0f, -25.4f, -0.253f};
    float p1[] = {-1.0f, -8.0f, -25.5f, -0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testEqualFloatArraysNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 0.0f / f_zero, 25.4f, 0.253f};
    float p1[] = {1.0f, 0.0f / f_zero, 25.4f, 0.253f};

    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
#endif
}

void testEqualFloatArraysInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 1.0f / f_zero, 25.4f, 0.253f};
    float p1[] = {1.0f, 1.0f / f_zero, 25.4f, 0.253f};

    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 4);
#endif
}

void testNotEqualFloatArraysLengthZero(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[1] = {0.0f};
    float p1[1] = {0.0f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(p0, p1, 0);
    VERIFY_FAILS_END
#endif
}

void testEqualFloatEachEqual(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float p1[] = {-0.123f, -0.123f, -0.123f, -0.123f};
    float p2[] = {25.4f, 25.4f, 25.4f, -0.2f};
    float p3[] = {1.0f, -23.0f, 25.0f, -0.26f};

    TEST_ASSERT_EACH_EQUAL_FLOAT(1.0f, p0, 1);
    TEST_ASSERT_EACH_EQUAL_FLOAT(1.0f, p0, 4);
    TEST_ASSERT_EACH_EQUAL_FLOAT(-0.123f, p1, 4);
    TEST_ASSERT_EACH_EQUAL_FLOAT(25.4f, p2, 3);
    TEST_ASSERT_EACH_EQUAL_FLOAT(1.0f, p3, 1);
#endif
}

void testNotEqualFloatEachEqualActualNull(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float* p0 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(5, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqual1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {0.253f, 8.0f, 0.253f, 0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(0.253f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqual2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {8.0f, 8.0f, 8.0f, 0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(8.0f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqual3(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f, 1.0f, 1.0f, 0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(1.0f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqualNegative1(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-1.0f, -0.253f, -0.253f, -0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(-0.253f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqualNegative2(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-25.4f, -8.0f, -25.4f, -25.4f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(-25.4f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualFloatEachEqualNegative3(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {-8.0f, -8.0f, -8.0f, -0.253f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(-8.0f, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testEqualFloatEachEqualNaN(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {0.0f / f_zero, 0.0f / f_zero, 0.0f / f_zero, 0.0f / f_zero};

    TEST_ASSERT_EACH_EQUAL_FLOAT(0.0f / f_zero, p0, 4);
#endif
}

void testEqualFloatEachEqualInf(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[] = {1.0f / f_zero, 1.0f / f_zero, 25.4f, 0.253f};

    TEST_ASSERT_EACH_EQUAL_FLOAT(1.0f / f_zero, p0, 2);
#endif
}

void testNotEqualFloatEachEqualLengthZero(void)
{
#ifdef UNITY_EXCLUDE_FLOAT
    TEST_IGNORE();
#else
    float p0[1] = {0.0f};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_FLOAT(0.0f, p0, 0);
    VERIFY_FAILS_END
#endif
}

#define TEST_ASSERT_EQUAL_PRINT_FLOATING(expected, actual) {            \
        startPutcharSpy(); UnityPrintFloat((actual)); endPutcharSpy();  \
        TEST_ASSERT_EQUAL_STRING((expected), getBufferPutcharSpy());    \
        }

void testFloatPrinting(void)
{
#if defined(UNITY_EXCLUDE_FLOAT_PRINT) || !defined(USING_OUTPUT_SPY)
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_PRINT_FLOATING("0",         0.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("4.99e-07",  0.000000499f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("5e-07",     0.00000050000005f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("0.100469",  0.100469499f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1",         0.9999995f); /*Rounding to int place*/
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1",         1.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1.25",      1.25f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("7.99999",   7.99999f); /*Not rounding*/
    TEST_ASSERT_EQUAL_PRINT_FLOATING("16.0002",   16.0002f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("16.0004",   16.0004f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("16.0006",   16.0006f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("999999",    999999.0f); /*Last full print integer*/

    TEST_ASSERT_EQUAL_PRINT_FLOATING("-0",         -0.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-4.99e-07",  -0.000000499f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-5e-07",     -0.00000050000005f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-0.100469",  -0.100469499f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-1",         -0.9999995f); /*Rounding to int place*/
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-1",         -1.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-1.25",      -1.25f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-7.99999",   -7.99999f); /*Not rounding*/
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-16.0002",   -16.0002f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-16.0004",   -16.0004f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-16.0006",   -16.0006f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-999999",    -999999.0f); /*Last full print integer*/

    TEST_ASSERT_EQUAL_PRINT_FLOATING("4.29497e+09", 4294967296.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("5e+09",       5000000000.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("8e+09",       8.0e+09f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("8.31e+09",    8309999104.0f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1e+10",       1.0e+10f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1e+10",       10000000000.0f);
    /* Some compilers have trouble with inexact float constants, a float cast works generally */
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1.00005e+10", (float)1.000054e+10f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1.1e+38",     (float)1.10000005e+38f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1.6353e+10",  1.63529943e+10f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("3.40282e+38", 3.40282346638e38f);

    TEST_ASSERT_EQUAL_PRINT_FLOATING("-1e+10",       -1.0e+10f);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-3.40282e+38", -3.40282346638e38f);
#endif
}

void testFloatPrintingInfinityAndNaN(void)
{
#if defined(UNITY_EXCLUDE_FLOAT_PRINT) || !defined(USING_OUTPUT_SPY)
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_PRINT_FLOATING("inf",   1.0f / f_zero);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-inf", -1.0f / f_zero);

    TEST_ASSERT_EQUAL_PRINT_FLOATING("nan",   0.0f / f_zero);
#endif
}

#if defined(UNITY_TEST_ALL_FLOATS_PRINT_OK) && defined(USING_OUTPUT_SPY)
static void printFloatValue(float f)
{
    char expected[18];
    char expected_lower[18];
    char expected_higher[18];

    startPutcharSpy();

    UnityPrintFloat(f);

    sprintf(expected, "%.6g", f);

    /* We print all NaN's as "nan", not "-nan" */
    if(strcmp(expected, "-nan") == 0) strcpy(expected, "nan");

    /* Allow for rounding differences in last digit */
    double lower = (double)f * 0.9999995;
    double higher = (double)f * 1.0000005;

    if (isfinite(lower)) sprintf(expected_lower, "%.6g", lower); else strcpy(expected_lower, expected);
    if (isfinite(higher)) sprintf(expected_higher, "%.6g", higher); else strcpy(expected_higher, expected);

    if (strcmp(expected, getBufferPutcharSpy()) != 0 &&
        strcmp(expected_lower, getBufferPutcharSpy()) != 0 &&
        strcmp(expected_higher, getBufferPutcharSpy()) != 0)
    {
        /* Fail with diagnostic printing */
        TEST_ASSERT_EQUAL_PRINT_FLOATING(expected, f);
    }
}
#endif

void testFloatPrintingRandomSamples(void)
{
#if !defined(UNITY_TEST_ALL_FLOATS_PRINT_OK) || !defined(USING_OUTPUT_SPY)
    TEST_IGNORE();
#else
    union { float f_value; uint32_t int_value; } u;

    /* These values are not covered by the MINSTD generator */
    u.int_value = 0x00000000; printFloatValue(u.f_value);
    u.int_value = 0x80000000; printFloatValue(u.f_value);
    u.int_value = 0x7fffffff; printFloatValue(u.f_value);
    u.int_value = 0xffffffff; printFloatValue(u.f_value);

    uint32_t a = 1;
    for(int num_tested = 0; num_tested < 1000000; num_tested++)
    {
        /* MINSTD pseudo-random number generator */
        a = (uint32_t)(((uint64_t)a * 48271u) % 2147483647u);

        /* MINSTD does not set the highest bit; test both possibilities */
        u.int_value = a;              printFloatValue(u.f_value);
        u.int_value = a | 0x80000000; printFloatValue(u.f_value);
    }
#endif
}

// ===================== THESE TEST WILL RUN IF YOUR CONFIG INCLUDES DOUBLE SUPPORT ==================

void testDoublesWithinDelta(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_WITHIN(0.00003, 187245.03485, 187245.03488);
    TEST_ASSERT_DOUBLE_WITHIN(1.0, 187245.0, 187246.0);
    TEST_ASSERT_DOUBLE_WITHIN(0.05, 9273.2549, 9273.2049);
    TEST_ASSERT_DOUBLE_WITHIN(0.007, -726.93725, -726.94424);
#endif
}

void testDoublesNotWithinDelta(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_WITHIN(0.05, 9273.2649, 9273.2049);
    VERIFY_FAILS_END
#endif
}


void testDoublesEqual(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_DOUBLE(187245123456.0, 187245123456.0);
    TEST_ASSERT_EQUAL_DOUBLE(187241234567.5, 187241234567.6);
    TEST_ASSERT_EQUAL_DOUBLE(9273.2512345649, 9273.25123455699);
    TEST_ASSERT_EQUAL_DOUBLE(-726.12345693724, -726.1234569374);
#endif
}

void testDoublesNotEqual(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(9273.9649, 9273.0049);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualNegative1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(-9273.9649, -9273.0049);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualNegative2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(-9273.0049, -9273.9649);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualActualNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(85.963, 0.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualExpectedNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(0.0 / d_zero, 85.963);
    VERIFY_FAILS_END
#endif
}

void testDoublesEqualBothNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_DOUBLE(0.0 / d_zero, 0.0 / d_zero);
#endif
}

void testDoublesNotEqualInfNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(1.0 / d_zero, 0.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualNaNInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(0.0 / d_zero, 1.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualActualInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(321.642, 1.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoublesNotEqualExpectedInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(1.0 / d_zero, 321.642);
    VERIFY_FAILS_END
#endif
}

void testDoublesEqualBothInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_DOUBLE(1.0 / d_zero, 1.0 / d_zero);
#endif
}

void testDoublesNotEqualPlusMinusInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE(1.0 / d_zero, -1.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsPosInf1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_INF(2.0 / d_zero);
#endif
}

void testDoubleIsPosInf2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NOT_INF(2.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNegInf1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_NEG_INF(-3.0 / d_zero);
#endif
}

void testDoubleIsNegInf2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF(-3.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNotPosInf1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_INF(2.0);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNotPosInf2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_NOT_INF(2.0);
#endif
}

void testDoubleIsNotNegInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NEG_INF(-999.876);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNan1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_NAN(0.0 / d_zero);
#endif
}

void testDoubleIsNan2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NOT_NAN(0.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNotNan1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NAN(234.9);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNotNan2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_NOT_NAN(234.9);
#endif
}

void testDoubleInfIsNotNan(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NAN(1.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleNanIsNotInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_INF(0.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsDeterminate1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_DETERMINATE(0.0);
    TEST_ASSERT_DOUBLE_IS_DETERMINATE(123.3);
    TEST_ASSERT_DOUBLE_IS_DETERMINATE(-88.3);
#endif
}

void testDoubleIsDeterminate2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(-88.3);
    VERIFY_FAILS_END
#endif
}

void testDoubleIsNotDeterminate1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(1.0 / d_zero);
    TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(-1.0 / d_zero);
    TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE(0.0 / d_zero);
#endif
}

void testDoubleIsNotDeterminate2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    TEST_ASSERT_DOUBLE_IS_DETERMINATE(-1.0 / d_zero);
    VERIFY_FAILS_END
#endif
}

void testDoubleTraitFailsOnInvalidTrait(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    EXPECT_ABORT_BEGIN
    UnityAssertDoubleSpecial(1.0, NULL, __LINE__, UNITY_FLOAT_INVALID_TRAIT);
    VERIFY_FAILS_END
#endif
}

void testEqualDoubleArrays(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, -8.0,  25.4, -0.123};
    double p1[] = {1.0, -8.0,  25.4, -0.123};
    double p2[] = {1.0, -8.0,  25.4, -0.2};
    double p3[] = {1.0, -23.0, 25.0, -0.26};

    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p0, 1);
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p0, 4);
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p2, 3);
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p3, 1);
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(NULL, NULL, 1);
#endif
}

void testNotEqualDoubleArraysExpectedNull(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double* p0 = NULL;
    double p1[] = {1.0, 8.0, 25.4, 0.252};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArraysActualNull(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 8.0, 25.4, 0.253};
    double* p1 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArrays1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 8.0, 25.4, 0.25666666667};
    double p1[] = {1.0, 8.0, 25.4, 0.25666666666};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArrays2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 8.0, 25.4, 0.253};
    double p1[] = {2.0, 8.0, 25.4, 0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArrays3(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 8.0, 25.4, 0.253};
    double p1[] = {1.0, 8.0, 25.5, 0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArraysNegative1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-1.0, -8.0, -25.4, -0.2566666667};
    double p1[] = {-1.0, -8.0, -25.4, -0.2566666666};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArraysNegative2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-1.0, -8.0, -25.4, -0.253};
    double p1[] = {-2.0, -8.0, -25.4, -0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleArraysNegative3(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-1.0, -8.0, -25.4, -0.253};
    double p1[] = {-1.0, -8.0, -25.5, -0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
    VERIFY_FAILS_END
#endif
}

void testEqualDoubleArraysNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 0.0 / d_zero, 25.4, 0.253};
    double p1[] = {1.0, 0.0 / d_zero, 25.4, 0.253};

    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
#endif
}

void testEqualDoubleArraysInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 1.0 / d_zero, 25.4, 0.253};
    double p1[] = {1.0, 1.0 / d_zero, 25.4, 0.253};

    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 4);
#endif
}

void testNotEqualDoubleArraysLengthZero(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[1] = {0.0};
    double p1[1] = {0.0};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_DOUBLE_ARRAY(p0, p1, 0);
    VERIFY_FAILS_END
#endif
}

void testEqualDoubleEachEqual(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 1.0, 1.0, 1.0};
    double p1[] = {-0.123, -0.123, -0.123, -0.123};
    double p2[] = {25.4, 25.4, 25.4, -0.2};
    double p3[] = {1.0, -23.0, 25.0, -0.26};

    TEST_ASSERT_EACH_EQUAL_DOUBLE(1.0, p0, 1);
    TEST_ASSERT_EACH_EQUAL_DOUBLE(1.0, p0, 4);
    TEST_ASSERT_EACH_EQUAL_DOUBLE(-0.123, p1, 4);
    TEST_ASSERT_EACH_EQUAL_DOUBLE(25.4, p2, 3);
    TEST_ASSERT_EACH_EQUAL_DOUBLE(1.0, p3, 1);
#endif
}

void testNotEqualDoubleEachEqualActualNull(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double* p0 = NULL;

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(5, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqual1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {0.253, 8.0, 0.253, 0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(0.253, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqual2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {8.0, 8.0, 8.0, 0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(8.0, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqual3(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0, 1.0, 1.0, 0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(1.0, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqualNegative1(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-1.0, -0.253, -0.253, -0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(-0.253, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqualNegative2(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-25.4, -8.0, -25.4, -25.4};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(-25.4, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testNotEqualDoubleEachEqualNegative3(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {-8.0, -8.0, -8.0, -0.253};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(-8.0, p0, 4);
    VERIFY_FAILS_END
#endif
}

void testEqualDoubleEachEqualNaN(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {0.0 / d_zero, 0.0 / d_zero, 0.0 / d_zero, 0.0 / d_zero};

    TEST_ASSERT_EACH_EQUAL_DOUBLE(0.0 / d_zero, p0, 4);
#endif
}

void testEqualDoubleEachEqualInf(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[] = {1.0 / d_zero, 1.0 / d_zero, 25.4, 0.253};

    TEST_ASSERT_EACH_EQUAL_DOUBLE(1.0 / d_zero, p0, 2);
#endif
}

void testNotEqualDoubleEachEqualLengthZero(void)
{
#ifdef UNITY_EXCLUDE_DOUBLE
    TEST_IGNORE();
#else
    double p0[1] = {0.0};

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EACH_EQUAL_DOUBLE(0.0, p0, 0);
    VERIFY_FAILS_END
#endif
}

void testDoublePrinting(void)
{
#if defined(UNITY_EXCLUDE_FLOAT_PRINT) || defined(UNITY_EXCLUDE_DOUBLE) || !defined(USING_OUTPUT_SPY)
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_PRINT_FLOATING("0.100469",     0.10046949999999999);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("4.29497e+09",  4294967295.999999);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("4.29497e+09",  4294967295.9999995);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("4.29497e+09",  4294967296.0);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("1e+10",        9999999995.0);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("9.0072e+15",   9007199254740990.0);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("7e+100",       7.0e+100);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("3e+200",       3.0e+200);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("9.23457e+300", 9.23456789e+300);

    TEST_ASSERT_EQUAL_PRINT_FLOATING("-0.100469",    -0.10046949999999999);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-4.29497e+09", -4294967295.999999);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-4.29497e+09", -4294967295.9999995);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-7e+100",      -7.0e+100);
#endif
}

void testDoublePrintingInfinityAndNaN(void)
{
#if defined(UNITY_EXCLUDE_FLOAT_PRINT) || defined(UNITY_EXCLUDE_DOUBLE) || !defined(USING_OUTPUT_SPY)
    TEST_IGNORE();
#else
    TEST_ASSERT_EQUAL_PRINT_FLOATING("inf",   1.0 / d_zero);
    TEST_ASSERT_EQUAL_PRINT_FLOATING("-inf", -1.0 / d_zero);

    TEST_ASSERT_EQUAL_PRINT_FLOATING("nan",   0.0 / d_zero);
#endif
}

// ===================== THESE TEST WILL RUN IF YOUR CONFIG INCLUDES DETAIL SUPPORT ==================

void testThatDetailsCanBeHandleOneDetail(void)
{
#ifdef UNITY_EXCLUDE_DETAILS
    TEST_IGNORE();
#else
    UNITY_SET_DETAIL("Detail1");

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_INT_MESSAGE(5, 6, "Should Fail And Say Detail1");
    VERIFY_FAILS_END
#endif
}

void testThatDetailsCanHandleTestFail(void)
{
#ifdef UNITY_EXCLUDE_DETAILS
    TEST_IGNORE();
#else
    UNITY_SET_DETAILS("Detail1","Detail2");

    EXPECT_ABORT_BEGIN
    TEST_FAIL_MESSAGE("Should Fail And Say Detail1 and Detail2");
    VERIFY_FAILS_END
#endif
}

void testThatDetailsCanBeHandleTwoDetails(void)
{
#ifdef UNITY_EXCLUDE_DETAILS
    TEST_IGNORE();
#else
    UNITY_SET_DETAILS("Detail1","Detail2");

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_HEX8_MESSAGE(7, 8, "Should Fail And Say Detail1 and Detail2");
    VERIFY_FAILS_END
#endif
}

void testThatDetailsCanBeHandleSingleDetailClearingTwoDetails(void)
{
#ifdef UNITY_EXCLUDE_DETAILS
    TEST_IGNORE();
#else
    UNITY_SET_DETAILS("Detail1","Detail2");
    UNITY_SET_DETAIL("DetailNew");

    EXPECT_ABORT_BEGIN
    TEST_ASSERT_EQUAL_STRING_MESSAGE("MEH", "GUH", "Should Fail And Say DetailNew");
    VERIFY_FAILS_END
#endif
}


/* FILE: tests/unity/test/expectdata/testsample_run1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_run1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "one.h"
#include "two.h"
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_yaml.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_yaml.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "two.h"
#include "three.h"
#include <four.h>
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_yaml_setup();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_new2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_new2.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_custom_setup();
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
a_custom_teardown();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return suite_teardown(UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_new1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_new1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "one.h"
#include "two.h"
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_cmd.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_cmd.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_def.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_def.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_param.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_param.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST_NO_ARGS
#define RUN_TEST(TestFunc, TestLineNum, ...) \
{ \
  Unity.CurrentTestName = #TestFunc "(" #__VA_ARGS__ ")"; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(__VA_ARGS__); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21, RUN_TEST_NO_ARGS);
  RUN_TEST(test_TheSecondThingToTest, 43, RUN_TEST_NO_ARGS);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_run2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_run2.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_custom_setup();
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
a_custom_teardown();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return suite_teardown(UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_new2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_new2.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_custom_setup();
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
a_custom_teardown();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return suite_teardown(UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_param.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_param.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST_NO_ARGS
#define RUN_TEST(TestFunc, TestLineNum, ...) \
{ \
  Unity.CurrentTestName = #TestFunc "(" #__VA_ARGS__ ")"; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(__VA_ARGS__); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21, RUN_TEST_NO_ARGS);
  RUN_TEST(test_TheSecondThingToTest, 43, RUN_TEST_NO_ARGS);
  RUN_TEST(test_TheThirdThingToTest, 53, RUN_TEST_NO_ARGS);
  RUN_TEST(test_TheFourthThingToTest, 58, RUN_TEST_NO_ARGS);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_head1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_head1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "testsample_head1.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_def.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_def.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_run1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_run1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "one.h"
#include "two.h"
#include "funky.h"
#include <setjmp.h>
#include "Mockstanky.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_yaml.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_yaml.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "two.h"
#include "three.h"
#include <four.h>
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_yaml_setup();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_cmd.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_cmd.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_run2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_run2.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Suite Setup=====*/
static int suite_setup(void)
{
a_custom_setup();
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
a_custom_teardown();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return suite_teardown(UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_new1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_new1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"
#include "one.h"
#include "two.h"
#include "funky.h"
#include "stanky.h"
#include <setjmp.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);
extern void test_TheThirdThingToTest(void);
extern void test_TheFourthThingToTest(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/testsample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);
  RUN_TEST(test_TheThirdThingToTest, 53);
  RUN_TEST(test_TheFourthThingToTest, 58);

  return (UnityEnd());
}


/* FILE: tests/unity/test/expectdata/testsample_mock_head1.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/test/expectdata/testsample_mock_head1.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "testsample_mock_head1.h"
#include "Mockstanky.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_TheFirstThingToTest(void);
extern void test_TheSecondThingToTest(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  Mockstanky_Init();
}
static void CMock_Verify(void)
{
  Mockstanky_Verify();
}
static void CMock_Destroy(void)
{
  Mockstanky_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("testdata/mocksample.c");
  RUN_TEST(test_TheFirstThingToTest, 21);
  RUN_TEST(test_TheSecondThingToTest, 43);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}


/* FILE: tests/unity/extras/fixture/src/unity_fixture.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/src/unity_fixture.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#include "unity_fixture.h"
#include "unity_internals.h"
#include <string.h>

struct UNITY_FIXTURE_T UnityFixture;

/* If you decide to use the function pointer approach.
 * Build with -D UNITY_OUTPUT_CHAR=outputChar and include <stdio.h>
 * int (*outputChar)(int) = putchar; */

#if !defined(UNITY_WEAK_ATTRIBUTE) && !defined(UNITY_WEAK_PRAGMA)
void setUp(void)    { /*does nothing*/ }
void tearDown(void) { /*does nothing*/ }
#endif

static void announceTestRun(unsigned int runNumber)
{
    UnityPrint("Unity test run ");
    UnityPrintNumberUnsigned(runNumber+1);
    UnityPrint(" of ");
    UnityPrintNumberUnsigned(UnityFixture.RepeatCount);
    UNITY_PRINT_EOL();
}

int UnityMain(int argc, const char* argv[], void (*runAllTests)(void))
{
    int result = UnityGetCommandLineOptions(argc, argv);
    unsigned int r;
    if (result != 0)
        return result;

    for (r = 0; r < UnityFixture.RepeatCount; r++)
    {
        UnityBegin(argv[0]);
        announceTestRun(r);
        runAllTests();
        if (!UnityFixture.Verbose) UNITY_PRINT_EOL();
        UnityEnd();
    }

    return (int)Unity.TestFailures;
}

static int selected(const char* filter, const char* name)
{
    if (filter == 0)
        return 1;
    return strstr(name, filter) ? 1 : 0;
}

static int testSelected(const char* test)
{
    return selected(UnityFixture.NameFilter, test);
}

static int groupSelected(const char* group)
{
    return selected(UnityFixture.GroupFilter, group);
}

void UnityTestRunner(unityfunction* setup,
                     unityfunction* testBody,
                     unityfunction* teardown,
                     const char* printableName,
                     const char* group,
                     const char* name,
                     const char* file,
                     unsigned int line)
{
    if (testSelected(name) && groupSelected(group))
    {
        Unity.TestFile = file;
        Unity.CurrentTestName = printableName;
        Unity.CurrentTestLineNumber = line;
        if (!UnityFixture.Verbose)
            UNITY_OUTPUT_CHAR('.');
        else
        {
            UnityPrint(printableName);
        #ifndef UNITY_REPEAT_TEST_NAME
            Unity.CurrentTestName = NULL;
        #endif
        }

        Unity.NumberOfTests++;
        UnityMalloc_StartTest();
        UnityPointer_Init();

        if (TEST_PROTECT())
        {
            setup();
            testBody();
        }
        if (TEST_PROTECT())
        {
            teardown();
        }
        if (TEST_PROTECT())
        {
            UnityPointer_UndoAllSets();
            if (!Unity.CurrentTestFailed)
                UnityMalloc_EndTest();
        }
        UnityConcludeFixtureTest();
    }
}

void UnityIgnoreTest(const char* printableName, const char* group, const char* name)
{
    if (testSelected(name) && groupSelected(group))
    {
        Unity.NumberOfTests++;
        Unity.TestIgnores++;
        if (!UnityFixture.Verbose)
            UNITY_OUTPUT_CHAR('!');
        else
        {
            UnityPrint(printableName);
            UNITY_PRINT_EOL();
        }
    }
}


/*------------------------------------------------- */
/* Malloc and free stuff */
#define MALLOC_DONT_FAIL -1
static int malloc_count;
static int malloc_fail_countdown = MALLOC_DONT_FAIL;

void UnityMalloc_StartTest(void)
{
    malloc_count = 0;
    malloc_fail_countdown = MALLOC_DONT_FAIL;
}

void UnityMalloc_EndTest(void)
{
    malloc_fail_countdown = MALLOC_DONT_FAIL;
    if (malloc_count != 0)
    {
        UNITY_TEST_FAIL(Unity.CurrentTestLineNumber, "This test leaks!");
    }
}

void UnityMalloc_MakeMallocFailAfterCount(int countdown)
{
    malloc_fail_countdown = countdown;
}

/* These definitions are always included from unity_fixture_malloc_overrides.h */
/* We undef to use them or avoid conflict with <stdlib.h> per the C standard */
#undef malloc
#undef free
#undef calloc
#undef realloc

#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
static unsigned char unity_heap[UNITY_INTERNAL_HEAP_SIZE_BYTES];
static size_t heap_index;
#else
#include <stdlib.h>
#endif

typedef struct GuardBytes
{
    size_t size;
    size_t guard_space;
} Guard;


static const char end[] = "END";

void* unity_malloc(size_t size)
{
    char* mem;
    Guard* guard;
    size_t total_size = size + sizeof(Guard) + sizeof(end);

    if (malloc_fail_countdown != MALLOC_DONT_FAIL)
    {
        if (malloc_fail_countdown == 0)
            return NULL;
        malloc_fail_countdown--;
    }

    if (size == 0) return NULL;
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    if (heap_index + total_size > UNITY_INTERNAL_HEAP_SIZE_BYTES)
    {
        guard = NULL;
    }
    else
    {
        guard = (Guard*)&unity_heap[heap_index];
        heap_index += total_size;
    }
#else
    guard = (Guard*)UNITY_FIXTURE_MALLOC(total_size);
#endif
    if (guard == NULL) return NULL;
    malloc_count++;
    guard->size = size;
    guard->guard_space = 0;
    mem = (char*)&(guard[1]);
    memcpy(&mem[size], end, sizeof(end));

    return (void*)mem;
}

static int isOverrun(void* mem)
{
    Guard* guard = (Guard*)mem;
    char* memAsChar = (char*)mem;
    guard--;

    return guard->guard_space != 0 || strcmp(&memAsChar[guard->size], end) != 0;
}

static void release_memory(void* mem)
{
    Guard* guard = (Guard*)mem;
    guard--;

    malloc_count--;
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    if (mem == unity_heap + heap_index - guard->size - sizeof(end))
    {
        heap_index -= (guard->size + sizeof(Guard) + sizeof(end));
    }
#else
    UNITY_FIXTURE_FREE(guard);
#endif
}

void unity_free(void* mem)
{
    int overrun;

    if (mem == NULL)
    {
        return;
    }

    overrun = isOverrun(mem);
    release_memory(mem);
    if (overrun)
    {
        UNITY_TEST_FAIL(Unity.CurrentTestLineNumber, "Buffer overrun detected during free()");
    }
}

void* unity_calloc(size_t num, size_t size)
{
    void* mem = unity_malloc(num * size);
    if (mem == NULL) return NULL;
    memset(mem, 0, num * size);
    return mem;
}

void* unity_realloc(void* oldMem, size_t size)
{
    Guard* guard = (Guard*)oldMem;
    void* newMem;

    if (oldMem == NULL) return unity_malloc(size);

    guard--;
    if (isOverrun(oldMem))
    {
        release_memory(oldMem);
        UNITY_TEST_FAIL(Unity.CurrentTestLineNumber, "Buffer overrun detected during realloc()");
    }

    if (size == 0)
    {
        release_memory(oldMem);
        return NULL;
    }

    if (guard->size >= size) return oldMem;

#ifdef UNITY_EXCLUDE_STDLIB_MALLOC /* Optimization if memory is expandable */
    if (oldMem == unity_heap + heap_index - guard->size - sizeof(end) &&
        heap_index + size - guard->size <= UNITY_INTERNAL_HEAP_SIZE_BYTES)
    {
        release_memory(oldMem);    /* Not thread-safe, like unity_heap generally */
        return unity_malloc(size); /* No memcpy since data is in place */
    }
#endif
    newMem = unity_malloc(size);
    if (newMem == NULL) return NULL; /* Do not release old memory */
    memcpy(newMem, oldMem, guard->size);
    release_memory(oldMem);
    return newMem;
}


/*-------------------------------------------------------- */
/*Automatic pointer restoration functions */
struct PointerPair
{
    void** pointer;
    void* old_value;
};

static struct PointerPair pointer_store[UNITY_MAX_POINTERS];
static int pointer_index = 0;

void UnityPointer_Init(void)
{
    pointer_index = 0;
}

void UnityPointer_Set(void** pointer, void* newValue, UNITY_LINE_TYPE line)
{
    if (pointer_index >= UNITY_MAX_POINTERS)
    {
        UNITY_TEST_FAIL(line, "Too many pointers set");
    }
    else
    {
        pointer_store[pointer_index].pointer = pointer;
        pointer_store[pointer_index].old_value = *pointer;
        *pointer = newValue;
        pointer_index++;
    }
}

void UnityPointer_UndoAllSets(void)
{
    while (pointer_index > 0)
    {
        pointer_index--;
        *(pointer_store[pointer_index].pointer) =
            pointer_store[pointer_index].old_value;
    }
}

int UnityGetCommandLineOptions(int argc, const char* argv[])
{
    int i;
    UnityFixture.Verbose = 0;
    UnityFixture.GroupFilter = 0;
    UnityFixture.NameFilter = 0;
    UnityFixture.RepeatCount = 1;

    if (argc == 1)
        return 0;

    for (i = 1; i < argc; )
    {
        if (strcmp(argv[i], "-v") == 0)
        {
            UnityFixture.Verbose = 1;
            i++;
        }
        else if (strcmp(argv[i], "-g") == 0)
        {
            i++;
            if (i >= argc)
                return 1;
            UnityFixture.GroupFilter = argv[i];
            i++;
        }
        else if (strcmp(argv[i], "-n") == 0)
        {
            i++;
            if (i >= argc)
                return 1;
            UnityFixture.NameFilter = argv[i];
            i++;
        }
        else if (strcmp(argv[i], "-r") == 0)
        {
            UnityFixture.RepeatCount = 2;
            i++;
            if (i < argc)
            {
                if (*(argv[i]) >= '0' && *(argv[i]) <= '9')
                {
                    unsigned int digit = 0;
                    UnityFixture.RepeatCount = 0;
                    while (argv[i][digit] >= '0' && argv[i][digit] <= '9')
                    {
                        UnityFixture.RepeatCount *= 10;
                        UnityFixture.RepeatCount += (unsigned int)argv[i][digit++] - '0';
                    }
                    i++;
                }
            }
        }
        else
        {
            /* ignore unknown parameter */
            i++;
        }
    }
    return 0;
}

void UnityConcludeFixtureTest(void)
{
    if (Unity.CurrentTestIgnored)
    {
        Unity.TestIgnores++;
        UNITY_PRINT_EOL();
    }
    else if (!Unity.CurrentTestFailed)
    {
        if (UnityFixture.Verbose)
        {
            UnityPrint(" PASS");
            UNITY_PRINT_EOL();
        }
    }
    else /* Unity.CurrentTestFailed */
    {
        Unity.TestFailures++;
        UNITY_PRINT_EOL();
    }

    Unity.CurrentTestFailed = 0;
    Unity.CurrentTestIgnored = 0;
}


/* FILE: tests/unity/extras/fixture/test/template_fixture_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/test/template_fixture_tests.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#include "unity_fixture.h"

static int data = -1;

TEST_GROUP(mygroup);

TEST_SETUP(mygroup)
{
    data = 0;
}

TEST_TEAR_DOWN(mygroup)
{
    data = -1;
}

TEST(mygroup, test1)
{
    TEST_ASSERT_EQUAL_INT(0, data);
}

TEST(mygroup, test2)
{
    TEST_ASSERT_EQUAL_INT(0, data);
    data = 5;
}

TEST(mygroup, test3)
{
    data = 7;
    TEST_ASSERT_EQUAL_INT(7, data);
}


/* FILE: tests/unity/extras/fixture/test/unity_output_Spy.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/test/unity_output_Spy.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */


#include "unity_output_Spy.h"
#include "unity_fixture.h"

#include <stdio.h>
#include <string.h>

static int size;
static int count;
static char* buffer;
static int spy_enable;

void UnityOutputCharSpy_Create(int s)
{
    size = (s > 0) ? s : 0;
    count = 0;
    spy_enable = 0;
    buffer = malloc((size_t)size);
    TEST_ASSERT_NOT_NULL_MESSAGE(buffer, "Internal malloc failed in Spy Create():" __FILE__);
    memset(buffer, 0, (size_t)size);
}

void UnityOutputCharSpy_Destroy(void)
{
    size = 0;
    free(buffer);
}

void UnityOutputCharSpy_OutputChar(int c)
{
    if (spy_enable)
    {
        if (count < (size-1))
            buffer[count++] = (char)c;
    }
    else
    {
        putchar(c);
    }
}

const char * UnityOutputCharSpy_Get(void)
{
    return buffer;
}

void UnityOutputCharSpy_Enable(int enable)
{
    spy_enable = enable;
}


/* FILE: tests/unity/extras/fixture/test/unity_fixture_Test.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/test/unity_fixture_Test.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#include "unity_fixture.h"
#include "unity_output_Spy.h"
#include <stdlib.h>
#include <string.h>

TEST_GROUP(UnityFixture);

TEST_SETUP(UnityFixture)
{
}

TEST_TEAR_DOWN(UnityFixture)
{
}

static int* pointer1 = 0;
static int* pointer2 = (int*)2;
static int* pointer3 = (int*)3;
static int int1;
static int int2;
static int int3;
static int int4;

TEST(UnityFixture, PointerSetting)
{
    TEST_ASSERT_POINTERS_EQUAL(pointer1, 0);
    UT_PTR_SET(pointer1, &int1);
    UT_PTR_SET(pointer2, &int2);
    UT_PTR_SET(pointer3, &int3);
    TEST_ASSERT_POINTERS_EQUAL(pointer1, &int1);
    TEST_ASSERT_POINTERS_EQUAL(pointer2, &int2);
    TEST_ASSERT_POINTERS_EQUAL(pointer3, &int3);
    UT_PTR_SET(pointer1, &int4);
    UnityPointer_UndoAllSets();
    TEST_ASSERT_POINTERS_EQUAL(pointer1, 0);
    TEST_ASSERT_POINTERS_EQUAL(pointer2, (int*)2);
    TEST_ASSERT_POINTERS_EQUAL(pointer3, (int*)3);
}

TEST(UnityFixture, ForceMallocFail)
{
    void* m;
    void* mfails;
    UnityMalloc_MakeMallocFailAfterCount(1);
    m = malloc(10);
    CHECK(m);
    mfails = malloc(10);
    TEST_ASSERT_POINTERS_EQUAL(0, mfails);
    free(m);
}

TEST(UnityFixture, ReallocSmallerIsUnchanged)
{
    void* m1 = malloc(10);
    void* m2 = realloc(m1, 5);
    TEST_ASSERT_POINTERS_EQUAL(m1, m2);
    free(m2);
}

TEST(UnityFixture, ReallocSameIsUnchanged)
{
    void* m1 = malloc(10);
    void* m2 = realloc(m1, 10);
    TEST_ASSERT_POINTERS_EQUAL(m1, m2);
    free(m2);
}

TEST(UnityFixture, ReallocLargerNeeded)
{
    void* m1 = malloc(10);
    void* m2;
    CHECK(m1);
    strcpy((char*)m1, "123456789");
    m2 = realloc(m1, 15);
    /* CHECK(m1 != m2); //Depends on implementation */
    STRCMP_EQUAL("123456789", m2);
    free(m2);
}

TEST(UnityFixture, ReallocNullPointerIsLikeMalloc)
{
    void* m = realloc(0, 15);
    CHECK(m != 0);
    free(m);
}

TEST(UnityFixture, ReallocSizeZeroFreesMemAndReturnsNullPointer)
{
    void* m1 = malloc(10);
    void* m2 = realloc(m1, 0);
    TEST_ASSERT_POINTERS_EQUAL(0, m2);
}

TEST(UnityFixture, CallocFillsWithZero)
{
    void* m = calloc(3, sizeof(char));
    char* s = (char*)m;
    CHECK(m);
    TEST_ASSERT_BYTES_EQUAL(0, s[0]);
    TEST_ASSERT_BYTES_EQUAL(0, s[1]);
    TEST_ASSERT_BYTES_EQUAL(0, s[2]);
    free(m);
}

static char *p1;
static char *p2;

TEST(UnityFixture, PointerSet)
{
    char c1;
    char c2;
    char newC1;
    char newC2;
    p1 = &c1;
    p2 = &c2;

    UnityPointer_Init();
    UT_PTR_SET(p1, &newC1);
    UT_PTR_SET(p2, &newC2);
    TEST_ASSERT_POINTERS_EQUAL(&newC1, p1);
    TEST_ASSERT_POINTERS_EQUAL(&newC2, p2);
    UnityPointer_UndoAllSets();
    TEST_ASSERT_POINTERS_EQUAL(&c1, p1);
    TEST_ASSERT_POINTERS_EQUAL(&c2, p2);
}

TEST(UnityFixture, FreeNULLSafety)
{
    free(NULL);
}

TEST(UnityFixture, ConcludeTestIncrementsFailCount)
{
    UNITY_UINT savedFails = Unity.TestFailures;
    UNITY_UINT savedIgnores = Unity.TestIgnores;
    UnityOutputCharSpy_Enable(1);
    Unity.CurrentTestFailed = 1;
    UnityConcludeFixtureTest(); /* Resets TestFailed for this test to pass */
    Unity.CurrentTestIgnored = 1;
    UnityConcludeFixtureTest(); /* Resets TestIgnored */
    UnityOutputCharSpy_Enable(0);
    TEST_ASSERT_EQUAL(savedFails + 1, Unity.TestFailures);
    TEST_ASSERT_EQUAL(savedIgnores + 1, Unity.TestIgnores);
    Unity.TestFailures = savedFails;
    Unity.TestIgnores = savedIgnores;
}

/*------------------------------------------------------------ */

TEST_GROUP(UnityCommandOptions);

static int savedVerbose;
static unsigned int savedRepeat;
static const char* savedName;
static const char* savedGroup;

TEST_SETUP(UnityCommandOptions)
{
    savedVerbose = UnityFixture.Verbose;
    savedRepeat = UnityFixture.RepeatCount;
    savedName = UnityFixture.NameFilter;
    savedGroup = UnityFixture.GroupFilter;
}

TEST_TEAR_DOWN(UnityCommandOptions)
{
    UnityFixture.Verbose = savedVerbose;
    UnityFixture.RepeatCount= savedRepeat;
    UnityFixture.NameFilter = savedName;
    UnityFixture.GroupFilter = savedGroup;
}


static const char* noOptions[] = {
        "testrunner.exe"
};

TEST(UnityCommandOptions, DefaultOptions)
{
    UnityGetCommandLineOptions(1, noOptions);
    TEST_ASSERT_EQUAL(0, UnityFixture.Verbose);
    TEST_ASSERT_POINTERS_EQUAL(0, UnityFixture.GroupFilter);
    TEST_ASSERT_POINTERS_EQUAL(0, UnityFixture.NameFilter);
    TEST_ASSERT_EQUAL(1, UnityFixture.RepeatCount);
}

static const char* verbose[] = {
        "testrunner.exe",
        "-v"
};

TEST(UnityCommandOptions, OptionVerbose)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(2, verbose));
    TEST_ASSERT_EQUAL(1, UnityFixture.Verbose);
}

static const char* group[] = {
        "testrunner.exe",
        "-g", "groupname"
};

TEST(UnityCommandOptions, OptionSelectTestByGroup)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(3, group));
    STRCMP_EQUAL("groupname", UnityFixture.GroupFilter);
}

static const char* name[] = {
        "testrunner.exe",
        "-n", "testname"
};

TEST(UnityCommandOptions, OptionSelectTestByName)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(3, name));
    STRCMP_EQUAL("testname", UnityFixture.NameFilter);
}

static const char* repeat[] = {
        "testrunner.exe",
        "-r", "99"
};

TEST(UnityCommandOptions, OptionSelectRepeatTestsDefaultCount)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(2, repeat));
    TEST_ASSERT_EQUAL(2, UnityFixture.RepeatCount);
}

TEST(UnityCommandOptions, OptionSelectRepeatTestsSpecificCount)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(3, repeat));
    TEST_ASSERT_EQUAL(99, UnityFixture.RepeatCount);
}

static const char* multiple[] = {
        "testrunner.exe",
        "-v",
        "-g", "groupname",
        "-n", "testname",
        "-r", "98"
};

TEST(UnityCommandOptions, MultipleOptions)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(8, multiple));
    TEST_ASSERT_EQUAL(1, UnityFixture.Verbose);
    STRCMP_EQUAL("groupname", UnityFixture.GroupFilter);
    STRCMP_EQUAL("testname", UnityFixture.NameFilter);
    TEST_ASSERT_EQUAL(98, UnityFixture.RepeatCount);
}

static const char* dashRNotLast[] = {
        "testrunner.exe",
        "-v",
        "-g", "gggg",
        "-r",
        "-n", "tttt",
};

TEST(UnityCommandOptions, MultipleOptionsDashRNotLastAndNoValueSpecified)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(7, dashRNotLast));
    TEST_ASSERT_EQUAL(1, UnityFixture.Verbose);
    STRCMP_EQUAL("gggg", UnityFixture.GroupFilter);
    STRCMP_EQUAL("tttt", UnityFixture.NameFilter);
    TEST_ASSERT_EQUAL(2, UnityFixture.RepeatCount);
}

static const char* unknownCommand[] = {
        "testrunner.exe",
        "-v",
        "-g", "groupname",
        "-n", "testname",
        "-r", "98",
        "-z"
};
TEST(UnityCommandOptions, UnknownCommandIsIgnored)
{
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(9, unknownCommand));
    TEST_ASSERT_EQUAL(1, UnityFixture.Verbose);
    STRCMP_EQUAL("groupname", UnityFixture.GroupFilter);
    STRCMP_EQUAL("testname", UnityFixture.NameFilter);
    TEST_ASSERT_EQUAL(98, UnityFixture.RepeatCount);
}

TEST(UnityCommandOptions, GroupOrNameFilterWithoutStringFails)
{
    TEST_ASSERT_EQUAL(1, UnityGetCommandLineOptions(3, unknownCommand));
    TEST_ASSERT_EQUAL(1, UnityGetCommandLineOptions(5, unknownCommand));
    TEST_ASSERT_EQUAL(1, UnityMain(3, unknownCommand, NULL));
}

TEST(UnityCommandOptions, GroupFilterReallyFilters)
{
    UNITY_UINT saved = Unity.NumberOfTests;
    TEST_ASSERT_EQUAL(0, UnityGetCommandLineOptions(4, unknownCommand));
    UnityIgnoreTest(NULL, "non-matching", NULL);
    TEST_ASSERT_EQUAL(saved, Unity.NumberOfTests);
}

IGNORE_TEST(UnityCommandOptions, TestShouldBeIgnored)
{
    TEST_FAIL_MESSAGE("This test should not run!");
}

/*------------------------------------------------------------ */

TEST_GROUP(LeakDetection);

TEST_SETUP(LeakDetection)
{
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    UnityOutputCharSpy_Create(200);
#else
    UnityOutputCharSpy_Create(1000);
#endif
}

TEST_TEAR_DOWN(LeakDetection)
{
    UnityOutputCharSpy_Destroy();
}

#define EXPECT_ABORT_BEGIN \
  { \
    jmp_buf TestAbortFrame;   \
    memcpy(TestAbortFrame, Unity.AbortFrame, sizeof(jmp_buf)); \
    if (TEST_PROTECT()) \
    {

#define EXPECT_ABORT_END \
    } \
    memcpy(Unity.AbortFrame, TestAbortFrame, sizeof(jmp_buf)); \
  }

/* This tricky set of defines lets us see if we are using the Spy, returns 1 if true */
#ifdef __STDC_VERSION__

#if __STDC_VERSION__ >= 199901L
#define USING_SPY_AS(a)                    EXPAND_AND_USE_2ND(ASSIGN_VALUE(a), 0)
#define ASSIGN_VALUE(a)                    VAL_##a
#define VAL_UnityOutputCharSpy_OutputChar  0, 1
#define EXPAND_AND_USE_2ND(a, b)           SECOND_PARAM(a, b, throwaway)
#define SECOND_PARAM(a, b, ...)            b
#if USING_SPY_AS(UNITY_OUTPUT_CHAR)
  #define USING_OUTPUT_SPY /* UNITY_OUTPUT_CHAR = UnityOutputCharSpy_OutputChar */
#endif
#endif /* >= 199901 */

#else  /* __STDC_VERSION__ else */
#define UnityOutputCharSpy_OutputChar 42
#if UNITY_OUTPUT_CHAR == UnityOutputCharSpy_OutputChar /* Works if no -Wundef -Werror */
  #define USING_OUTPUT_SPY
#endif
#undef UnityOutputCharSpy_OutputChar
#endif /* __STDC_VERSION__ */

TEST(LeakDetection, DetectsLeak)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE_MESSAGE("Build with '-D UNITY_OUTPUT_CHAR=UnityOutputCharSpy_OutputChar' to enable tests");
#else
    void* m = malloc(10);
    TEST_ASSERT_NOT_NULL(m);
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    UnityMalloc_EndTest();
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "This test leaks!"));
    free(m);
#endif
}

TEST(LeakDetection, BufferOverrunFoundDuringFree)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    void* m = malloc(10);
    char* s = (char*)m;
    TEST_ASSERT_NOT_NULL(m);
    s[10] = (char)0xFF;
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    free(m);
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "Buffer overrun detected during free()"));
#endif
}

TEST(LeakDetection, BufferOverrunFoundDuringRealloc)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    void* m = malloc(10);
    char* s = (char*)m;
    TEST_ASSERT_NOT_NULL(m);
    s[10] = (char)0xFF;
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    m = realloc(m, 100);
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "Buffer overrun detected during realloc()"));
#endif
}

TEST(LeakDetection, BufferGuardWriteFoundDuringFree)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    void* m = malloc(10);
    char* s = (char*)m;
    TEST_ASSERT_NOT_NULL(m);
    s[-1] = (char)0x00; /* Will not detect 0 */
    s[-2] = (char)0x01;
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    free(m);
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "Buffer overrun detected during free()"));
#endif
}

TEST(LeakDetection, BufferGuardWriteFoundDuringRealloc)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    void* m = malloc(10);
    char* s = (char*)m;
    TEST_ASSERT_NOT_NULL(m);
    s[-1] = (char)0x0A;
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    m = realloc(m, 100);
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "Buffer overrun detected during realloc()"));
#endif
}

TEST(LeakDetection, PointerSettingMax)
{
#ifndef USING_OUTPUT_SPY
    TEST_IGNORE();
#else
    int i;
    for (i = 0; i < UNITY_MAX_POINTERS; i++) UT_PTR_SET(pointer1, &int1);
    UnityOutputCharSpy_Enable(1);
    EXPECT_ABORT_BEGIN
    UT_PTR_SET(pointer1, &int1);
    EXPECT_ABORT_END
    UnityOutputCharSpy_Enable(0);
    Unity.CurrentTestFailed = 0;
    CHECK(strstr(UnityOutputCharSpy_Get(), "Too many pointers set"));
#endif
}

/*------------------------------------------------------------ */

TEST_GROUP(InternalMalloc);
#define TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(first_mem_ptr, ptr) \
    ptr = malloc(10); free(ptr);                                   \
    TEST_ASSERT_EQUAL_PTR_MESSAGE(first_mem_ptr, ptr, "Memory was stranded, free in LIFO order");


TEST_SETUP(InternalMalloc) { }
TEST_TEAR_DOWN(InternalMalloc) { }

TEST(InternalMalloc, MallocPastBufferFails)
{
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    void* m = malloc(UNITY_INTERNAL_HEAP_SIZE_BYTES/2 + 1);
    void* n = malloc(UNITY_INTERNAL_HEAP_SIZE_BYTES/2);
    free(m);
    TEST_ASSERT_NOT_NULL(m);
    TEST_ASSERT_NULL(n);
    TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(m, n);
#endif
}

TEST(InternalMalloc, CallocPastBufferFails)
{
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    void* m = calloc(1, UNITY_INTERNAL_HEAP_SIZE_BYTES/2 + 1);
    void* n = calloc(1, UNITY_INTERNAL_HEAP_SIZE_BYTES/2);
    free(m);
    TEST_ASSERT_NOT_NULL(m);
    TEST_ASSERT_NULL(n);
    TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(m, n);
#endif
}

TEST(InternalMalloc, MallocThenReallocGrowsMemoryInPlace)
{
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    void* m = malloc(UNITY_INTERNAL_HEAP_SIZE_BYTES/2 + 1);
    void* n = realloc(m, UNITY_INTERNAL_HEAP_SIZE_BYTES/2 + 9);
    free(n);
    TEST_ASSERT_NOT_NULL(m);
    TEST_ASSERT_EQUAL(m, n);
    TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(m, n);
#endif
}

TEST(InternalMalloc, ReallocFailDoesNotFreeMem)
{
#ifdef UNITY_EXCLUDE_STDLIB_MALLOC
    void* m = malloc(UNITY_INTERNAL_HEAP_SIZE_BYTES/2);
    void* n1 = malloc(10);
    void* out_of_mem = realloc(n1, UNITY_INTERNAL_HEAP_SIZE_BYTES/2 + 1);
    void* n2 = malloc(10);

    free(n2);
    if (out_of_mem == NULL) free(n1);
    free(m);

    TEST_ASSERT_NOT_NULL(m);       /* Got a real memory location */
    TEST_ASSERT_NULL(out_of_mem);  /* The realloc should have failed */
    TEST_ASSERT_NOT_EQUAL(n2, n1); /* If n1 != n2 then realloc did not free n1 */
    TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER(m, n2);
#endif
}


/* FILE: tests/unity/extras/fixture/test/unity_fixture_TestRunner.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/test/unity_fixture_TestRunner.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(UnityFixture)
{
    RUN_TEST_CASE(UnityFixture, PointerSetting);
    RUN_TEST_CASE(UnityFixture, ForceMallocFail);
    RUN_TEST_CASE(UnityFixture, ReallocSmallerIsUnchanged);
    RUN_TEST_CASE(UnityFixture, ReallocSameIsUnchanged);
    RUN_TEST_CASE(UnityFixture, ReallocLargerNeeded);
    RUN_TEST_CASE(UnityFixture, ReallocNullPointerIsLikeMalloc);
    RUN_TEST_CASE(UnityFixture, ReallocSizeZeroFreesMemAndReturnsNullPointer);
    RUN_TEST_CASE(UnityFixture, CallocFillsWithZero);
    RUN_TEST_CASE(UnityFixture, PointerSet);
    RUN_TEST_CASE(UnityFixture, FreeNULLSafety);
    RUN_TEST_CASE(UnityFixture, ConcludeTestIncrementsFailCount);
}

TEST_GROUP_RUNNER(UnityCommandOptions)
{
    RUN_TEST_CASE(UnityCommandOptions, DefaultOptions);
    RUN_TEST_CASE(UnityCommandOptions, OptionVerbose);
    RUN_TEST_CASE(UnityCommandOptions, OptionSelectTestByGroup);
    RUN_TEST_CASE(UnityCommandOptions, OptionSelectTestByName);
    RUN_TEST_CASE(UnityCommandOptions, OptionSelectRepeatTestsDefaultCount);
    RUN_TEST_CASE(UnityCommandOptions, OptionSelectRepeatTestsSpecificCount);
    RUN_TEST_CASE(UnityCommandOptions, MultipleOptions);
    RUN_TEST_CASE(UnityCommandOptions, MultipleOptionsDashRNotLastAndNoValueSpecified);
    RUN_TEST_CASE(UnityCommandOptions, UnknownCommandIsIgnored);
    RUN_TEST_CASE(UnityCommandOptions, GroupOrNameFilterWithoutStringFails);
    RUN_TEST_CASE(UnityCommandOptions, GroupFilterReallyFilters);
    RUN_TEST_CASE(UnityCommandOptions, TestShouldBeIgnored);
}

TEST_GROUP_RUNNER(LeakDetection)
{
    RUN_TEST_CASE(LeakDetection, DetectsLeak);
    RUN_TEST_CASE(LeakDetection, BufferOverrunFoundDuringFree);
    RUN_TEST_CASE(LeakDetection, BufferOverrunFoundDuringRealloc);
    RUN_TEST_CASE(LeakDetection, BufferGuardWriteFoundDuringFree);
    RUN_TEST_CASE(LeakDetection, BufferGuardWriteFoundDuringRealloc);
    RUN_TEST_CASE(LeakDetection, PointerSettingMax);
}

TEST_GROUP_RUNNER(InternalMalloc)
{
    RUN_TEST_CASE(InternalMalloc, MallocPastBufferFails);
    RUN_TEST_CASE(InternalMalloc, CallocPastBufferFails);
    RUN_TEST_CASE(InternalMalloc, MallocThenReallocGrowsMemoryInPlace);
    RUN_TEST_CASE(InternalMalloc, ReallocFailDoesNotFreeMem);
}


/* FILE: tests/unity/extras/fixture/test/main/AllTests.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/extras/fixture/test/main/AllTests.c */
/* ------------------------------------------------------------ */
/* Copyright (c) 2010 James Grenning and Contributed to Unity Project
 * ==========================================
 *  Unity Project - A Test Framework for C
 *  Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
 *  [Released under MIT License. Please refer to license.txt for details]
 * ========================================== */

#include "unity_fixture.h"

static void runAllTests(void)
{
    RUN_TEST_GROUP(UnityFixture);
    RUN_TEST_GROUP(UnityCommandOptions);
    RUN_TEST_GROUP(LeakDetection);
    RUN_TEST_GROUP(InternalMalloc);
}

int main(int argc, const char* argv[])
{
    return UnityMain(argc, argv, runAllTests);
}



/* FILE: tests/unity/examples/example_3/src/ProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_3/src/ProductionCode2.c */
/* ------------------------------------------------------------ */

#include "ProductionCode2.h"

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction)
{
  (void)Poor;
  (void)LittleFunction;
  //Since There Are No Tests Yet, This Function Could Be Empty For All We Know.
  // Which isn't terribly useful... but at least we put in a TEST_IGNORE so we won't forget
  return (char*)0;
}


/* FILE: tests/unity/examples/example_3/src/ProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_3/src/ProductionCode.c */
/* ------------------------------------------------------------ */

#include "ProductionCode.h"

int Counter = 0;
int NumbersToFind[9] = { 0, 34, 55, 66, 32, 11, 1, 77, 888 }; //some obnoxious array to search that is 1-based indexing instead of 0.

// This function is supposed to search through NumbersToFind and find a particular number.  
// If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
// NumbersToFind is indexed from 1.  Unfortunately it's broken 
// (and should therefore be caught by our tests)
int FindFunction_WhichIsBroken(int NumberToFind)
{
    int i = 0;
    while (i <= 8) //Notice I should have been in braces
        i++;
        if (NumbersToFind[i] == NumberToFind) //Yikes!  I'm getting run after the loop finishes instead of during it!
            return i;
    return 0;
}

int FunctionWhichReturnsLocalVariable(void)
{
    return Counter;
}


/* FILE: tests/unity/examples/example_3/test/TestProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_3/test/TestProductionCode2.c */
/* ------------------------------------------------------------ */

#include "ProductionCode2.h"
#include "unity.h"

/* These should be ignored because they are commented out in various ways:
#include "whatever.h" 
*/
//#include "somethingelse.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_IgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

void test_AnotherIgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("These Can Be Useful For Leaving Yourself Notes On What You Need To Do Yet");
}

void test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented(void)
{
    TEST_IGNORE(); //Like This
}


/* FILE: tests/unity/examples/example_3/test/TestProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_3/test/TestProductionCode.c */
/* ------------------------------------------------------------ */

#include "ProductionCode.h"
#include "unity.h"

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided
extern int Counter; 

void setUp(void)
{
  //This is run before EACH TEST
  Counter = 0x5a5a;
}

void tearDown(void)
{
}

void test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode(void)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(78));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(1));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(33));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(999));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(-1));
}

void test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken(void)
{
  // You should see this line fail in your test summary
  TEST_ASSERT_EQUAL(1, FindFunction_WhichIsBroken(34));
  
  // Notice the rest of these didn't get a chance to run because the line above failed.  
  // Unit tests abort each test function on the first sign of trouble. 
  // Then NEXT test function runs as normal.
  TEST_ASSERT_EQUAL(8, FindFunction_WhichIsBroken(8888));
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue(void)
{
    //This should be true because setUp set this up for us before this test
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());
    
    //This should be true because we can still change our answer
    Counter = 0x1234;
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain(void)
{
    //This should be true again because setup was rerun before this test (and after we changed it to 0x1234)
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed(void)
{
    //Sometimes you get the test wrong.  When that happens, you get a failure too... and a quick look should tell
    // you what actually happened...which in this case was a failure to setup the initial condition.
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}


/* FILE: tests/unity/examples/example_3/helper/UnityHelper.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_3/helper/UnityHelper.c */
/* ------------------------------------------------------------ */
#include "unity.h"
#include "UnityHelper.h"
#include <stdio.h>
#include <string.h>

void AssertEqualExampleStruct(const EXAMPLE_STRUCT_T expected, const EXAMPLE_STRUCT_T actual, const unsigned short line)
{
    UNITY_TEST_ASSERT_EQUAL_INT(expected.x, actual.x, line, "Example Struct Failed For Field x");
    UNITY_TEST_ASSERT_EQUAL_INT(expected.y, actual.y, line, "Example Struct Failed For Field y");
}


/* FILE: tests/unity/examples/example_1/src/ProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/src/ProductionCode2.c */
/* ------------------------------------------------------------ */

#include "ProductionCode2.h"

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction)
{
  (void)Poor;
  (void)LittleFunction;
  /* Since There Are No Tests Yet, This Function Could Be Empty For All We Know.
   * Which isn't terribly useful... but at least we put in a TEST_IGNORE so we won't forget */
  return (char*)0;
}


/* FILE: tests/unity/examples/example_1/src/ProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/src/ProductionCode.c */
/* ------------------------------------------------------------ */

#include "ProductionCode.h"

int Counter = 0;
int NumbersToFind[9] = { 0, 34, 55, 66, 32, 11, 1, 77, 888 }; /* some obnoxious array to search that is 1-based indexing instead of 0. */

/* This function is supposed to search through NumbersToFind and find a particular number.  
 * If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
 * NumbersToFind is indexed from 1.  Unfortunately it's broken 
 * (and should therefore be caught by our tests) */
int FindFunction_WhichIsBroken(int NumberToFind)
{
    int i = 0;
    while (i <= 8) /* Notice I should have been in braces */
        i++;
        if (NumbersToFind[i] == NumberToFind) /* Yikes!  I'm getting run after the loop finishes instead of during it! */
            return i;
    return 0;
}

int FunctionWhichReturnsLocalVariable(void)
{
    return Counter;
}


/* FILE: tests/unity/examples/example_1/test/TestProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/test/TestProductionCode2.c */
/* ------------------------------------------------------------ */

#include "ProductionCode2.h"
#include "unity.h"

/* These should be ignored because they are commented out in various ways:
#include "whatever.h" 
#include "somethingelse.h"
*/

void setUp(void)
{
}

void tearDown(void)
{
}

void test_IgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

void test_AnotherIgnoredTest(void)
{
    TEST_IGNORE_MESSAGE("These Can Be Useful For Leaving Yourself Notes On What You Need To Do Yet");
}

void test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented(void)
{
    TEST_IGNORE(); /* Like This */
}


/* FILE: tests/unity/examples/example_1/test/TestProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/test/TestProductionCode.c */
/* ------------------------------------------------------------ */

#include "ProductionCode.h"
#include "unity.h"

/* sometimes you may want to get at local data in a module.
 * for example: If you plan to pass by reference, this could be useful
 * however, it should often be avoided */
extern int Counter; 

void setUp(void)
{
  /* This is run before EACH TEST */
  Counter = 0x5a5a;
}

void tearDown(void)
{
}

void test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(78));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(1));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(33));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(999));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(-1));
}

void test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken(void)
{
  /* You should see this line fail in your test summary */
  TEST_ASSERT_EQUAL(1, FindFunction_WhichIsBroken(34));
  
  /* Notice the rest of these didn't get a chance to run because the line above failed.  
   * Unit tests abort each test function on the first sign of trouble. 
   * Then NEXT test function runs as normal. */
  TEST_ASSERT_EQUAL(8, FindFunction_WhichIsBroken(8888));
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue(void)
{
    /* This should be true because setUp set this up for us before this test */
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());
    
    /* This should be true because we can still change our answer */
    Counter = 0x1234;
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain(void)
{
    /* This should be true again because setup was rerun before this test (and after we changed it to 0x1234) */
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());
}

void test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed(void)
{
    /* Sometimes you get the test wrong.  When that happens, you get a failure too... and a quick look should tell
     * you what actually happened...which in this case was a failure to setup the initial condition. */
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}


/* FILE: tests/unity/examples/example_1/test/test_runners/TestProductionCode_Runner.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/test/test_runners/TestProductionCode_Runner.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "ProductionCode.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode(void);
extern void test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken(void);
extern void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue(void);
extern void test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain(void);
extern void test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test/TestProductionCode.c");
  RUN_TEST(test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode, 20);
  RUN_TEST(test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken, 30);
  RUN_TEST(test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue, 41);
  RUN_TEST(test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain, 51);
  RUN_TEST(test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed, 57);

  return (UnityEnd());
}


/* FILE: tests/unity/examples/example_1/test/test_runners/TestProductionCode2_Runner.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_1/test/test_runners/TestProductionCode2_Runner.c */
/* ------------------------------------------------------------ */
/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "ProductionCode2.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_IgnoredTest(void);
extern void test_AnotherIgnoredTest(void);
extern void test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test/TestProductionCode2.c");
  RUN_TEST(test_IgnoredTest, 18);
  RUN_TEST(test_AnotherIgnoredTest, 23);
  RUN_TEST(test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented, 28);

  return (UnityEnd());
}


/* FILE: tests/unity/examples/example_2/src/ProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/src/ProductionCode2.c */
/* ------------------------------------------------------------ */

#include "ProductionCode2.h"

char* ThisFunctionHasNotBeenTested(int Poor, char* LittleFunction)
{
  (void)Poor;
  (void)LittleFunction;
  //Since There Are No Tests Yet, This Function Could Be Empty For All We Know.
  // Which isn't terribly useful... but at least we put in a TEST_IGNORE so we won't forget
  return (char*)0;
}


/* FILE: tests/unity/examples/example_2/src/ProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/src/ProductionCode.c */
/* ------------------------------------------------------------ */

#include "ProductionCode.h"

int Counter = 0;
int NumbersToFind[9] = { 0, 34, 55, 66, 32, 11, 1, 77, 888 }; //some obnoxious array to search that is 1-based indexing instead of 0.

// This function is supposed to search through NumbersToFind and find a particular number.  
// If it finds it, the index is returned.  Otherwise 0 is returned which sorta makes sense since 
// NumbersToFind is indexed from 1.  Unfortunately it's broken 
// (and should therefore be caught by our tests)
int FindFunction_WhichIsBroken(int NumberToFind)
{
    int i = 0;
    while (i <= 8) //Notice I should have been in braces
        i++;
        if (NumbersToFind[i] == NumberToFind) //Yikes!  I'm getting run after the loop finishes instead of during it!
            return i;
    return 0;
}

int FunctionWhichReturnsLocalVariable(void)
{
    return Counter;
}


/* FILE: tests/unity/examples/example_2/test/TestProductionCode2.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/test/TestProductionCode2.c */
/* ------------------------------------------------------------ */
#include "ProductionCode2.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ProductionCode2);

/* These should be ignored because they are commented out in various ways:
#include "whatever.h"
*/
//#include "somethingelse.h"

TEST_SETUP(ProductionCode2)
{
}

TEST_TEAR_DOWN(ProductionCode2)
{
}

TEST(ProductionCode2, IgnoredTest)
{
    TEST_IGNORE_MESSAGE("This Test Was Ignored On Purpose");
}

TEST(ProductionCode2, AnotherIgnoredTest)
{
    TEST_IGNORE_MESSAGE("These Can Be Useful For Leaving Yourself Notes On What You Need To Do Yet");
}

TEST(ProductionCode2, ThisFunctionHasNotBeenTested_NeedsToBeImplemented)
{
    TEST_IGNORE(); //Like This
}


/* FILE: tests/unity/examples/example_2/test/TestProductionCode.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/test/TestProductionCode.c */
/* ------------------------------------------------------------ */
#include "ProductionCode.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(ProductionCode);

//sometimes you may want to get at local data in a module.
//for example: If you plan to pass by reference, this could be useful
//however, it should often be avoided
extern int Counter;

TEST_SETUP(ProductionCode)
{
  //This is run before EACH TEST
  Counter = 0x5a5a;
}

TEST_TEAR_DOWN(ProductionCode)
{
}

TEST(ProductionCode, FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode)
{
  //All of these should pass
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(78));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(1));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(33));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(999));
  TEST_ASSERT_EQUAL(0, FindFunction_WhichIsBroken(-1));
}

TEST(ProductionCode, FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken)
{
  // You should see this line fail in your test summary
  TEST_ASSERT_EQUAL(1, FindFunction_WhichIsBroken(34));

  // Notice the rest of these didn't get a chance to run because the line above failed.
  // Unit tests abort each test function on the first sign of trouble.
  // Then NEXT test function runs as normal.
  TEST_ASSERT_EQUAL(8, FindFunction_WhichIsBroken(8888));
}

TEST(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue)
{
    //This should be true because setUp set this up for us before this test
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());

    //This should be true because we can still change our answer
    Counter = 0x1234;
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}

TEST(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain)
{
    //This should be true again because setup was rerun before this test (and after we changed it to 0x1234)
    TEST_ASSERT_EQUAL_HEX(0x5a5a, FunctionWhichReturnsLocalVariable());
}

TEST(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed)
{
    //Sometimes you get the test wrong.  When that happens, you get a failure too... and a quick look should tell
    // you what actually happened...which in this case was a failure to setup the initial condition.
    TEST_ASSERT_EQUAL_HEX(0x1234, FunctionWhichReturnsLocalVariable());
}


/* FILE: tests/unity/examples/example_2/test/test_runners/TestProductionCode_Runner.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/test/test_runners/TestProductionCode_Runner.c */
/* ------------------------------------------------------------ */
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode)
{
  RUN_TEST_CASE(ProductionCode, FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode);
  RUN_TEST_CASE(ProductionCode, FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken);
  RUN_TEST_CASE(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue);
  RUN_TEST_CASE(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain);
  RUN_TEST_CASE(ProductionCode, FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed);
}

/* FILE: tests/unity/examples/example_2/test/test_runners/all_tests.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/test/test_runners/all_tests.c */
/* ------------------------------------------------------------ */
#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(ProductionCode);
  RUN_TEST_GROUP(ProductionCode2);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}


/* FILE: tests/unity/examples/example_2/test/test_runners/TestProductionCode2_Runner.c */
/* LAYER: UTILITY */
/* PATH: tests/unity/examples/example_2/test/test_runners/TestProductionCode2_Runner.c */
/* ------------------------------------------------------------ */
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(ProductionCode2)
{
  RUN_TEST_CASE(ProductionCode2, IgnoredTest);
  RUN_TEST_CASE(ProductionCode2, AnotherIgnoredTest);
  RUN_TEST_CASE(ProductionCode2, ThisFunctionHasNotBeenTested_NeedsToBeImplemented);
}

/* ====================================================================== */
/* PUBLIC API SUMMARY */
/* ====================================================================== */
/*
AVAILABLE FUNCTIONS BY MODULE:
  cJSON_Utils.c:
    - compare_strings
    - compare_double
    - compare_pointers
    - if
    - pointer_encoded_length
    - encode_string_as_pointer
    - if
    - get_array_item
    - decode_array_index_from_pointer
    - get_item_from_pointer
    - if
    - decode_pointer_inplace
    - if
    - detach_item_from_array
    - if
    - detach_path
    - if
    - sort_list
    - sort_object
    - compare_json
    - insert_item_in_array
    - get_object_item
    - decode_patch_operation
    - overwrite_item
    - apply_patch
    - if
    - if
    - if
    - compose_patch
    - create_patches
    - if
    - if
    - merge_patch
    - generate_merge_patch
    - if
  cJSON.c:
    - case_insensitive_strcmp
    - internal_free
    - cJSON_New_Item
    - get_decimal_point
    - parse_number
    - if
    - if
    - update_offset
    - compare_double
    - print_number
    - if
    - parse_hex4
    - if
    - if
    - utf16_literal_to_utf8
    - if
    - if
    - if
    - parse_string
    - print_string_ptr
    - print_string
    - buffer_skip_whitespace
    - skip_utf8_bom
    - if
    - print
    - parse_value
    - print_value
    - parse_array
    - print_array
    - parse_object
    - print_object
    - get_object_item
    - suffix_object
    - create_reference
    - add_item_to_array
    - add_item_to_object
    - if
    - replace_item_in_object
    - if
    - cJSON_Duplicate_rec
    - skip_oneline_comment
    - skip_multiline_comment
    - minify_string
    - if
  test.c:
    - print_preallocated
    - create_objects
    - main
  fuzzing/fuzz_main.c:
    - main
  fuzzing/afl.c:
    - read_file
    - main
  fuzzing/cjson_read_fuzzer.c:
    - LLVMFuzzerTestOneInput
  tests/unity/src/unity.h:
    - setUp
    - tearDown
    - suiteSetUp
    - suiteTearDown
    - setUp
    - tearDown
    - suiteSetUp
    - suiteTearDown
  tests/common.h:
    - reset
  tests/minify_tests.c:
    - cjson_minify_should_not_overflow_buffer
    - cjson_minify_should_not_modify_strings
    - cjson_minify_should_minify_json
    - cjson_minify_should_not_loop_infinitely
    - main
  tests/parse_number.c:
    - assert_is_number
    - assert_parse_number
    - assert_parse_big_number
    - parse_number_should_parse_zero
    - parse_number_should_parse_negative_integers
    - parse_number_should_parse_positive_integers
    - parse_number_should_parse_positive_reals
    - parse_number_should_parse_negative_reals
    - parse_number_should_parse_big_numbers
    - main
  tests/old_utils_tests.c:
    - json_pointer_tests
    - misc_tests
    - sort_tests
    - merge_tests
    - generate_merge_tests
    - main
  tests/print_value.c:
    - assert_print_value
    - print_value_should_print_null
    - print_value_should_print_true
    - print_value_should_print_false
    - print_value_should_print_number
    - print_value_should_print_string
    - print_value_should_print_array
    - print_value_should_print_object
    - main
  tests/parse_with_opts.c:
    - parse_with_opts_should_handle_null
    - parse_with_opts_should_handle_empty_strings
    - parse_with_opts_should_handle_incomplete_json
    - parse_with_opts_should_require_null_if_requested
    - parse_with_opts_should_return_parse_end
    - parse_with_opts_should_parse_utf8_bom
    - main
  tests/parse_array.c:
    - assert_is_array
    - assert_not_array
    - assert_parse_array
    - parse_array_should_parse_empty_arrays
    - parse_array_should_parse_arrays_with_one_element
    - parse_array_should_parse_arrays_with_multiple_elements
    - parse_array_should_not_parse_non_arrays
    - main
  tests/print_array.c:
    - assert_print_array
    - print_array_should_print_empty_arrays
    - print_array_should_print_arrays_with_one_element
    - print_array_should_print_arrays_with_multiple_elements
    - main
  tests/parse_hex4.c:
    - parse_hex4_should_parse_all_combinations
    - parse_hex4_should_parse_mixed_case
    - main
  tests/misc_utils_tests.c:
    - cjson_utils_functions_shouldnt_crash_with_null_pointers
    - main
  tests/cjson_add.c:
    - normal_free
    - cjson_add_null_should_add_null
    - cjson_add_null_should_fail_with_null_pointers
    - cjson_add_null_should_fail_on_allocation_failure
    - cjson_add_true_should_add_true
    - cjson_add_true_should_fail_with_null_pointers
    - cjson_add_true_should_fail_on_allocation_failure
    - cjson_create_int_array_should_fail_on_allocation_failure
    - cjson_create_float_array_should_fail_on_allocation_failure
    - cjson_create_double_array_should_fail_on_allocation_failure
    - cjson_create_string_array_should_fail_on_allocation_failure
    - cjson_add_false_should_add_false
    - cjson_add_false_should_fail_with_null_pointers
    - cjson_add_false_should_fail_on_allocation_failure
    - cjson_add_bool_should_add_bool
    - cjson_add_bool_should_fail_with_null_pointers
    - cjson_add_bool_should_fail_on_allocation_failure
    - cjson_add_number_should_add_number
    - cjson_add_number_should_fail_with_null_pointers
    - cjson_add_number_should_fail_on_allocation_failure
    - cjson_add_string_should_add_string
    - cjson_add_string_should_fail_with_null_pointers
    - cjson_add_string_should_fail_on_allocation_failure
    - cjson_add_raw_should_add_raw
    - cjson_add_raw_should_fail_with_null_pointers
    - cjson_add_raw_should_fail_on_allocation_failure
    - cJSON_add_object_should_add_object
    - cjson_add_object_should_fail_with_null_pointers
    - cjson_add_object_should_fail_on_allocation_failure
    - cJSON_add_array_should_add_array
    - cjson_add_array_should_fail_with_null_pointers
    - cjson_add_array_should_fail_on_allocation_failure
    - main
  tests/print_string.c:
    - assert_print_string
    - print_string_should_print_empty_strings
    - print_string_should_print_ascii
    - print_string_should_print_utf8
    - main
  tests/json_patch_tests.c:
    - parse_test_file
    - test_apply_patch
    - test_generate_test
    - cjson_utils_should_pass_json_patch_test_tests
    - cjson_utils_should_pass_json_patch_test_spec_tests
    - cjson_utils_should_pass_json_patch_test_cjson_utils_tests
    - main
  tests/compare_tests.c:
    - compare_from_string
    - cjson_compare_should_compare_null_pointer_as_not_equal
    - cjson_compare_should_compare_invalid_as_not_equal
    - cjson_compare_should_compare_numbers
    - cjson_compare_should_compare_booleans
    - cjson_compare_should_compare_null
    - cjson_compare_should_not_accept_invalid_types
    - cjson_compare_should_compare_strings
    - cjson_compare_should_compare_raw
    - cjson_compare_should_compare_arrays
    - cjson_compare_should_compare_objects
    - main
  tests/readme_examples.c:
    - create_monitor_with_helpers
    - supports_full_hd
    - create_monitor_should_create_a_monitor
    - create_monitor_with_helpers_should_create_a_monitor
    - supports_full_hd_should_check_for_full_hd_support
    - main
  tests/misc_tests.c:
    - cjson_array_foreach_should_loop_over_arrays
    - cjson_array_foreach_should_not_dereference_null_pointer
    - cjson_get_object_item_should_get_object_items
    - cjson_get_object_item_case_sensitive_should_get_object_items
    - cjson_get_object_item_should_not_crash_with_array
    - cjson_get_object_item_case_sensitive_should_not_crash_with_array
    - typecheck_functions_should_check_type
    - cjson_should_not_parse_to_deeply_nested_jsons
    - cjson_should_not_follow_too_deep_circular_references
    - cjson_set_number_value_should_set_numbers
    - cjson_detach_item_via_pointer_should_detach_items
    - cjson_detach_item_via_pointer_should_return_null_if_item_prev_is_null
    - cjson_replace_item_via_pointer_should_replace_items
    - cjson_replace_item_in_object_should_preserve_name
    - cjson_functions_should_not_crash_with_null_pointers
    - cjson_set_valuestring_should_return_null_if_strings_overlap
    - ensure_should_fail_on_failed_realloc
    - skip_utf8_bom_should_skip_bom
    - skip_utf8_bom_should_not_skip_bom_if_not_at_beginning
    - cjson_get_string_value_should_get_a_string
    - cjson_get_number_value_should_get_a_number
    - cjson_create_string_reference_should_create_a_string_reference
    - cjson_create_object_reference_should_create_an_object_reference
    - cjson_create_array_reference_should_create_an_array_reference
    - cjson_add_item_to_object_or_array_should_not_add_itself
    - cjson_add_item_to_object_should_not_use_after_free_when_string_is_aliased
    - cjson_delete_item_from_array_should_not_broken_list_structure
    - cjson_set_valuestring_to_object_should_not_leak_memory
    - cjson_set_bool_value_must_not_break_objects
    - cjson_parse_big_numbers_should_not_report_error
    - main
  tests/parse_examples.c:
    - parse_file
    - do_test
    - file_test1_should_be_parsed_and_printed
    - file_test2_should_be_parsed_and_printed
    - file_test3_should_be_parsed_and_printed
    - file_test4_should_be_parsed_and_printed
    - file_test5_should_be_parsed_and_printed
    - file_test6_should_not_be_parsed
    - file_test7_should_be_parsed_and_printed
    - file_test8_should_be_parsed_and_printed
    - file_test9_should_be_parsed_and_printed
    - file_test10_should_be_parsed_and_printed
    - file_test11_should_be_parsed_and_printed
    - test12_should_not_be_parsed
    - test13_should_be_parsed_without_null_termination
    - test15_should_not_heap_buffer_overflow
    - main
  tests/parse_value.c:
    - assert_is_value
    - assert_parse_value
    - parse_value_should_parse_null
    - parse_value_should_parse_true
    - parse_value_should_parse_false
    - parse_value_should_parse_number
    - parse_value_should_parse_string
    - parse_value_should_parse_array
    - parse_value_should_parse_object
    - main
  tests/parse_string.c:
    - assert_is_string
    - assert_parse_string
    - assert_not_parse_string
    - parse_string_should_parse_strings
    - parse_string_should_parse_utf16_surrogate_pairs
    - parse_string_should_not_parse_non_strings
    - parse_string_should_not_parse_invalid_backslash
    - parse_string_should_not_overflow_with_closing_backslash
    - parse_string_should_parse_bug_94
    - main
  tests/print_number.c:
    - assert_print_number
    - print_number_should_print_zero
    - print_number_should_print_negative_integers
    - print_number_should_print_positive_integers
    - print_number_should_print_positive_reals
    - print_number_should_print_negative_reals
    - print_number_should_print_non_number
    - main
  tests/unity_setup.c:
    - setUp
    - tearDown
  tests/unity/src/unity.c:
    - UnityPrint
    - if
    - if
    - if
    - UnityPrintLen
    - if
    - if
    - UnityPrintNumberByStyle
    - if
    - UnityPrintNumber
    - UnityPrintNumberUnsigned
    - UnityPrintNumberHex
    - UnityPrintMask
    - UnityPrintFloat
    - UnityTestResultsBegin
    - UnityTestResultsFailBegin
    - UnityConcludeTest
    - if
    - UnityAddMsgIfSpecified
    - UnityPrintExpectedAndActualStrings
    - UnityPrintExpectedAndActualStringsLen
    - UnityIsOneArrayNull
    - UnityAssertBits
    - UnityAssertEqualNumber
    - UnityAssertGreaterOrLessOrEqualNumber
    - UnityAssertEqualIntArray
    - UnityFloatsWithin
    - UnityAssertEqualFloatArray
    - UnityAssertFloatsWithin
    - UnityAssertFloatSpecial
    - UnityDoublesWithin
    - UnityAssertEqualDoubleArray
    - UnityAssertDoublesWithin
    - UnityAssertDoubleSpecial
    - UnityAssertNumbersWithin
    - UnityAssertEqualString
    - UnityAssertEqualStringLen
    - UnityAssertEqualStringArray
    - UnityAssertEqualMemory
    - UnityNumToPtr
    - UnityFloatToPtr
    - UnityDoubleToPtr
    - UnityFail
    - UnityIgnore
    - UnityDefaultTestRun
    - UnityBegin
    - UnityEnd
    - UnityParseOptions
    - IsStringInBiggerString
    - UnityStringArgumentMatches
    - UnityTestMatches
  tests/unity/test/testdata/testRunnerGenerator.c:
    - putcharSpy
    - setUp
    - tearDown
    - custom_setup
    - custom_teardown
    - test_ThisTestAlwaysPasses
    - test_ThisTestAlwaysFails
    - test_ThisTestAlwaysIgnored
    - qwiktest_ThisTestPassesWhenNoSetupRan
    - qwiktest_ThisTestPassesWhenNoTeardownRan
    - spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan
    - spec_ThisTestPassesWhenNormalSetupRan
    - spec_ThisTestPassesWhenNormalTeardownRan
    - custtest_ThisTestPassesWhenCustomSetupRan
    - custtest_ThisTestPassesWhenCustomTeardownRan
    - test_NotBeConfusedByLongComplicatedStrings
    - should_RunTestsStartingWithShouldByDefault
    - paratest_ShouldHandleParameterizedTests
    - paratest_ShouldHandleParameterizedTests2
    - paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid
    - paratest_ShouldHandleParameterizedTestsThatFail
    - extest_ShouldHandleCExceptionInTest
    - main
    - suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan
  tests/unity/test/testdata/testRunnerGeneratorWithMocks.c:
    - putcharSpy
    - setUp
    - tearDown
    - custom_setup
    - custom_teardown
    - test_ThisTestAlwaysPasses
    - test_ThisTestAlwaysFails
    - test_ThisTestAlwaysIgnored
    - qwiktest_ThisTestPassesWhenNoSetupRan
    - qwiktest_ThisTestPassesWhenNoTeardownRan
    - spec_ThisTestPassesWhenNormalSuiteSetupAndTeardownRan
    - spec_ThisTestPassesWhenNormalSetupRan
    - spec_ThisTestPassesWhenNormalTeardownRan
    - custtest_ThisTestPassesWhenCustomSetupRan
    - custtest_ThisTestPassesWhenCustomTeardownRan
    - test_NotBeConfusedByLongComplicatedStrings
    - should_RunTestsStartingWithShouldByDefault
    - paratest_ShouldHandleParameterizedTests
    - paratest_ShouldHandleParameterizedTests2
    - paratest_ShouldHandleNonParameterizedTestsWhenParameterizationValid
    - paratest_ShouldHandleParameterizedTestsThatFail
    - extest_ShouldHandleCExceptionInTest
    - main
    - suitetest_ThisTestPassesWhenCustomSuiteSetupAndTeardownRan
    - test_ShouldCallMockInitAndVerifyFunctionsForEachTest
  tests/unity/test/testdata/testRunnerGeneratorSmall.c:
    - putcharSpy
    - setUp
    - tearDown
    - custom_setup
    - custom_teardown
    - test_ThisTestAlwaysPasses
    - test_ThisTestAlwaysFails
    - test_ThisTestAlwaysIgnored
    - spec_ThisTestPassesWhenNormalSetupRan
    - spec_ThisTestPassesWhenNormalTeardownRan
  tests/unity/test/tests/testparameterized.c:
    - putcharSpy
    - setUp
    - tearDown
    - test_TheseShouldAllPass
    - test_TheseShouldAllFail
    - test_TheseAreEveryOther
    - test_NormalPassesStillWork
    - test_NormalFailsStillWork
  tests/unity/test/tests/testunity.c:
    - setUp
    - tearDown
    - testUnitySizeInitializationReminder
    - testPassShouldEndImmediatelyWithPass
    - testTrue
    - testFalse
    - testPreviousPass
    - testNotVanilla
    - testNotTrue
    - testNotFalse
    - testNotUnless
    - testNotNotEqual
    - testFail
    - testIsNull
    - testIsNullShouldFailIfNot
    - testNotNullShouldFailIfNULL
    - testIgnore
    - testIgnoreMessage
    - testNotEqualInts
    - testNotEqualInt8s
    - testNotEqualInt16s
    - testNotEqualInt32s
    - testNotEqualBits
    - testNotEqualUInts
    - testNotEqualUInt8s
    - testNotEqualUInt16s
    - testNotEqualUInt32s
    - testNotEqualHex8s
    - testNotEqualHex8sIfSigned
    - testNotEqualHex16s
    - testNotEqualHex16sIfSigned
    - testNotEqualHex32s
    - testNotEqualHex32sIfSigned
    - testEqualInts
    - testEqualInt8s
    - testEqualInt8sWhenThereAreDifferencesOutside8Bits
    - testEqualInt16s
    - testEqualInt16sNegatives
    - testEqualInt16sWhenThereAreDifferencesOutside16Bits
    - testEqualInt32s
    - testEqualInt32sNegatives
    - testEqualUints
    - testEqualUint8s
    - testEqualUint8sWhenThereAreDifferencesOutside8Bits
    - testEqualUint16s
    - testEqualUint16sWhenThereAreDifferencesOutside16Bits
    - testEqualUint32s
    - testNotEqual
    - testEqualHex8s
    - testEqualHex8sWhenThereAreDifferencesOutside8Bits
    - testEqualHex8sNegatives
    - testEqualHex16s
    - testEqualHex16sWhenThereAreDifferencesOutside16Bits
    - testEqualHex32s
    - testEqualBits
    - testNotEqualBitHigh
    - testNotEqualBitLow
    - testNotEqualBitsHigh
    - testNotEqualBitsLow
    - testEqualShorts
    - testEqualUShorts
    - testEqualChars
    - testEqualUChars
    - testEqualPointers
    - testNotEqualPointers
    - testIntsWithinDelta
    - testIntsWithinDeltaAndCustomMessage
    - testIntsNotWithinDelta
    - testIntsNotWithinDeltaAndCustomMessage
    - testUIntsWithinDelta
    - testUIntsWithinDeltaAndCustomMessage
    - testUIntsNotWithinDelta
    - testUIntsNotWithinDeltaAndCustomMessage
    - testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirst
    - testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassSmallFirstAndCustomMessage
    - testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirst
    - testUIntsNotWithinDeltaEvenThoughASignedIntWouldPassBigFirstAndCustomMessage
    - testHEX32sWithinDelta
    - testHEX32sWithinDeltaAndCustomMessage
    - testHEX32sNotWithinDelta
    - testHEX32sNotWithinDeltaAndCustomMessage
    - testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPass
    - testHEX32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage
    - testHEX16sWithinDelta
    - testHEX16sWithinDeltaAndCustomMessage
    - testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits
    - testHEX16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage
    - testHEX16sNotWithinDelta
    - testHEX16sNotWithinDeltaAndCustomMessage
    - testHEX8sWithinDelta
    - testHEX8sWithinDeltaAndCustomMessage
    - testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits
    - testHEX8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage
    - testHEX8sNotWithinDelta
    - testHEX8sNotWithinDeltaAndCustomMessage
    - testUINT32sWithinDelta
    - testUINT32sWithinDeltaAndCustomMessage
    - testUINT32sNotWithinDelta
    - testUINT32sNotWithinDeltaAndCustomMessage
    - testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPass
    - testUINT32sNotWithinDeltaEvenThoughASignedIntWouldPassAndCustomMessage
    - testUINT16sWithinDelta
    - testUINT16sWithinDeltaAndCustomMessage
    - testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits
    - testUINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage
    - testUINT16sNotWithinDelta
    - testUINT16sNotWithinDeltaAndCustomMessage
    - testUINT8sWithinDelta
    - testUINT8sWithinDeltaAndCustomMessage
    - testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits
    - testUINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage
    - testUINT8sNotWithinDelta
    - testUINT8sNotWithinDeltaAndCustomMessage
    - testINT32sWithinDelta
    - testINT32sWithinDeltaAndCustomMessage
    - testINT32sNotWithinDelta
    - testINT32sNotWithinDeltaAndDifferenceOverflows
    - testINT32sNotWithinDeltaAndCustomMessage
    - testINT16sWithinDelta
    - testINT16sWithinDeltaAndCustomMessage
    - testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16Bits
    - testINT16sWithinDeltaWhenThereAreDifferenceOutsideOf16BitsAndCustomMessage
    - testINT16sNotWithinDelta
    - testINT16sNotWithinDeltaAndCustomMessage
    - testINT8sWithinDelta
    - testINT8sWithinDeltaAndCustomMessage
    - testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8Bits
    - testINT8sWithinDeltaWhenThereAreDifferenceOutsideOf8BitsAndCustomMessage
    - testINT8sNotWithinDelta
    - testINT8sNotWithinDeltaAndCustomMessage
    - testGreaterThan
    - testGreaterThanINT
    - testGreaterThanINT8
    - testGreaterThanINT16
    - testGreaterThanINT32
    - testGreaterThanUINT
    - testGreaterThanUINT8
    - testGreaterThanUINT16
    - testGreaterThanUINT32
    - testGreaterThanHEX8
    - testGreaterThanHEX16
    - testGreaterThanHEX32
    - testNotGreaterThan
    - testLessThan
    - testLessThanINT
    - testLessThanINT8
    - testLessThanINT16
    - testLessThanINT32
    - testLessThanUINT
    - testLessThanUINT8
    - testLessThanUINT16
    - testLessThanUINT32
    - testLessThanHEX8
    - testLessThanHEX16
    - testLessThanHEX32
    - testNotLessThan
    - testEqualStrings
    - testEqualStringsLen
    - testEqualStringsWithCarriageReturnsAndLineFeeds
    - testNotEqualString1
    - testNotEqualStringLen1
    - testNotEqualString2
    - testNotEqualStringLen2
    - testNotEqualString3
    - testNotEqualStringLen3
    - testNotEqualString4
    - testNotEqualStringLen4
    - testNotEqualString5
    - testNotEqualString_ExpectedStringIsNull
    - testNotEqualStringLen_ExpectedStringIsNull
    - testNotEqualString_ActualStringIsNull
    - testNotEqualStringLen_ActualStringIsNull
    - testEqualStringArrays
    - testNotEqualStringArray1
    - testNotEqualStringArray2
    - testNotEqualStringArray3
    - testNotEqualStringArray4
    - testNotEqualStringArray5
    - testNotEqualStringArray6
    - testEqualStringArrayIfBothNulls
    - testNotEqualStringArrayLengthZero
    - testEqualStringEachEqual
    - testNotEqualStringEachEqual1
    - testNotEqualStringEachEqual2
    - testNotEqualStringEachEqual3
    - testNotEqualStringEachEqual4
    - testNotEqualStringEachEqual5
    - testEqualMemory
    - testNotEqualMemory1
    - testNotEqualMemory2
    - testNotEqualMemory3
    - testNotEqualMemory4
    - testNotEqualMemoryLengthZero
    - testEqualIntArrays
    - testNotEqualIntArraysNullExpected
    - testNotEqualIntArraysNullActual
    - testNotEqualIntArrays1
    - testNotEqualIntArrays2
    - testNotEqualIntArrays3
    - testNotEqualIntArraysLengthZero
    - testEqualIntEachEqual
    - testNotEqualIntEachEqualNullActual
    - testNotEqualIntEachEqual1
    - testNotEqualIntEachEqual2
    - testNotEqualIntEachEqual3
    - testNotEqualEachEqualLengthZero
    - testEqualPtrArrays
    - testNotEqualPtrArraysNullExpected
    - testNotEqualPtrArraysNullActual
    - testNotEqualPtrArrays1
    - testNotEqualPtrArrays2
    - testNotEqualPtrArrays3
    - testEqualPtrEachEqual
    - testNotEqualPtrEachEqualNullExpected
    - testNotEqualPtrEachEqualNullActual
    - testNotEqualPtrEachEqual1
    - testNotEqualPtrEachEqual2
    - testNotEqualPtrEachEqual3
    - testEqualInt8Arrays
    - testNotEqualInt8Arrays
    - testEqualInt8EachEqual
    - testNotEqualInt8EachEqual
    - testEqualUIntArrays
    - testNotEqualUIntArrays1
    - testNotEqualUIntArrays2
    - testNotEqualUIntArrays3
    - testEqualUIntEachEqual
    - testNotEqualUIntEachEqual1
    - testNotEqualUIntEachEqual2
    - testNotEqualUIntEachEqual3
    - testEqualInt16Arrays
    - testNotEqualInt16Arrays
    - testEqualInt16EachEqual
    - testNotEqualInt16EachEqual
    - testEqualInt32Arrays
    - testNotEqualInt32Arrays
    - testEqualInt32EachEqual
    - testNotEqualInt32EachEqual
    - testEqualUINT8Arrays
    - testNotEqualUINT8Arrays1
    - testNotEqualUINT8Arrays2
    - testNotEqualUINT8Arrays3
    - testEqualUINT16Arrays
    - testNotEqualUINT16Arrays1
    - testNotEqualUINT16Arrays2
    - testNotEqualUINT16Arrays3
    - testEqualUINT32Arrays
    - testNotEqualUINT32Arrays1
    - testNotEqualUINT32Arrays2
    - testNotEqualUINT32Arrays3
    - testEqualHEXArrays
    - testNotEqualHEXArrays1
    - testNotEqualHEXArrays2
    - testNotEqualHEXArrays3
    - testEqualHEX32Arrays
    - testNotEqualHEX32Arrays1
    - testNotEqualHEX32Arrays2
    - testNotEqualHEX32Arrays3
    - testEqualHEX16Arrays
    - testNotEqualHEX16Arrays1
    - testNotEqualHEX16Arrays2
    - testNotEqualHEX16Arrays3
    - testEqualHEX8Arrays
    - testNotEqualHEX8Arrays1
    - testNotEqualHEX8Arrays2
    - testNotEqualHEX8Arrays3
    - testEqualUINT8EachEqual
    - testNotEqualUINT8EachEqual1
    - testNotEqualUINT8EachEqual2
    - testNotEqualUINT8EachEqual3
    - testEqualUINT16EachEqual
    - testNotEqualUINT16EachEqual1
    - testNotEqualUINT16EachEqual2
    - testNotEqualUINT16EachEqual3
    - testEqualUINT32EachEqual
    - testNotEqualUINT32EachEqual1
    - testNotEqualUINT32EachEqual2
    - testNotEqualUINT32EachEqual3
    - testEqualHEXEachEqual
    - testNotEqualHEXEachEqual1
    - testNotEqualHEXEachEqual2
    - testNotEqualHEXEachEqual3
    - testEqualHEX32EachEqual
    - testNotEqualHEX32EachEqual1
    - testNotEqualHEX32EachEqual2
    - testNotEqualHEX32EachEqual3
    - testEqualHEX16EachEqual
    - testNotEqualHEX16EachEqual1
    - testNotEqualHEX16EachEqual2
    - testNotEqualHEX16EachEqual3
    - testEqualHEX8EachEqual
    - testNotEqualHEX8EachEqual1
    - testNotEqualHEX8EachEqual2
    - testNotEqualHEX8EachEqual3
    - testEqualMemoryArrays
    - testNotEqualMemoryArraysExpectedNull
    - testNotEqualMemoryArraysActualNull
    - testNotEqualMemoryArrays1
    - testNotEqualMemoryArrays2
    - testNotEqualMemoryArrays3
    - testEqualMemoryEachEqual
    - testNotEqualMemoryEachEqualExpectedNull
    - testNotEqualMemoryEachEqualActualNull
    - testNotEqualMemoryEachEqual1
    - testNotEqualMemoryEachEqual2
    - testNotEqualMemoryEachEqual3
    - testProtection
    - testIgnoredAndThenFailInTearDown
    - startPutcharSpy
    - endPutcharSpy
    - putcharSpy
    - testFailureCountIncrementsAndIsReturnedAtEnd
    - testCstringsEscapeSequence
    - testHexPrintsUpToMaxNumberOfNibbles
    - testPrintNumbers32
    - testPrintNumbersUnsigned32
    - testPrintNumbersInt64
    - testPrintNumbersUInt64
    - testEqualHex64s
    - testEqualUint64s
    - testEqualInt64s
    - testNotEqualHex64s
    - testNotEqualUint64s
    - testNotEqualInt64s
    - testNotEqualHex64sIfSigned
    - testHEX64sWithinDelta
    - testHEX64sNotWithinDelta
    - testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass
    - testUINT64sWithinDelta
    - testUINT64sNotWithinDelta
    - testUINT64sNotWithinDeltaEvenThoughASignedIntWouldPass
    - testINT64sWithinDelta
    - testINT64sNotWithinDelta
    - testINT64sNotWithinDeltaAndDifferenceOverflows
    - testEqualHEX64Arrays
    - testEqualUint64Arrays
    - testEqualInt64Arrays
    - testNotEqualHEX64Arrays1
    - testNotEqualHEX64Arrays2
    - testNotEqualUint64Arrays
    - testNotEqualInt64Arrays
    - testFloatsWithinDelta
    - testFloatsNotWithinDelta
    - testFloatsEqual
    - testFloatsNotEqual
    - testFloatsNotEqualNegative1
    - testFloatsNotEqualNegative2
    - testFloatsNotEqualActualNaN
    - testFloatsNotEqualExpectedNaN
    - testFloatsEqualBothNaN
    - testFloatsNotEqualInfNaN
    - testFloatsNotEqualNaNInf
    - testFloatsNotEqualActualInf
    - testFloatsNotEqualExpectedInf
    - testFloatsEqualBothInf
    - testFloatsNotEqualPlusMinusInf
    - testFloatIsPosInf1
    - testFloatIsPosInf2
    - testFloatIsNegInf1
    - testFloatIsNegInf2
    - testFloatIsNotPosInf1
    - testFloatIsNotPosInf2
    - testFloatIsNotNegInf
    - testFloatIsNan1
    - testFloatIsNan2
    - testFloatIsNotNan1
    - testFloatIsNotNan2
    - testFloatInfIsNotNan
    - testFloatNanIsNotInf
    - testFloatIsDeterminate1
    - testFloatIsDeterminate2
    - testFloatIsNotDeterminate1
    - testFloatIsNotDeterminate2
    - testFloatTraitFailsOnInvalidTrait
    - testEqualFloatArrays
    - testNotEqualFloatArraysExpectedNull
    - testNotEqualFloatArraysActualNull
    - testNotEqualFloatArrays1
    - testNotEqualFloatArrays2
    - testNotEqualFloatArrays3
    - testNotEqualFloatArraysNegative1
    - testNotEqualFloatArraysNegative2
    - testNotEqualFloatArraysNegative3
    - testEqualFloatArraysNaN
    - testEqualFloatArraysInf
    - testNotEqualFloatArraysLengthZero
    - testEqualFloatEachEqual
    - testNotEqualFloatEachEqualActualNull
    - testNotEqualFloatEachEqual1
    - testNotEqualFloatEachEqual2
    - testNotEqualFloatEachEqual3
    - testNotEqualFloatEachEqualNegative1
    - testNotEqualFloatEachEqualNegative2
    - testNotEqualFloatEachEqualNegative3
    - testEqualFloatEachEqualNaN
    - testEqualFloatEachEqualInf
    - testNotEqualFloatEachEqualLengthZero
    - testFloatPrinting
    - testFloatPrintingInfinityAndNaN
    - printFloatValue
    - testFloatPrintingRandomSamples
    - testDoublesWithinDelta
    - testDoublesNotWithinDelta
    - testDoublesEqual
    - testDoublesNotEqual
    - testDoublesNotEqualNegative1
    - testDoublesNotEqualNegative2
    - testDoublesNotEqualActualNaN
    - testDoublesNotEqualExpectedNaN
    - testDoublesEqualBothNaN
    - testDoublesNotEqualInfNaN
    - testDoublesNotEqualNaNInf
    - testDoublesNotEqualActualInf
    - testDoublesNotEqualExpectedInf
    - testDoublesEqualBothInf
    - testDoublesNotEqualPlusMinusInf
    - testDoubleIsPosInf1
    - testDoubleIsPosInf2
    - testDoubleIsNegInf1
    - testDoubleIsNegInf2
    - testDoubleIsNotPosInf1
    - testDoubleIsNotPosInf2
    - testDoubleIsNotNegInf
    - testDoubleIsNan1
    - testDoubleIsNan2
    - testDoubleIsNotNan1
    - testDoubleIsNotNan2
    - testDoubleInfIsNotNan
    - testDoubleNanIsNotInf
    - testDoubleIsDeterminate1
    - testDoubleIsDeterminate2
    - testDoubleIsNotDeterminate1
    - testDoubleIsNotDeterminate2
    - testDoubleTraitFailsOnInvalidTrait
    - testEqualDoubleArrays
    - testNotEqualDoubleArraysExpectedNull
    - testNotEqualDoubleArraysActualNull
    - testNotEqualDoubleArrays1
    - testNotEqualDoubleArrays2
    - testNotEqualDoubleArrays3
    - testNotEqualDoubleArraysNegative1
    - testNotEqualDoubleArraysNegative2
    - testNotEqualDoubleArraysNegative3
    - testEqualDoubleArraysNaN
    - testEqualDoubleArraysInf
    - testNotEqualDoubleArraysLengthZero
    - testEqualDoubleEachEqual
    - testNotEqualDoubleEachEqualActualNull
    - testNotEqualDoubleEachEqual1
    - testNotEqualDoubleEachEqual2
    - testNotEqualDoubleEachEqual3
    - testNotEqualDoubleEachEqualNegative1
    - testNotEqualDoubleEachEqualNegative2
    - testNotEqualDoubleEachEqualNegative3
    - testEqualDoubleEachEqualNaN
    - testEqualDoubleEachEqualInf
    - testNotEqualDoubleEachEqualLengthZero
    - testDoublePrinting
    - testDoublePrintingInfinityAndNaN
    - testThatDetailsCanBeHandleOneDetail
    - testThatDetailsCanHandleTestFail
    - testThatDetailsCanBeHandleTwoDetails
    - testThatDetailsCanBeHandleSingleDetailClearingTwoDetails
  tests/unity/test/expectdata/testsample_run1.c:
    - resetTest
    - main
  tests/unity/test/testdata/cmock.h:
    - CMock_Guts_MemFreeFinal
    - mockMock_Init
    - mockMock_Verify
    - mockMock_Destroy
  tests/unity/test/expectdata/testsample_mock_yaml.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - suite_setup
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_new2.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - suite_setup
    - suite_teardown
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_new1.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_cmd.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_def.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_param.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_run2.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - suite_setup
    - suite_teardown
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_new2.c:
    - suite_setup
    - suite_teardown
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_param.c:
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_head1.c:
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_def.c:
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_run1.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_yaml.c:
    - suite_setup
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_cmd.c:
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_run2.c:
    - suite_setup
    - suite_teardown
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_new1.c:
    - resetTest
    - main
  tests/unity/test/expectdata/testsample_mock_head1.c:
    - CMock_Init
    - CMock_Verify
    - CMock_Destroy
    - resetTest
    - main
  tests/unity/extras/fixture/src/unity_fixture.c:
    - setUp
    - tearDown
    - announceTestRun
    - UnityMain
    - selected
    - testSelected
    - groupSelected
    - UnityTestRunner
    - UnityIgnoreTest
    - UnityMalloc_StartTest
    - UnityMalloc_EndTest
    - UnityMalloc_MakeMallocFailAfterCount
    - isOverrun
    - release_memory
    - unity_free
    - UnityPointer_Init
    - UnityPointer_Set
    - UnityPointer_UndoAllSets
    - UnityGetCommandLineOptions
    - if
    - if
    - if
    - UnityConcludeFixtureTest
    - if
  tests/unity/extras/fixture/test/unity_output_Spy.c:
    - UnityOutputCharSpy_Create
    - UnityOutputCharSpy_Destroy
    - UnityOutputCharSpy_OutputChar
    - UnityOutputCharSpy_Get
    - UnityOutputCharSpy_Enable
  tests/unity/extras/fixture/test/main/AllTests.c:
    - runAllTests
    - main
  tests/unity/examples/example_3/src/ProductionCode.c:
    - FindFunction_WhichIsBroken
    - FunctionWhichReturnsLocalVariable
  tests/unity/examples/example_3/test/TestProductionCode2.c:
    - setUp
    - tearDown
    - test_IgnoredTest
    - test_AnotherIgnoredTest
    - test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented
  tests/unity/examples/example_3/test/TestProductionCode.c:
    - setUp
    - tearDown
    - test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode
    - test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed
  tests/unity/examples/example_3/helper/UnityHelper.c:
    - AssertEqualExampleStruct
  tests/unity/examples/example_1/src/ProductionCode.c:
    - FindFunction_WhichIsBroken
    - FunctionWhichReturnsLocalVariable
  tests/unity/examples/example_1/test/TestProductionCode2.c:
    - setUp
    - tearDown
    - test_IgnoredTest
    - test_AnotherIgnoredTest
    - test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented
  tests/unity/examples/example_1/test/TestProductionCode.c:
    - setUp
    - tearDown
    - test_FindFunction_WhichIsBroken_ShouldReturnZeroIfItemIsNotInList_WhichWorksEvenInOurBrokenCode
    - test_FindFunction_WhichIsBroken_ShouldReturnTheIndexForItemsInList_WhichWillFailBecauseOurFunctionUnderTestIsBroken
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValue
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnTheCurrentCounterValueAgain
    - test_FunctionWhichReturnsLocalVariable_ShouldReturnCurrentCounter_ButFailsBecauseThisTestIsActuallyFlawed
  tests/unity/examples/example_1/test/test_runners/TestProductionCode_Runner.c:
    - resetTest
    - main
  tests/unity/examples/example_1/test/test_runners/TestProductionCode2_Runner.c:
    - resetTest
    - main
  tests/unity/examples/example_2/src/ProductionCode.c:
    - FindFunction_WhichIsBroken
    - FunctionWhichReturnsLocalVariable
  tests/unity/examples/example_2/test/test_runners/all_tests.c:
    - RunAllTests
    - main

DEFINED MACROS:
  - ASSIGN_VALUE
  - CEXCEPTION_BEING_USED
  - CEXCEPTION_H
  - CEXCEPTION_NONE
  - CEXCEPTION_T
  - CHECK
  - CJSON_CDECL
  - CJSON_CIRCULAR_LIMIT
  - CJSON_EXPORT_SYMBOLS
  - CJSON_NESTING_LIMIT
  - CJSON_PUBLIC
  - CJSON_STDCALL
  - CJSON_TESTS_COMMON_H
  - CJSON_VERSION_MAJOR
  - CJSON_VERSION_MINOR
  - CJSON_VERSION_PATCH
  - CMOCK_H
  - Catch
  - DEF_H
  - DOUBLES_EQUAL
  - D_unity_output_Spy_H
  - EXPAND_AND_USE_2ND
  - EXPECT_ABORT_BEGIN
  - EXPECT_ABORT_END
  - EXTERN_DECL
  - FAIL
  - IGNORE_TEST
  - LONGS_EQUAL
  - MALLOC_DONT_FAIL
  - MOCK_MOCK_H
  - NAN
  - RETURN_IF_FAIL_OR_IGNORE
  - RUN_TEST
  - RUN_TEST_CASE
  - RUN_TEST_FIRST
  - RUN_TEST_FIRST_HELPER
  - RUN_TEST_GROUP
  - RUN_TEST_NO_ARGS
  - RUN_TEST_SECOND
  - RUN_TEST_SECOND_HELPER
  - SECOND_PARAM
  - SPY_BUFFER_MAX
  - STRCMP_EQUAL
  - TEST
  - TEST_ABORT
  - TEST_ASSERT
  - TEST_ASSERT_BITS
  - TEST_ASSERT_BITS_HIGH
  - TEST_ASSERT_BITS_HIGH_MESSAGE
  - TEST_ASSERT_BITS_LOW
  - TEST_ASSERT_BITS_LOW_MESSAGE
  - TEST_ASSERT_BITS_MESSAGE
  - TEST_ASSERT_BIT_HIGH
  - TEST_ASSERT_BIT_HIGH_MESSAGE
  - TEST_ASSERT_BIT_LOW
  - TEST_ASSERT_BIT_LOW_MESSAGE
  - TEST_ASSERT_BYTES_EQUAL
  - TEST_ASSERT_DOUBLE_IS_DETERMINATE
  - TEST_ASSERT_DOUBLE_IS_DETERMINATE_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_INF
  - TEST_ASSERT_DOUBLE_IS_INF_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NAN
  - TEST_ASSERT_DOUBLE_IS_NAN_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NEG_INF
  - TEST_ASSERT_DOUBLE_IS_NEG_INF_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE
  - TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NOT_INF
  - TEST_ASSERT_DOUBLE_IS_NOT_INF_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NOT_NAN
  - TEST_ASSERT_DOUBLE_IS_NOT_NAN_MESSAGE
  - TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF
  - TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF_MESSAGE
  - TEST_ASSERT_DOUBLE_WITHIN
  - TEST_ASSERT_DOUBLE_WITHIN_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_DOUBLE
  - TEST_ASSERT_EACH_EQUAL_DOUBLE_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_FLOAT
  - TEST_ASSERT_EACH_EQUAL_FLOAT_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_HEX
  - TEST_ASSERT_EACH_EQUAL_HEX16
  - TEST_ASSERT_EACH_EQUAL_HEX16_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_HEX32
  - TEST_ASSERT_EACH_EQUAL_HEX32_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_HEX64
  - TEST_ASSERT_EACH_EQUAL_HEX64_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_HEX8
  - TEST_ASSERT_EACH_EQUAL_HEX8_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_HEX_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_INT
  - TEST_ASSERT_EACH_EQUAL_INT16
  - TEST_ASSERT_EACH_EQUAL_INT16_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_INT32
  - TEST_ASSERT_EACH_EQUAL_INT32_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_INT64
  - TEST_ASSERT_EACH_EQUAL_INT64_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_INT8
  - TEST_ASSERT_EACH_EQUAL_INT8_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_INT_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_MEMORY
  - TEST_ASSERT_EACH_EQUAL_MEMORY_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_PTR
  - TEST_ASSERT_EACH_EQUAL_PTR_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_STRING
  - TEST_ASSERT_EACH_EQUAL_STRING_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_UINT
  - TEST_ASSERT_EACH_EQUAL_UINT16
  - TEST_ASSERT_EACH_EQUAL_UINT16_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_UINT32
  - TEST_ASSERT_EACH_EQUAL_UINT32_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_UINT64
  - TEST_ASSERT_EACH_EQUAL_UINT64_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_UINT8
  - TEST_ASSERT_EACH_EQUAL_UINT8_MESSAGE
  - TEST_ASSERT_EACH_EQUAL_UINT_MESSAGE
  - TEST_ASSERT_EQUAL
  - TEST_ASSERT_EQUAL_DOUBLE
  - TEST_ASSERT_EQUAL_DOUBLE_ARRAY
  - TEST_ASSERT_EQUAL_DOUBLE_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_DOUBLE_MESSAGE
  - TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T
  - TEST_ASSERT_EQUAL_FLOAT
  - TEST_ASSERT_EQUAL_FLOAT_ARRAY
  - TEST_ASSERT_EQUAL_FLOAT_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_FLOAT_MESSAGE
  - TEST_ASSERT_EQUAL_HEX
  - TEST_ASSERT_EQUAL_HEX16
  - TEST_ASSERT_EQUAL_HEX16_ARRAY
  - TEST_ASSERT_EQUAL_HEX16_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_HEX16_MESSAGE
  - TEST_ASSERT_EQUAL_HEX32
  - TEST_ASSERT_EQUAL_HEX32_ARRAY
  - TEST_ASSERT_EQUAL_HEX32_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_HEX32_MESSAGE
  - TEST_ASSERT_EQUAL_HEX64
  - TEST_ASSERT_EQUAL_HEX64_ARRAY
  - TEST_ASSERT_EQUAL_HEX64_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_HEX64_MESSAGE
  - TEST_ASSERT_EQUAL_HEX8
  - TEST_ASSERT_EQUAL_HEX8_ARRAY
  - TEST_ASSERT_EQUAL_HEX8_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_HEX8_MESSAGE
  - TEST_ASSERT_EQUAL_HEX_ARRAY
  - TEST_ASSERT_EQUAL_HEX_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_HEX_MESSAGE
  - TEST_ASSERT_EQUAL_INT
  - TEST_ASSERT_EQUAL_INT16
  - TEST_ASSERT_EQUAL_INT16_ARRAY
  - TEST_ASSERT_EQUAL_INT16_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_INT16_MESSAGE
  - TEST_ASSERT_EQUAL_INT32
  - TEST_ASSERT_EQUAL_INT32_ARRAY
  - TEST_ASSERT_EQUAL_INT32_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_INT32_MESSAGE
  - TEST_ASSERT_EQUAL_INT64
  - TEST_ASSERT_EQUAL_INT64_ARRAY
  - TEST_ASSERT_EQUAL_INT64_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_INT64_MESSAGE
  - TEST_ASSERT_EQUAL_INT8
  - TEST_ASSERT_EQUAL_INT8_ARRAY
  - TEST_ASSERT_EQUAL_INT8_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_INT8_MESSAGE
  - TEST_ASSERT_EQUAL_INT_ARRAY
  - TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_INT_MESSAGE
  - TEST_ASSERT_EQUAL_MEMORY
  - TEST_ASSERT_EQUAL_MEMORY_ARRAY
  - TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_MEMORY_MESSAGE
  - TEST_ASSERT_EQUAL_MESSAGE
  - TEST_ASSERT_EQUAL_PRINT_FLOATING
  - TEST_ASSERT_EQUAL_PRINT_NUMBERS
  - TEST_ASSERT_EQUAL_PRINT_UNSIGNED_NUMBERS
  - TEST_ASSERT_EQUAL_PTR
  - TEST_ASSERT_EQUAL_PTR_ARRAY
  - TEST_ASSERT_EQUAL_PTR_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_PTR_MESSAGE
  - TEST_ASSERT_EQUAL_STRING
  - TEST_ASSERT_EQUAL_STRING_ARRAY
  - TEST_ASSERT_EQUAL_STRING_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_STRING_LEN
  - TEST_ASSERT_EQUAL_STRING_LEN_MESSAGE
  - TEST_ASSERT_EQUAL_STRING_MESSAGE
  - TEST_ASSERT_EQUAL_UINT
  - TEST_ASSERT_EQUAL_UINT16
  - TEST_ASSERT_EQUAL_UINT16_ARRAY
  - TEST_ASSERT_EQUAL_UINT16_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_UINT16_MESSAGE
  - TEST_ASSERT_EQUAL_UINT32
  - TEST_ASSERT_EQUAL_UINT32_ARRAY
  - TEST_ASSERT_EQUAL_UINT32_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_UINT32_MESSAGE
  - TEST_ASSERT_EQUAL_UINT64
  - TEST_ASSERT_EQUAL_UINT64_ARRAY
  - TEST_ASSERT_EQUAL_UINT64_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_UINT64_MESSAGE
  - TEST_ASSERT_EQUAL_UINT8
  - TEST_ASSERT_EQUAL_UINT8_ARRAY
  - TEST_ASSERT_EQUAL_UINT8_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_UINT8_MESSAGE
  - TEST_ASSERT_EQUAL_UINT_ARRAY
  - TEST_ASSERT_EQUAL_UINT_ARRAY_MESSAGE
  - TEST_ASSERT_EQUAL_UINT_MESSAGE
  - TEST_ASSERT_FALSE
  - TEST_ASSERT_FALSE_MESSAGE
  - TEST_ASSERT_FLOAT_IS_DETERMINATE
  - TEST_ASSERT_FLOAT_IS_DETERMINATE_MESSAGE
  - TEST_ASSERT_FLOAT_IS_INF
  - TEST_ASSERT_FLOAT_IS_INF_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NAN
  - TEST_ASSERT_FLOAT_IS_NAN_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NEG_INF
  - TEST_ASSERT_FLOAT_IS_NEG_INF_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE
  - TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NOT_INF
  - TEST_ASSERT_FLOAT_IS_NOT_INF_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NOT_NAN
  - TEST_ASSERT_FLOAT_IS_NOT_NAN_MESSAGE
  - TEST_ASSERT_FLOAT_IS_NOT_NEG_INF
  - TEST_ASSERT_FLOAT_IS_NOT_NEG_INF_MESSAGE
  - TEST_ASSERT_FLOAT_WITHIN
  - TEST_ASSERT_FLOAT_WITHIN_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX16
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX16_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX32
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX32_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX64
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX64_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX8
  - TEST_ASSERT_GREATER_OR_EQUAL_HEX8_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_INT
  - TEST_ASSERT_GREATER_OR_EQUAL_INT16
  - TEST_ASSERT_GREATER_OR_EQUAL_INT16_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_INT32
  - TEST_ASSERT_GREATER_OR_EQUAL_INT32_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_INT64
  - TEST_ASSERT_GREATER_OR_EQUAL_INT64_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_INT8
  - TEST_ASSERT_GREATER_OR_EQUAL_INT8_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_INT_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT16
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT16_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT32
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT32_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT64
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT64_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT8
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT8_MESSAGE
  - TEST_ASSERT_GREATER_OR_EQUAL_UINT_MESSAGE
  - TEST_ASSERT_GREATER_THAN
  - TEST_ASSERT_GREATER_THAN_HEX16
  - TEST_ASSERT_GREATER_THAN_HEX16_MESSAGE
  - TEST_ASSERT_GREATER_THAN_HEX32
  - TEST_ASSERT_GREATER_THAN_HEX32_MESSAGE
  - TEST_ASSERT_GREATER_THAN_HEX64
  - TEST_ASSERT_GREATER_THAN_HEX64_MESSAGE
  - TEST_ASSERT_GREATER_THAN_HEX8
  - TEST_ASSERT_GREATER_THAN_HEX8_MESSAGE
  - TEST_ASSERT_GREATER_THAN_INT
  - TEST_ASSERT_GREATER_THAN_INT16
  - TEST_ASSERT_GREATER_THAN_INT16_MESSAGE
  - TEST_ASSERT_GREATER_THAN_INT32
  - TEST_ASSERT_GREATER_THAN_INT32_MESSAGE
  - TEST_ASSERT_GREATER_THAN_INT64
  - TEST_ASSERT_GREATER_THAN_INT64_MESSAGE
  - TEST_ASSERT_GREATER_THAN_INT8
  - TEST_ASSERT_GREATER_THAN_INT8_MESSAGE
  - TEST_ASSERT_GREATER_THAN_INT_MESSAGE
  - TEST_ASSERT_GREATER_THAN_MESSAGE
  - TEST_ASSERT_GREATER_THAN_UINT
  - TEST_ASSERT_GREATER_THAN_UINT16
  - TEST_ASSERT_GREATER_THAN_UINT16_MESSAGE
  - TEST_ASSERT_GREATER_THAN_UINT32
  - TEST_ASSERT_GREATER_THAN_UINT32_MESSAGE
  - TEST_ASSERT_GREATER_THAN_UINT64
  - TEST_ASSERT_GREATER_THAN_UINT64_MESSAGE
  - TEST_ASSERT_GREATER_THAN_UINT8
  - TEST_ASSERT_GREATER_THAN_UINT8_MESSAGE
  - TEST_ASSERT_GREATER_THAN_UINT_MESSAGE
  - TEST_ASSERT_HEX16_WITHIN
  - TEST_ASSERT_HEX16_WITHIN_MESSAGE
  - TEST_ASSERT_HEX32_WITHIN
  - TEST_ASSERT_HEX32_WITHIN_MESSAGE
  - TEST_ASSERT_HEX64_WITHIN
  - TEST_ASSERT_HEX64_WITHIN_MESSAGE
  - TEST_ASSERT_HEX8_WITHIN
  - TEST_ASSERT_HEX8_WITHIN_MESSAGE
  - TEST_ASSERT_HEX_WITHIN
  - TEST_ASSERT_HEX_WITHIN_MESSAGE
  - TEST_ASSERT_INT16_WITHIN
  - TEST_ASSERT_INT16_WITHIN_MESSAGE
  - TEST_ASSERT_INT32_WITHIN
  - TEST_ASSERT_INT32_WITHIN_MESSAGE
  - TEST_ASSERT_INT64_WITHIN
  - TEST_ASSERT_INT64_WITHIN_MESSAGE
  - TEST_ASSERT_INT8_WITHIN
  - TEST_ASSERT_INT8_WITHIN_MESSAGE
  - TEST_ASSERT_INT_WITHIN
  - TEST_ASSERT_INT_WITHIN_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL
  - TEST_ASSERT_LESS_OR_EQUAL_HEX16
  - TEST_ASSERT_LESS_OR_EQUAL_HEX16_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_HEX32
  - TEST_ASSERT_LESS_OR_EQUAL_HEX32_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_HEX64
  - TEST_ASSERT_LESS_OR_EQUAL_HEX64_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_HEX8
  - TEST_ASSERT_LESS_OR_EQUAL_HEX8_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_INT
  - TEST_ASSERT_LESS_OR_EQUAL_INT16
  - TEST_ASSERT_LESS_OR_EQUAL_INT16_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_INT32
  - TEST_ASSERT_LESS_OR_EQUAL_INT32_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_INT64
  - TEST_ASSERT_LESS_OR_EQUAL_INT64_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_INT8
  - TEST_ASSERT_LESS_OR_EQUAL_INT8_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_INT_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_UINT
  - TEST_ASSERT_LESS_OR_EQUAL_UINT16
  - TEST_ASSERT_LESS_OR_EQUAL_UINT16_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_UINT32
  - TEST_ASSERT_LESS_OR_EQUAL_UINT32_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_UINT64
  - TEST_ASSERT_LESS_OR_EQUAL_UINT64_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_UINT8
  - TEST_ASSERT_LESS_OR_EQUAL_UINT8_MESSAGE
  - TEST_ASSERT_LESS_OR_EQUAL_UINT_MESSAGE
  - TEST_ASSERT_LESS_THAN
  - TEST_ASSERT_LESS_THAN_HEX16
  - TEST_ASSERT_LESS_THAN_HEX16_MESSAGE
  - TEST_ASSERT_LESS_THAN_HEX32
  - TEST_ASSERT_LESS_THAN_HEX32_MESSAGE
  - TEST_ASSERT_LESS_THAN_HEX64
  - TEST_ASSERT_LESS_THAN_HEX64_MESSAGE
  - TEST_ASSERT_LESS_THAN_HEX8
  - TEST_ASSERT_LESS_THAN_HEX8_MESSAGE
  - TEST_ASSERT_LESS_THAN_INT
  - TEST_ASSERT_LESS_THAN_INT16
  - TEST_ASSERT_LESS_THAN_INT16_MESSAGE
  - TEST_ASSERT_LESS_THAN_INT32
  - TEST_ASSERT_LESS_THAN_INT32_MESSAGE
  - TEST_ASSERT_LESS_THAN_INT64
  - TEST_ASSERT_LESS_THAN_INT64_MESSAGE
  - TEST_ASSERT_LESS_THAN_INT8
  - TEST_ASSERT_LESS_THAN_INT8_MESSAGE
  - TEST_ASSERT_LESS_THAN_INT_MESSAGE
  - TEST_ASSERT_LESS_THAN_MESSAGE
  - TEST_ASSERT_LESS_THAN_UINT
  - TEST_ASSERT_LESS_THAN_UINT16
  - TEST_ASSERT_LESS_THAN_UINT16_MESSAGE
  - TEST_ASSERT_LESS_THAN_UINT32
  - TEST_ASSERT_LESS_THAN_UINT32_MESSAGE
  - TEST_ASSERT_LESS_THAN_UINT64
  - TEST_ASSERT_LESS_THAN_UINT64_MESSAGE
  - TEST_ASSERT_LESS_THAN_UINT8
  - TEST_ASSERT_LESS_THAN_UINT8_MESSAGE
  - TEST_ASSERT_LESS_THAN_UINT_MESSAGE
  - TEST_ASSERT_MEMORY_ALL_FREE_LIFO_ORDER
  - TEST_ASSERT_MESSAGE
  - TEST_ASSERT_NOT_EQUAL
  - TEST_ASSERT_NOT_EQUAL_MESSAGE
  - TEST_ASSERT_NOT_NULL
  - TEST_ASSERT_NOT_NULL_MESSAGE
  - TEST_ASSERT_NULL
  - TEST_ASSERT_NULL_MESSAGE
  - TEST_ASSERT_POINTERS_EQUAL
  - TEST_ASSERT_TRUE
  - TEST_ASSERT_TRUE_MESSAGE
  - TEST_ASSERT_UINT16_WITHIN
  - TEST_ASSERT_UINT16_WITHIN_MESSAGE
  - TEST_ASSERT_UINT32_WITHIN
  - TEST_ASSERT_UINT32_WITHIN_MESSAGE
  - TEST_ASSERT_UINT64_WITHIN
  - TEST_ASSERT_UINT64_WITHIN_MESSAGE
  - TEST_ASSERT_UINT8_WITHIN
  - TEST_ASSERT_UINT8_WITHIN_MESSAGE
  - TEST_ASSERT_UINT_WITHIN
  - TEST_ASSERT_UINT_WITHIN_MESSAGE
  - TEST_ASSERT_UNLESS
  - TEST_ASSERT_UNLESS_MESSAGE
  - TEST_CASE
  - TEST_DIR_PATH
  - TEST_FAIL
  - TEST_FAIL_MESSAGE
  - TEST_FILE
  - TEST_GROUP
  - TEST_GROUP_RUNNER
  - TEST_IGNORE
  - TEST_IGNORE_MESSAGE
  - TEST_IS_IGNORED
  - TEST_LINE_NUM
  - TEST_ONLY
  - TEST_PASS
  - TEST_PROTECT
  - TEST_SETUP
  - TEST_TEAR_DOWN
  - Try
  - UNITY
  - UNITY_BEGIN
  - UNITY_CLR_DETAILS
  - UNITY_CONFIG_H
  - UNITY_COUNTER_TYPE
  - UNITY_DETAIL1_NAME
  - UNITY_DETAIL2_NAME
  - UNITY_DISPLAY_RANGE_HEX
  - UNITY_DISPLAY_RANGE_INT
  - UNITY_DISPLAY_RANGE_UINT
  - UNITY_DISPLAY_STYLE_POINTER
  - UNITY_DOUBLE_PRECISION
  - UNITY_DOUBLE_TYPE
  - UNITY_END
  - UNITY_EXCLUDE_DOUBLE
  - UNITY_EXCLUDE_FLOAT_PRINT
  - UNITY_FAIL_AND_BAIL
  - UNITY_FIXTURE_FREE
  - UNITY_FIXTURE_H_
  - UNITY_FIXTURE_INTERNALS_H_
  - UNITY_FIXTURE_MALLOC
  - UNITY_FIXTURE_MALLOC_OVERRIDES_H_
  - UNITY_FLOAT_OR_DOUBLE_WITHIN
  - UNITY_FLOAT_PRECISION
  - UNITY_FLOAT_TYPE
  - UNITY_FLUSH_CALL
  - UNITY_FRAMEWORK_H
  - UNITY_IGNORE_AND_BAIL
  - UNITY_INCLUDE_DOUBLE
  - UNITY_INCLUDE_SETUP_STUBS
  - UNITY_INTERNALS_H
  - UNITY_INTERNAL_HEAP_SIZE_BYTES
  - UNITY_INTERNAL_PTR
  - UNITY_INT_WIDTH
  - UNITY_LINE_TYPE
  - UNITY_LONG_WIDTH
  - UNITY_MAX_POINTERS
  - UNITY_NAN_CHECK
  - UNITY_NEW_TEST
  - UNITY_OUTPUT_CHAR
  - UNITY_OUTPUT_COMPLETE
  - UNITY_OUTPUT_FLUSH
  - UNITY_OUTPUT_START
  - UNITY_POINTER_WIDTH
  - UNITY_PRINT_EOL
  - UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT
  - UNITY_PTR_ATTRIBUTE
  - UNITY_PTR_TO_INT
  - UNITY_SET_DETAIL
  - UNITY_SET_DETAILS
  - UNITY_SUPPORT_64
  - UNITY_TEST_ASSERT
  - UNITY_TEST_ASSERT_BITS
  - UNITY_TEST_ASSERT_DOUBLE_IS_DETERMINATE
  - UNITY_TEST_ASSERT_DOUBLE_IS_INF
  - UNITY_TEST_ASSERT_DOUBLE_IS_NAN
  - UNITY_TEST_ASSERT_DOUBLE_IS_NEG_INF
  - UNITY_TEST_ASSERT_DOUBLE_IS_NOT_DETERMINATE
  - UNITY_TEST_ASSERT_DOUBLE_IS_NOT_INF
  - UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NAN
  - UNITY_TEST_ASSERT_DOUBLE_IS_NOT_NEG_INF
  - UNITY_TEST_ASSERT_DOUBLE_WITHIN
  - UNITY_TEST_ASSERT_EACH_EQUAL_DOUBLE
  - UNITY_TEST_ASSERT_EACH_EQUAL_FLOAT
  - UNITY_TEST_ASSERT_EACH_EQUAL_HEX16
  - UNITY_TEST_ASSERT_EACH_EQUAL_HEX32
  - UNITY_TEST_ASSERT_EACH_EQUAL_HEX64
  - UNITY_TEST_ASSERT_EACH_EQUAL_HEX8
  - UNITY_TEST_ASSERT_EACH_EQUAL_INT
  - UNITY_TEST_ASSERT_EACH_EQUAL_INT16
  - UNITY_TEST_ASSERT_EACH_EQUAL_INT32
  - UNITY_TEST_ASSERT_EACH_EQUAL_INT64
  - UNITY_TEST_ASSERT_EACH_EQUAL_INT8
  - UNITY_TEST_ASSERT_EACH_EQUAL_MEMORY
  - UNITY_TEST_ASSERT_EACH_EQUAL_PTR
  - UNITY_TEST_ASSERT_EACH_EQUAL_STRING
  - UNITY_TEST_ASSERT_EACH_EQUAL_UINT
  - UNITY_TEST_ASSERT_EACH_EQUAL_UINT16
  - UNITY_TEST_ASSERT_EACH_EQUAL_UINT32
  - UNITY_TEST_ASSERT_EACH_EQUAL_UINT64
  - UNITY_TEST_ASSERT_EACH_EQUAL_UINT8
  - UNITY_TEST_ASSERT_EQUAL_DOUBLE
  - UNITY_TEST_ASSERT_EQUAL_DOUBLE_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T
  - UNITY_TEST_ASSERT_EQUAL_FLOAT
  - UNITY_TEST_ASSERT_EQUAL_FLOAT_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_HEX16
  - UNITY_TEST_ASSERT_EQUAL_HEX16_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_HEX32
  - UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_HEX64
  - UNITY_TEST_ASSERT_EQUAL_HEX64_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_HEX8
  - UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_INT
  - UNITY_TEST_ASSERT_EQUAL_INT16
  - UNITY_TEST_ASSERT_EQUAL_INT16_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_INT32
  - UNITY_TEST_ASSERT_EQUAL_INT32_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_INT64
  - UNITY_TEST_ASSERT_EQUAL_INT64_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_INT8
  - UNITY_TEST_ASSERT_EQUAL_INT8_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_INT_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_MEMORY
  - UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_PTR
  - UNITY_TEST_ASSERT_EQUAL_PTR_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_STRING
  - UNITY_TEST_ASSERT_EQUAL_STRING_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_STRING_LEN
  - UNITY_TEST_ASSERT_EQUAL_UINT
  - UNITY_TEST_ASSERT_EQUAL_UINT16
  - UNITY_TEST_ASSERT_EQUAL_UINT16_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_UINT32
  - UNITY_TEST_ASSERT_EQUAL_UINT32_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_UINT64
  - UNITY_TEST_ASSERT_EQUAL_UINT64_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_UINT8
  - UNITY_TEST_ASSERT_EQUAL_UINT8_ARRAY
  - UNITY_TEST_ASSERT_EQUAL_UINT_ARRAY
  - UNITY_TEST_ASSERT_FLOAT_IS_DETERMINATE
  - UNITY_TEST_ASSERT_FLOAT_IS_INF
  - UNITY_TEST_ASSERT_FLOAT_IS_NAN
  - UNITY_TEST_ASSERT_FLOAT_IS_NEG_INF
  - UNITY_TEST_ASSERT_FLOAT_IS_NOT_DETERMINATE
  - UNITY_TEST_ASSERT_FLOAT_IS_NOT_INF
  - UNITY_TEST_ASSERT_FLOAT_IS_NOT_NAN
  - UNITY_TEST_ASSERT_FLOAT_IS_NOT_NEG_INF
  - UNITY_TEST_ASSERT_FLOAT_WITHIN
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX16
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX32
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX64
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_HEX8
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT16
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT32
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT64
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_INT8
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT16
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT32
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT64
  - UNITY_TEST_ASSERT_GREATER_OR_EQUAL_UINT8
  - UNITY_TEST_ASSERT_GREATER_THAN_HEX16
  - UNITY_TEST_ASSERT_GREATER_THAN_HEX32
  - UNITY_TEST_ASSERT_GREATER_THAN_HEX64
  - UNITY_TEST_ASSERT_GREATER_THAN_HEX8
  - UNITY_TEST_ASSERT_GREATER_THAN_INT
  - UNITY_TEST_ASSERT_GREATER_THAN_INT16
  - UNITY_TEST_ASSERT_GREATER_THAN_INT32
  - UNITY_TEST_ASSERT_GREATER_THAN_INT64
  - UNITY_TEST_ASSERT_GREATER_THAN_INT8
  - UNITY_TEST_ASSERT_GREATER_THAN_UINT
  - UNITY_TEST_ASSERT_GREATER_THAN_UINT16
  - UNITY_TEST_ASSERT_GREATER_THAN_UINT32
  - UNITY_TEST_ASSERT_GREATER_THAN_UINT64
  - UNITY_TEST_ASSERT_GREATER_THAN_UINT8
  - UNITY_TEST_ASSERT_HEX16_WITHIN
  - UNITY_TEST_ASSERT_HEX32_WITHIN
  - UNITY_TEST_ASSERT_HEX64_WITHIN
  - UNITY_TEST_ASSERT_HEX8_WITHIN
  - UNITY_TEST_ASSERT_INT16_WITHIN
  - UNITY_TEST_ASSERT_INT32_WITHIN
  - UNITY_TEST_ASSERT_INT64_WITHIN
  - UNITY_TEST_ASSERT_INT8_WITHIN
  - UNITY_TEST_ASSERT_INT_WITHIN
  - UNITY_TEST_ASSERT_NOT_NULL
  - UNITY_TEST_ASSERT_NULL
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX16
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX32
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX64
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_HEX8
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT16
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT32
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT64
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_INT8
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT16
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT32
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT64
  - UNITY_TEST_ASSERT_SMALLER_OR_EQUAL_UINT8
  - UNITY_TEST_ASSERT_SMALLER_THAN_HEX16
  - UNITY_TEST_ASSERT_SMALLER_THAN_HEX32
  - UNITY_TEST_ASSERT_SMALLER_THAN_HEX64
  - UNITY_TEST_ASSERT_SMALLER_THAN_HEX8
  - UNITY_TEST_ASSERT_SMALLER_THAN_INT
  - UNITY_TEST_ASSERT_SMALLER_THAN_INT16
  - UNITY_TEST_ASSERT_SMALLER_THAN_INT32
  - UNITY_TEST_ASSERT_SMALLER_THAN_INT64
  - UNITY_TEST_ASSERT_SMALLER_THAN_INT8
  - UNITY_TEST_ASSERT_SMALLER_THAN_UINT
  - UNITY_TEST_ASSERT_SMALLER_THAN_UINT16
  - UNITY_TEST_ASSERT_SMALLER_THAN_UINT32
  - UNITY_TEST_ASSERT_SMALLER_THAN_UINT64
  - UNITY_TEST_ASSERT_SMALLER_THAN_UINT8
  - UNITY_TEST_ASSERT_UINT16_WITHIN
  - UNITY_TEST_ASSERT_UINT32_WITHIN
  - UNITY_TEST_ASSERT_UINT64_WITHIN
  - UNITY_TEST_ASSERT_UINT8_WITHIN
  - UNITY_TEST_ASSERT_UINT_WITHIN
  - UNITY_TEST_FAIL
  - UNITY_TEST_IGNORE
  - UNITY_WEAK_ATTRIBUTE
  - USING_OUTPUT_SPY
  - USING_SPY_AS
  - UT_PTR_SET
  - UnityOutputCharSpy_OutputChar
  - UnityPrintPointlessAndBail
  - VAL_UnityOutputCharSpy_OutputChar
  - VAL_putcharSpy
  - VERIFY_FAILS_END
  - VERIFY_IGNORES_END
  - _CRT_SECURE_NO_DEPRECATE
  - _TESTHELPER_H
  - _TESTSAMPLE_HEAD1_H
  - _TESTSAMPLE_MOCK_HEAD1_H
  - __WINDOWS__
  - assert_has_child
  - assert_has_no_child
  - assert_has_no_const_string
  - assert_has_no_reference
  - assert_has_no_string
  - assert_has_no_valuestring
  - assert_has_string
  - assert_has_type
  - assert_has_valuestring
  - assert_is_invalid
  - assert_not_in_list
  - buffer_at_offset
  - cJSON_Array
  - cJSON_ArrayForEach
  - cJSON_False
  - cJSON_Invalid
  - cJSON_IsReference
  - cJSON_NULL
  - cJSON_Number
  - cJSON_Object
  - cJSON_Raw
  - cJSON_SetBoolValue
  - cJSON_SetIntValue
  - cJSON_SetNumberValue
  - cJSON_String
  - cJSON_StringIsConst
  - cJSON_True
  - cJSON_Utils__h
  - cJSON__h
  - calloc
  - can_access_at_index
  - can_read
  - cannot_access_at_index
  - cjson_min
  - false
  - free
  - internal_free
  - internal_malloc
  - internal_realloc
  - isinf
  - isnan
  - malloc
  - realloc
  - static_strlen
  - true
*/

/* ====================================================================== */
/* COMPILATION NOTES */
/* ====================================================================== */
/*
This is a CALYX bundle - not meant for direct compilation.
To compile the original project:
  1. Extract files using the structure above
  2. Use the original build system (Makefile, CMake, etc.)
  3. Link with external dependencies:
     - ../cJSON.c
     - ../cJSON.h
     - ../cJSON_Utils.h
     - ../examples/unity_config.h
     - Mockstanky.h
     - Types.h
     - ctype.h
     - float.h
     - four.h
     - funky.h
     - limits.h
     - locale.h
     - math.h
     - one.h
     - setjmp.h
     - somethingelse.h
     - stanky.h
     - stddef.h
     - stdint.h
     - stdio.h
     - stdlib.h
     - string.h
     - three.h
     - two.h
     - whatever.h
*/

/* ====================================================================== */
/* HELPER FUNCTIONS (for analysis) */
/* ====================================================================== */
/*
To analyze this bundle programmatically:
  1. Parse CALYX_METADATA JSON string
  2. Scan for /* FILE: comments to locate files
  3. Use dependency graph for build order
  4. Extract functions using regex patterns
*/