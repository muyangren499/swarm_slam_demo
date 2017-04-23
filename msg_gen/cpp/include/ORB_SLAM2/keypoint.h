/* Auto-generated by genmsg_cpp for file /home/wangkuan/workspace/ORB_SLAM2/ORB_SLAM2/Examples/ROS/ORB_SLAM2/msg/keypoint.msg */
#ifndef ORB_SLAM2_MESSAGE_KEYPOINT_H
#define ORB_SLAM2_MESSAGE_KEYPOINT_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace ORB_SLAM2
{
template <class ContainerAllocator>
struct keypoint_ {
  typedef keypoint_<ContainerAllocator> Type;

  keypoint_()
  : x(0)
  , y(0)
  , angle(0.0)
  , class_id(0)
  , octave(0)
  , response(0.0)
  , size(0.0)
  {
  }

  keypoint_(const ContainerAllocator& _alloc)
  : x(0)
  , y(0)
  , angle(0.0)
  , class_id(0)
  , octave(0)
  , response(0.0)
  , size(0.0)
  {
  }

  typedef int32_t _x_type;
  int32_t x;

  typedef int32_t _y_type;
  int32_t y;

  typedef float _angle_type;
  float angle;

  typedef int32_t _class_id_type;
  int32_t class_id;

  typedef int32_t _octave_type;
  int32_t octave;

  typedef float _response_type;
  float response;

  typedef float _size_type;
  float size;


  typedef boost::shared_ptr< ::ORB_SLAM2::keypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ORB_SLAM2::keypoint_<ContainerAllocator>  const> ConstPtr;
}; // struct keypoint
typedef  ::ORB_SLAM2::keypoint_<std::allocator<void> > keypoint;

typedef boost::shared_ptr< ::ORB_SLAM2::keypoint> keypointPtr;
typedef boost::shared_ptr< ::ORB_SLAM2::keypoint const> keypointConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ORB_SLAM2::keypoint_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ORB_SLAM2::keypoint_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ORB_SLAM2

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ORB_SLAM2::keypoint_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ORB_SLAM2::keypoint_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ORB_SLAM2::keypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "41e5e28e60265f1705aaf1fd0e42dee5";
  }

  static const char* value(const  ::ORB_SLAM2::keypoint_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x41e5e28e60265f17ULL;
  static const uint64_t static_value2 = 0x05aaf1fd0e42dee5ULL;
};

template<class ContainerAllocator>
struct DataType< ::ORB_SLAM2::keypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ORB_SLAM2/keypoint";
  }

  static const char* value(const  ::ORB_SLAM2::keypoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ORB_SLAM2::keypoint_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 x\n\
int32 y\n\
float32 angle\n\
int32 class_id\n\
int32 octave\n\
float32 response\n\
float32 size\n\
\n\
";
  }

  static const char* value(const  ::ORB_SLAM2::keypoint_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::ORB_SLAM2::keypoint_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ORB_SLAM2::keypoint_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.angle);
    stream.next(m.class_id);
    stream.next(m.octave);
    stream.next(m.response);
    stream.next(m.size);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct keypoint_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ORB_SLAM2::keypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ORB_SLAM2::keypoint_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "class_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.class_id);
    s << indent << "octave: ";
    Printer<int32_t>::stream(s, indent + "  ", v.octave);
    s << indent << "response: ";
    Printer<float>::stream(s, indent + "  ", v.response);
    s << indent << "size: ";
    Printer<float>::stream(s, indent + "  ", v.size);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ORB_SLAM2_MESSAGE_KEYPOINT_H
