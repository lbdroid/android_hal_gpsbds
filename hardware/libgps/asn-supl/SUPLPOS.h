/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS"
 * 	found in "../supl-pos.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SUPLPOS_H_
#define	_SUPLPOS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PosPayLoad.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Velocity;
struct Ver2_SUPL_POS_extension;

/* SUPLPOS */
typedef struct SUPLPOS {
	PosPayLoad_t	 posPayLoad;
	struct Velocity	*velocity	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Ver2_SUPL_POS_extension	*ver2_SUPL_POS_extension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUPLPOS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUPLPOS;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Velocity.h"
#include "Ver2-SUPL-POS-extension.h"

#endif	/* _SUPLPOS_H_ */
#include <asn_internal.h>