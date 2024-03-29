//
// Generated file, do not edit! Created by nedtool 5.5 from myPacket.msg.
//

#ifndef __MYPACKET_M_H
#define __MYPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0505
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>myPacket.msg:2</tt> by nedtool.
 * <pre>
 * packet myPacket
 * {
 *     unsigned int seq;
 *     unsigned short type;
 * }
 * </pre>
 */
class myPacket : public ::omnetpp::cPacket
{
  protected:
    unsigned int seq;
    unsigned short type;

  private:
    void copy(const myPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const myPacket&);

  public:
    myPacket(const char *name=nullptr, short kind=0);
    myPacket(const myPacket& other);
    virtual ~myPacket();
    myPacket& operator=(const myPacket& other);
    virtual myPacket *dup() const override {return new myPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getSeq() const;
    virtual void setSeq(unsigned int seq);
    virtual unsigned short getType() const;
    virtual void setType(unsigned short type);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const myPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, myPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef __MYPACKET_M_H

