typedef struct {  
    uint32_t Length;
    uint8_t * Base;
    uint8_t * Head;
} LIFO_Buf_t;

typedef enum  {
    LB_NO_ERROR = 0,
    LB_FULL,
    LB_NOT_FULL,
    LB_EMPTY,
    LB_NOT_EMPTY,
    LB_NULL,
} LB_Status;

void initLIFO (uint32_t Length) {

    LIFO_Buf_t lbuf;
    lbuf.base = (uint8_t) malloc (Length);
    if (! lbuf.base) { return LB_ERROR; }
    lbuf.length = length;
    lbuf.head = lbuf.base;

}

LB_Status LIFO_Is_Buf_Full(LIFO_Buf_t * lbuf) {

    /*Check if pointers are valid */
    if (! lbuf || ! lbuf->head || ! lbuf->base) {
        return LB_NULL;
    }
    /* Checks if in the ragen of buf[0] < index < buf[length] */
    if (lbuf->head == lbuf->base + (lbuf->length - 1)) {
        return LB_FULL;
    } else {
        return LB_NOT_FULL;
    }

}

void AddDataToLIFO (uint8_t data, LIFO_Buf_t &LIFO) {

    /** Check if pointer are valid*/
    if (! lbuf || ! lbuf->head || ! lbuf->base) {
    return LB_NULL;
    }

    /** Check if buffer is full */
    if (LB_Is_Buf_Full (lbuf) == LB_FULL) {
    return LB_FULL;
    }

    LIFO->head++;
	*LIFO->head = data;
	
    return LB_NO_ERROR;    
}

void GetDataFromLIFO (void) {

}