// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#ifndef ZCM_EMBEDDED
#include <stdio.h>
#endif
#include "ADCU_CAN_CMD.h"

static int __ADCU_CAN_CMD_hash_computed = 0;
static uint64_t __ADCU_CAN_CMD_hash;

uint64_t __ADCU_CAN_CMD_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ADCU_CAN_CMD_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ADCU_CAN_CMD_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x79e8d6d6176e5a5fLL
         + __int8_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ADCU_CAN_CMD_get_hash(void)
{
    if (!__ADCU_CAN_CMD_hash_computed) {
        __ADCU_CAN_CMD_hash = (int64_t)__ADCU_CAN_CMD_hash_recursive(NULL);
        __ADCU_CAN_CMD_hash_computed = 1;
    }

    return __ADCU_CAN_CMD_hash;
}

int __ADCU_CAN_CMD_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ADCU_CAN_CMD* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* LngCtrlReq */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].LngCtrlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* AutoTrqWhlReq */
        thislen = __int16_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].AutoTrqWhlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* BrakeReq */
        thislen = __float_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].BrakeReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* GearLvlReq */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].GearLvlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* GearLvlReqVD */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].GearLvlReqVD), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* LatCtrlReq */
        thislen = __int8_t_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].LatCtrlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* SteerWhlTorqReq */
        thislen = __float_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].SteerWhlTorqReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* SteerAngReq */
        thislen = __float_encode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].SteerAngReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int ADCU_CAN_CMD_encode(void* buf, uint32_t offset, uint32_t maxlen, const ADCU_CAN_CMD* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ADCU_CAN_CMD_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ADCU_CAN_CMD_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ADCU_CAN_CMD_encoded_array_size(const ADCU_CAN_CMD* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int8_t_encoded_array_size(&(p[element].LngCtrlReq), 1); // LngCtrlReq

        size += __int16_t_encoded_array_size(&(p[element].AutoTrqWhlReq), 1); // AutoTrqWhlReq

        size += __float_encoded_array_size(&(p[element].BrakeReq), 1); // BrakeReq

        size += __int8_t_encoded_array_size(&(p[element].GearLvlReq), 1); // GearLvlReq

        size += __int8_t_encoded_array_size(&(p[element].GearLvlReqVD), 1); // GearLvlReqVD

        size += __int8_t_encoded_array_size(&(p[element].LatCtrlReq), 1); // LatCtrlReq

        size += __float_encoded_array_size(&(p[element].SteerWhlTorqReq), 1); // SteerWhlTorqReq

        size += __float_encoded_array_size(&(p[element].SteerAngReq), 1); // SteerAngReq

    }
    return size;
}

uint32_t ADCU_CAN_CMD_encoded_size(const ADCU_CAN_CMD* p)
{
    return 8 + __ADCU_CAN_CMD_encoded_array_size(p, 1);
}

int __ADCU_CAN_CMD_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ADCU_CAN_CMD* p, uint32_t elements)
{
    uint32_t pos_byte = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        /* LngCtrlReq */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].LngCtrlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* AutoTrqWhlReq */
        thislen = __int16_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].AutoTrqWhlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* BrakeReq */
        thislen = __float_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].BrakeReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* GearLvlReq */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].GearLvlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* GearLvlReqVD */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].GearLvlReqVD), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* LatCtrlReq */
        thislen = __int8_t_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].LatCtrlReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* SteerWhlTorqReq */
        thislen = __float_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].SteerWhlTorqReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

        /* SteerAngReq */
        thislen = __float_decode_array(buf, offset + pos_byte, maxlen - pos_byte, &(p[element].SteerAngReq), 1);
        if (thislen < 0) return thislen; else pos_byte += thislen;

    }
    return pos_byte;
}

int __ADCU_CAN_CMD_decode_array_cleanup(ADCU_CAN_CMD* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int8_t_decode_array_cleanup(&(p[element].LngCtrlReq), 1);

        __int16_t_decode_array_cleanup(&(p[element].AutoTrqWhlReq), 1);

        __float_decode_array_cleanup(&(p[element].BrakeReq), 1);

        __int8_t_decode_array_cleanup(&(p[element].GearLvlReq), 1);

        __int8_t_decode_array_cleanup(&(p[element].GearLvlReqVD), 1);

        __int8_t_decode_array_cleanup(&(p[element].LatCtrlReq), 1);

        __float_decode_array_cleanup(&(p[element].SteerWhlTorqReq), 1);

        __float_decode_array_cleanup(&(p[element].SteerAngReq), 1);

    }
    return 0;
}

