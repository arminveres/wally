/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: usb.i

#ifndef SWIG_usb_WRAP_H_
#define SWIG_usb_WRAP_H_

class Swig_memory;

class SwigDirector_HIDPacketHandler : public HIDPacketHandler
{
 public:
  SwigDirector_HIDPacketHandler(int swig_p);
  virtual ~SwigDirector_HIDPacketHandler();
  virtual void handleIncomingPacket(signed char *packet);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

class SwigDirector_EventHandler : public EventHandler
{
 public:
  SwigDirector_EventHandler(int swig_p);
  virtual ~SwigDirector_EventHandler();
  virtual void handleUSBConnectionEvent(bool connected, Device dev);
 private:
  intgo go_val;
  Swig_memory *swig_mem;
};

#endif
