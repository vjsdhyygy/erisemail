/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "simple_ldap_asn1.asn"
 */

#ifndef	_Control_H_
#define	_Control_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ControlType.h"
#include <BOOLEAN.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Control */
typedef struct Control {
	ControlType_t	 controlType;
	BOOLEAN_t	*criticality	/* DEFAULT FALSE */;
	OCTET_STRING_t	*controlValue	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Control_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Control;

#ifdef __cplusplus
}
#endif

#endif	/* _Control_H_ */
#include <asn_internal.h>