int ADCU_CAN_CMD_decode(const void* buf, uint32_t offset, uint32_t maxlen, ADCU_CAN_CMD* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ADCU_CAN_CMD_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ADCU_CAN_CMD_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ADCU_CAN_CMD_decode_cleanup(ADCU_CAN_CMD* p)
{
    return __ADCU_CAN_CMD_decode_array_cleanup(p, 1);
}

uint32_t __ADCU_CAN_CMD_clone_array(const ADCU_CAN_CMD* p, ADCU_CAN_CMD* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int8_t_clone_array(&(p[element].LngCtrlReq), &(q[element].LngCtrlReq), 1);

        n += __int16_t_clone_array(&(p[element].AutoTrqWhlReq), &(q[element].AutoTrqWhlReq), 1);

        n += __float_clone_array(&(p[element].BrakeReq), &(q[element].BrakeReq), 1);

        n += __int8_t_clone_array(&(p[element].GearLvlReq), &(q[element].GearLvlReq), 1);

        n += __int8_t_clone_array(&(p[element].GearLvlReqVD), &(q[element].GearLvlReqVD), 1);

        n += __int8_t_clone_array(&(p[element].LatCtrlReq), &(q[element].LatCtrlReq), 1);

        n += __float_clone_array(&(p[element].SteerWhlTorqReq), &(q[element].SteerWhlTorqReq), 1);

        n += __float_clone_array(&(p[element].SteerAngReq), &(q[element].SteerAngReq), 1);

    }
    return n;
}

ADCU_CAN_CMD* ADCU_CAN_CMD_copy(const ADCU_CAN_CMD* p)
{
    ADCU_CAN_CMD* q = (ADCU_CAN_CMD*) malloc(sizeof(ADCU_CAN_CMD));
    __ADCU_CAN_CMD_clone_array(p, q, 1);
    return q;
}

void ADCU_CAN_CMD_destroy(ADCU_CAN_CMD* p)
{
    __ADCU_CAN_CMD_decode_array_cleanup(p, 1);
    free(p);
}

int ADCU_CAN_CMD_publish(zcm_t* zcm, const char* channel, const ADCU_CAN_CMD* p)
{
      uint32_t max_data_size = ADCU_CAN_CMD_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ADCU_CAN_CMD_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ADCU_CAN_CMD_subscription_t {
    ADCU_CAN_CMD_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ADCU_CAN_CMD_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ADCU_CAN_CMD p;
    memset(&p, 0, sizeof(ADCU_CAN_CMD));
    status = ADCU_CAN_CMD_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr, "error %d decoding ADCU_CAN_CMD!!!\n", status);
        #endif
        return;
    }

    ADCU_CAN_CMD_subscription_t* h = (ADCU_CAN_CMD_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ADCU_CAN_CMD_decode_cleanup (&p);
}

ADCU_CAN_CMD_subscription_t* ADCU_CAN_CMD_subscribe (zcm_t* zcm,
                    const char* channel,
                    ADCU_CAN_CMD_handler_t f, void* userdata)
{
    ADCU_CAN_CMD_subscription_t* n = (ADCU_CAN_CMD_subscription_t*)
                       malloc(sizeof(ADCU_CAN_CMD_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ADCU_CAN_CMD_handler_stub, n);
    if (n->z_sub == NULL) {
        #ifndef ZCM_EMBEDDED
        fprintf (stderr,"couldn't reg ADCU_CAN_CMD ZCM handler!\n");
        #endif
        free (n);
        return NULL;
    }
    return n;
}

int ADCU_CAN_CMD_unsubscribe(zcm_t* zcm, ADCU_CAN_CMD_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        #ifndef ZCM_EMBEDDED
        fprintf(stderr,
           "couldn't unsubscribe ADCU_CAN_CMD_handler %p!\n", hid);
        #endif
        return -1;
    }
    free (hid);
    return 0;
}

