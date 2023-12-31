// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ADCU_CAN_CMD_h
#define _ADCU_CAN_CMD_h

#ifdef __cplusplus
extern "C" {
#endif

#define ADCU_CAN_CMD_IS_LITTLE_ENDIAN 0
typedef struct _ADCU_CAN_CMD ADCU_CAN_CMD;
struct _ADCU_CAN_CMD
{
    int8_t     LngCtrlReq;
    int16_t    AutoTrqWhlReq;
    float      BrakeReq;
    int8_t     GearLvlReq;
    int8_t     GearLvlReqVD;
    int8_t     LatCtrlReq;
    float      SteerWhlTorqReq;
    float      SteerAngReq;
};

/**
 * Create a deep copy of a ADCU_CAN_CMD.
 * When no longer needed, destroy it with ADCU_CAN_CMD_destroy()
 */
ADCU_CAN_CMD* ADCU_CAN_CMD_copy(const ADCU_CAN_CMD* to_copy);

/**
 * Destroy an instance of ADCU_CAN_CMD created by ADCU_CAN_CMD_copy()
 */
void ADCU_CAN_CMD_destroy(ADCU_CAN_CMD* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ADCU_CAN_CMD_subscription_t ADCU_CAN_CMD_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ADCU_CAN_CMD is received.
 */
typedef void(*ADCU_CAN_CMD_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ADCU_CAN_CMD* msg, void* userdata);

/**
 * Publish a message of type ADCU_CAN_CMD using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ADCU_CAN_CMD_publish(zcm_t* zcm, const char* channel, const ADCU_CAN_CMD* msg);

/**
 * Subscribe to messages of type ADCU_CAN_CMD using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ADCU_CAN_CMD_unsubscribe.
 */
ADCU_CAN_CMD_subscription_t* ADCU_CAN_CMD_subscribe(zcm_t* zcm, const char* channel, ADCU_CAN_CMD_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ADCU_CAN_CMD_subscribe()
 */
int ADCU_CAN_CMD_unsubscribe(zcm_t* zcm, ADCU_CAN_CMD_subscription_t* hid);
/**
 * Encode a message of type ADCU_CAN_CMD into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ADCU_CAN_CMD_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ADCU_CAN_CMD_encode(void* buf, uint32_t offset, uint32_t maxlen, const ADCU_CAN_CMD* p);

/**
 * Decode a message of type ADCU_CAN_CMD from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ADCU_CAN_CMD_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ADCU_CAN_CMD_decode(const void* buf, uint32_t offset, uint32_t maxlen, ADCU_CAN_CMD* msg);

/**
 * Release resources allocated by ADCU_CAN_CMD_decode()
 * @return 0
 */
int ADCU_CAN_CMD_decode_cleanup(ADCU_CAN_CMD* p);

/**
 * Check how many bytes are required to encode a message of type ADCU_CAN_CMD
 */
uint32_t ADCU_CAN_CMD_encoded_size(const ADCU_CAN_CMD* p);

// ZCM support functions. Users should not call these
int64_t  __ADCU_CAN_CMD_get_hash(void);
uint64_t __ADCU_CAN_CMD_hash_recursive(const __zcm_hash_ptr* p);
int      __ADCU_CAN_CMD_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ADCU_CAN_CMD* p, uint32_t elements);
int      __ADCU_CAN_CMD_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ADCU_CAN_CMD* p, uint32_t elements);
int      __ADCU_CAN_CMD_decode_array_cleanup(ADCU_CAN_CMD* p, uint32_t elements);
uint32_t __ADCU_CAN_CMD_encoded_array_size(const ADCU_CAN_CMD* p, uint32_t elements);
uint32_t __ADCU_CAN_CMD_clone_array(const ADCU_CAN_CMD* p, ADCU_CAN_CMD* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
