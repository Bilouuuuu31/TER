// Generated by gencpp from file vrep_common/simRosAppendStringSignal.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNAL_H
#define VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNAL_H

#include <ros/service_traits.h>


#include <vrep_common/simRosAppendStringSignalRequest.h>
#include <vrep_common/simRosAppendStringSignalResponse.h>


namespace vrep_common
{

struct simRosAppendStringSignal
{

typedef simRosAppendStringSignalRequest Request;
typedef simRosAppendStringSignalResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosAppendStringSignal
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosAppendStringSignal > {
  static const char* value()
  {
    return "c49759e205be8f8195cc764a3a6b6c4d";
  }

  static const char* value(const ::vrep_common::simRosAppendStringSignal&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosAppendStringSignal > {
  static const char* value()
  {
    return "vrep_common/simRosAppendStringSignal";
  }

  static const char* value(const ::vrep_common::simRosAppendStringSignal&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosAppendStringSignalRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosAppendStringSignal > 
template<>
struct MD5Sum< ::vrep_common::simRosAppendStringSignalRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosAppendStringSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosAppendStringSignalRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosAppendStringSignalRequest> should match 
// service_traits::DataType< ::vrep_common::simRosAppendStringSignal > 
template<>
struct DataType< ::vrep_common::simRosAppendStringSignalRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosAppendStringSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosAppendStringSignalRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosAppendStringSignalResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosAppendStringSignal > 
template<>
struct MD5Sum< ::vrep_common::simRosAppendStringSignalResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosAppendStringSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosAppendStringSignalResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosAppendStringSignalResponse> should match 
// service_traits::DataType< ::vrep_common::simRosAppendStringSignal > 
template<>
struct DataType< ::vrep_common::simRosAppendStringSignalResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosAppendStringSignal >::value();
  }
  static const char* value(const ::vrep_common::simRosAppendStringSignalResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSAPPENDSTRINGSIGNAL_H
