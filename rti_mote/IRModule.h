#ifndef IRMODULE_H
#define IRMODULE_H

#ifndef IR_TX_PIN
#define IR_TX_PIN           23
#endif
#ifndef IR_RX_PIN
#define IR_RX_PIN           33
#endif
#define IR_ADDRESS_EXAMPLE  0x0102
#define IR_CODE_EXAMPLE     0x34
#define IR_REPETITION       0

/**
 * @brief The algorithm to send an IR signal and estimate RSS.
 */
class IRModule;

class IRModule {
    private:
        
    public:
        void setup(unsigned int txPin);
        void setup();
        void sendExample();
        float rss();
};
#endif /*IRMODULE_H*/