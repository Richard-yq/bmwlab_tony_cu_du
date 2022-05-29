#!/bin/bash

Path_of_OSC_ODU_Hi_F1AP_R15_codec_utils=../../osc_odu_high/src/codec_utils/F1AP
Path_of_OAI_F1AP_R16_codec_utils=ran_build/build/CMakeFiles/F1AP_R16.3.1
F1AP_RRC_Version_h=$Path_of_OAI_F1AP_R16_codec_utils/F1AP_RRC-Version.h
F1AP_ProtocolExtensionField_h=$Path_of_OAI_F1AP_R16_codec_utils/F1AP_ProtocolExtensionField.h
F1AP_ProtocolExtensionField_c=$Path_of_OAI_F1AP_R16_codec_utils/F1AP_ProtocolExtensionField.c
Latest_RRC_Version_Enhanced_c=$Path_of_OAI_F1AP_R16_codec_utils/Latest-RRC-Version-Enhanced.c

echo "=== Change OAI F1AP codec files to support OSC RRC Version IE encoding and decoding ==="
echo "Modify $F1AP_RRC_Version_h ..."
sed -i '12a #include <F1AP_ProtocolExtensionContainer.h>' $F1AP_RRC_Version_h
sed -i 's/struct F1AP_ProtocolExtensionContainer/F1AP_ProtocolExtensionContainer_154P228_t/g' $F1AP_RRC_Version_h

echo "Copy Latest-RRC-Version-Enhanced.c and Latest-RRC-Version-Enhanced.h from $Path_of_OSC_ODU_Hi_F1AP_R15_codec_utils to $Path_of_OAI_F1AP_R16_codec_utils ..."
cp $Path_of_OSC_ODU_Hi_F1AP_R15_codec_utils/Latest-RRC-Version-Enhanced.c $Path_of_OAI_F1AP_R16_codec_utils
cp $Path_of_OSC_ODU_Hi_F1AP_R15_codec_utils/Latest-RRC-Version-Enhanced.h $Path_of_OAI_F1AP_R16_codec_utils

echo "Modify $F1AP_ProtocolExtensionField_c ..."
sed -i 's/asn_DEF_OCTET_STRING/asn_DEF_Latest_RRC_Version_Enhanced/g' $F1AP_ProtocolExtensionField_c
sed -i 's/OCTET STRING (SIZE(3))/Latest-RRC-Version-Enhanced/g' $F1AP_ProtocolExtensionField_c
sed -i 's/choice.OCTET_STRING_SIZE_3_/choice.Latest_RRC_Version_Enhanced/g' $F1AP_ProtocolExtensionField_c

echo "Modify $F1AP_ProtocolExtensionField_h ..."
sed -i '101a #include "Latest-RRC-Version-Enhanced.h"' $F1AP_ProtocolExtensionField_h
sed -i 's/F1AP_RRC_Version_ExtIEs__extensionValue_PR_OCTET_STRING_SIZE_3_/F1AP_RRC_Version_ExtIEs__extensionValue_PR_Latest_RRC_Version_Enhanced/g' $F1AP_ProtocolExtensionField_h
sed -i 's/OCTET_STRING_t	 OCTET_STRING_SIZE_3_/Latest_RRC_Version_Enhanced_t	 Latest_RRC_Version_Enhanced/g' $F1AP_ProtocolExtensionField_h

echo "Modify $Latest_RRC_Version_Enhanced_c ..."
sed -i 40,42d $Latest_RRC_Version_Enhanced_c
sed -i 's/&asn_OER_type_Latest_RRC_Version_Enhanced_constr_1/0/g' $Latest_RRC_Version_Enhanced_c


