/** Copyright (c) 2009 Open Information Security Foundation.
 *  \author Anoop Saldanha <poonaatsoc@gmail.com>
 *
 * \todo Needs refining of the error codes.  Renaming with a prefix of SC_ERR,
 *       removal of duplicates and entries have to be made in util-error.c
 */

#ifndef __ERROR_H__
#define __ERROR_H__


/* different error types */
typedef enum {
    SC_OK,
    SC_ERR_MEM_ALLOC,
    SC_ERR_PCRE_MATCH,
    SC_ERR_PCRE_GET_SUBSTRING,
    SC_ERR_PCRE_COMPILE,
    SC_ERR_PCRE_STUDY,
    SC_ERR_PCRE_PARSE,
    SC_ERR_LOG_MODULE_NOT_INIT,
    SC_ERR_LOG_FG_FILTER_MATCH,
    SC_ERR_COUNTER_EXCEEDED,
    SC_ERR_INVALID_CHECKSUM,
    SC_ERR_SPRINTF,
    SC_ERR_INVALID_ARGUMENT,
    SC_ERR_SPINLOCK,
    SC_ERR_INVALID_ENUM_MAP,
    SC_ERR_INVALID_IP_NETBLOCK,
    SC_ERR_INVALID_IPV4_ADDR,
    SC_ERR_INVALID_IPV6_ADDR,
    SC_ERR_INVALID_RUNMODE,
    SC_ERR_INVALID_SIGNATURE,
    SC_ERR_OPENING_FILE,
    SC_ERR_OPENING_RULE_FILE,
    SC_ERR_NO_RULES,
    SC_ERR_NO_RULES_LOADED,
    SC_ERR_FOPEN,
    SC_ERR_INITIALIZATION,
    SC_ERR_THREAD_SPAWN,
    SC_ERR_SYSCALL,
    SC_ERR_SYSCONF,
    SC_ERR_INVALID_ARGUMENTS,
    SC_ERR_THREAD_CREATE,
    SC_ERR_PERF_STATS_NOT_INIT,
    SC_ERR_COMPLETE_PORT_SPACE_NEGATED,
    SC_ERR_NO_PORTS_LEFT_AFTER_MERGE,
    SC_ERR_NEGATED_VALUE_IN_PORT_RANGE,
    SC_ERR_PORT_PARSE_INSERT_STRING,
    SC_ERR_UNREACHABLE_CODE_REACHED,
    SC_ERR_ALPARSER,
    SC_ERR_INVALID_NUMERIC_VALUE,
    SC_ERR_NUMERIC_VALUE_ERANGE,
    SC_ERR_INVALID_NUM_BYTES,
    SC_ERR_ARG_LEN_LONG,
    SC_ERR_POOL_EMPTY,
    SC_ERR_REASSEMBLY,
    SC_ERR_POOL_INIT,
    SC_ERR_NFQ_OPEN,
    SC_ERR_NFQ_BIND,
    SC_ERR_NFQ_UNBIND,
    SC_ERR_NFQ_MAXLEN,
    SC_ERR_NFQ_CREATE_QUEUE,
    SC_ERR_NFQ_SET_MODE,
    SC_ERR_NFQ_SETSOCKOPT,
    SC_ERR_NFQ_RECV,
    SC_ERR_NFQ_HANDLE_PKT,
    SC_ERR_NFQ_SET_VERDICT,
    SC_ERR_NFQ_THREAD_INIT,
    SC_ERR_IPFW_NOSUPPORT,
    SC_ERR_IPFW_BIND,
    SC_ERR_IPFW_SOCK,
    SC_ERR_IPFW_NOPORT,
    SC_WARN_IPFW_RECV,
    SC_WARN_IPFW_XMIT,
    SC_WARN_IPFW_SETSOCKOPT,
    SC_WARN_IPFW_UNBIND,
    SC_ERR_DAEMON,
    SC_ERR_UNIMPLEMENTED,
    SC_ERR_ADDRESS_ENGINE_GENERIC,
    SC_ERR_FAST_LOG_GENERIC,
    SC_ERR_DEBUG_LOG_GENERIC,
    SC_ERR_UNIFIED_LOG_GENERIC,
    SC_ERR_HTTP_LOG_GENERIC,
    SC_ERR_UNIFIED_ALERT_GENERIC,
    SC_ERR_UNIFIED2_ALERT_GENERIC,
    SC_ERR_FWRITE,
    SC_ERR_THRESHOLD_HASH_ADD,
    SC_ERR_UNDEFINED_VAR,
    SC_ERR_RULE_KEYWORD_UNKNOWN,
    SC_ERR_FLAGS_MODIFIER,
    SC_ERR_DISTANCE_MISSING_CONTENT,
    SC_ERR_WITHIN_MISSING_CONTENT,
    SC_ERR_OFFSET_MISSING_CONTENT,
    SC_ERR_DEPTH_MISSING_CONTENT,
    SC_ERR_NO_URICONTENT_NEGATION,
    SC_ERR_HASH_TABLE_INIT,
    SC_ERR_STAT,
    SC_ERR_LOGDIR_CONFIG,
    SC_ERR_LOGDIR_CMDLINE,
    SC_ERR_MISSING_CONFIG_PARAM,
    SC_ERR_RADIX_TREE_GENERIC,
    SC_ERR_MISSING_QUOTE,
    SC_ERR_MUTEX,
    SC_ERR_REPUTATION_INVALID_OPERATION,
    SC_ERR_REPUTATION_INVALID_TYPE,
    SC_ERR_UNKNOWN_PROTOCOL,
    SC_ERR_UNKNOWN_RUN_MODE,
    SC_ERR_MULTIPLE_RUN_MODE,
    SC_ERR_BPF,
    SC_ERR_PCAP_DISPATCH,
    SC_ERR_BYTE_EXTRACT_FAILED,
} SCError;

const char *SCErrorToString(SCError);


#endif /* __ERROR_H__ */
