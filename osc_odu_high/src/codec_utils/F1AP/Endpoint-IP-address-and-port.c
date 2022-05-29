/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "Endpoint-IP-address-and-port.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Endpoint_IP_address_and_port_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Endpoint_IP_address_and_port, endpointIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"endpointIPAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct Endpoint_IP_address_and_port, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Endpoint_IP_address_and_port_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Endpoint_IP_address_and_port_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Endpoint_IP_address_and_port_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* endpointIPAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Endpoint_IP_address_and_port_specs_1 = {
	sizeof(struct Endpoint_IP_address_and_port),
	offsetof(struct Endpoint_IP_address_and_port, _asn_ctx),
	asn_MAP_Endpoint_IP_address_and_port_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Endpoint_IP_address_and_port_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Endpoint_IP_address_and_port = {
	"Endpoint-IP-address-and-port",
	"Endpoint-IP-address-and-port",
	&asn_OP_SEQUENCE,
	asn_DEF_Endpoint_IP_address_and_port_tags_1,
	sizeof(asn_DEF_Endpoint_IP_address_and_port_tags_1)
		/sizeof(asn_DEF_Endpoint_IP_address_and_port_tags_1[0]), /* 1 */
	asn_DEF_Endpoint_IP_address_and_port_tags_1,	/* Same as above */
	sizeof(asn_DEF_Endpoint_IP_address_and_port_tags_1)
		/sizeof(asn_DEF_Endpoint_IP_address_and_port_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Endpoint_IP_address_and_port_1,
	2,	/* Elements count */
	&asn_SPC_Endpoint_IP_address_and_port_specs_1	/* Additional specs */
};

