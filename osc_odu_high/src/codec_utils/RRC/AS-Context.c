/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "./22April22_Paging/rrc_15.3_asn.asn1"
 * 	`asn1c -D ./22April22_Paging -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "AS-Context.h"

#include "ReestablishmentInfo.h"
#include "ConfigRestrictInfoSCG.h"
#include "RAN-NotificationAreaInfo.h"
static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct AS_Context__ext1, ran_NotificationAreaInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RAN_NotificationAreaInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-NotificationAreaInfo"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ran-NotificationAreaInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct AS_Context__ext1),
	offsetof(struct AS_Context__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AS_Context_1[] = {
	{ ATF_POINTER, 3, offsetof(struct AS_Context, reestablishmentInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReestablishmentInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishmentInfo"
		},
	{ ATF_POINTER, 2, offsetof(struct AS_Context, configRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfigRestrictInfoSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configRestrictInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct AS_Context, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_AS_Context_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_AS_Context_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AS_Context_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reestablishmentInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* configRestrictInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_AS_Context_specs_1 = {
	sizeof(struct AS_Context),
	offsetof(struct AS_Context, _asn_ctx),
	asn_MAP_AS_Context_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_AS_Context_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AS_Context = {
	"AS-Context",
	"AS-Context",
	&asn_OP_SEQUENCE,
	asn_DEF_AS_Context_tags_1,
	sizeof(asn_DEF_AS_Context_tags_1)
		/sizeof(asn_DEF_AS_Context_tags_1[0]), /* 1 */
	asn_DEF_AS_Context_tags_1,	/* Same as above */
	sizeof(asn_DEF_AS_Context_tags_1)
		/sizeof(asn_DEF_AS_Context_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AS_Context_1,
	3,	/* Elements count */
	&asn_SPC_AS_Context_specs_1	/* Additional specs */
};

