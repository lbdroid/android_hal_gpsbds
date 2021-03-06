/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../supl-report.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_TimeStamp_H_
#define	_TimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTCTime.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeStamp_PR {
	TimeStamp_PR_NOTHING,	/* No components present */
	TimeStamp_PR_absoluteTime,
	TimeStamp_PR_relativeTime
} TimeStamp_PR;

/* TimeStamp */
typedef struct TimeStamp {
	TimeStamp_PR present;
	union TimeStamp_u {
		UTCTime_t	 absoluteTime;
		long	 relativeTime;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeStamp;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeStamp_H_ */
#include <asn_internal.h>
