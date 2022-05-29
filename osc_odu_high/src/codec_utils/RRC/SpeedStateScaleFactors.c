/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "SpeedStateScaleFactors.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_sf_Medium_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sf_Medium_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_sf_High_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_sf_High_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_sf_Medium_value2enum_2[] = {
	{ 0,	6,	"oDot25" },
	{ 1,	5,	"oDot5" },
	{ 2,	6,	"oDot75" },
	{ 3,	5,	"lDot0" }
};
static const unsigned int asn_MAP_sf_Medium_enum2value_2[] = {
	3,	/* lDot0(3) */
	0,	/* oDot25(0) */
	1,	/* oDot5(1) */
	2	/* oDot75(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_Medium_specs_2 = {
	asn_MAP_sf_Medium_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_Medium_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_Medium_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_Medium_2 = {
	"sf-Medium",
	"sf-Medium",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_Medium_tags_2,
	sizeof(asn_DEF_sf_Medium_tags_2)
		/sizeof(asn_DEF_sf_Medium_tags_2[0]) - 1, /* 1 */
	asn_DEF_sf_Medium_tags_2,	/* Same as above */
	sizeof(asn_DEF_sf_Medium_tags_2)
		/sizeof(asn_DEF_sf_Medium_tags_2[0]), /* 2 */
	{ &asn_OER_type_sf_Medium_constr_2, &asn_PER_type_sf_Medium_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_Medium_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sf_High_value2enum_7[] = {
	{ 0,	6,	"oDot25" },
	{ 1,	5,	"oDot5" },
	{ 2,	6,	"oDot75" },
	{ 3,	5,	"lDot0" }
};
static const unsigned int asn_MAP_sf_High_enum2value_7[] = {
	3,	/* lDot0(3) */
	0,	/* oDot25(0) */
	1,	/* oDot5(1) */
	2	/* oDot75(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_sf_High_specs_7 = {
	asn_MAP_sf_High_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_sf_High_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_sf_High_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sf_High_7 = {
	"sf-High",
	"sf-High",
	&asn_OP_NativeEnumerated,
	asn_DEF_sf_High_tags_7,
	sizeof(asn_DEF_sf_High_tags_7)
		/sizeof(asn_DEF_sf_High_tags_7[0]) - 1, /* 1 */
	asn_DEF_sf_High_tags_7,	/* Same as above */
	sizeof(asn_DEF_sf_High_tags_7)
		/sizeof(asn_DEF_sf_High_tags_7[0]), /* 2 */
	{ &asn_OER_type_sf_High_constr_7, &asn_PER_type_sf_High_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_sf_High_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SpeedStateScaleFactors_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedStateScaleFactors, sf_Medium),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_Medium_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-Medium"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedStateScaleFactors, sf_High),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_sf_High_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sf-High"
		},
};
static const ber_tlv_tag_t asn_DEF_SpeedStateScaleFactors_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SpeedStateScaleFactors_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf-Medium */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sf-High */
};
asn_SEQUENCE_specifics_t asn_SPC_SpeedStateScaleFactors_specs_1 = {
	sizeof(struct SpeedStateScaleFactors),
	offsetof(struct SpeedStateScaleFactors, _asn_ctx),
	asn_MAP_SpeedStateScaleFactors_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SpeedStateScaleFactors = {
	"SpeedStateScaleFactors",
	"SpeedStateScaleFactors",
	&asn_OP_SEQUENCE,
	asn_DEF_SpeedStateScaleFactors_tags_1,
	sizeof(asn_DEF_SpeedStateScaleFactors_tags_1)
		/sizeof(asn_DEF_SpeedStateScaleFactors_tags_1[0]), /* 1 */
	asn_DEF_SpeedStateScaleFactors_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedStateScaleFactors_tags_1)
		/sizeof(asn_DEF_SpeedStateScaleFactors_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SpeedStateScaleFactors_1,
	2,	/* Elements count */
	&asn_SPC_SpeedStateScaleFactors_specs_1	/* Additional specs */
};

