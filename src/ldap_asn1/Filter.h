/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "simple_ldap_asn1.asn"
 */

#ifndef	_Filter_H_
#define	_Filter_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AttributeValueAssertion.h"
#include "SubstringFilter.h"
#include "AttributeDescription.h"
#include "MatchingRuleAssertion.h"
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Filter_PR {
	Filter_PR_NOTHING,	/* No components present */
	Filter_PR_and,
	Filter_PR_or,
	Filter_PR_not,
	Filter_PR_equalityMatch,
	Filter_PR_substrings,
	Filter_PR_greaterOrEqual,
	Filter_PR_lessOrEqual,
	Filter_PR_present,
	Filter_PR_approxMatch,
	Filter_PR_extensibleMatch
} Filter_PR;

/* Forward declarations */
struct Filter;

struct Filter__and {
			A_SET_OF(struct Filter) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		};
        
struct Filter__or {
			A_SET_OF(struct Filter) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		};
/* Filter */
typedef struct Filter {
	Filter_PR present;
	union Filter_u {
		struct Filter__and and_f;
		struct Filter__or or_f;
		struct Filter	*not_f;
		AttributeValueAssertion_t	 equalityMatch;
		SubstringFilter_t	 substrings;
		AttributeValueAssertion_t	 greaterOrEqual;
		AttributeValueAssertion_t	 lessOrEqual;
		AttributeDescription_t	 present;
		AttributeValueAssertion_t	 approxMatch;
		MatchingRuleAssertion_t	 extensibleMatch;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Filter_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Filter;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Filter.h"

#endif	/* _Filter_H_ */
#include <asn_internal.h>
