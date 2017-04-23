/* Auto-generated by genmsg_cpp for file /home/wangkuan/workspace/ORB_SLAM2/ORB_SLAM2/Examples/ROS/ORB_SLAM2/msg/intVector.msg */
#ifndef ORB_SLAM2_MESSAGE_INTVECTOR_H
#define ORB_SLAM2_MESSAGE_INTVECTOR_H
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
struct intVector_ {
  typedef intVector_<ContainerAllocator> Type;

  intVector_()
  : intVector()
  {
  }

  intVector_(const ContainerAllocator& _alloc)
  : intVector(_alloc)
  {
  }

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _intVector_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  intVector;


  typedef boost::shared_ptr< ::ORB_SLAM2::intVector_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ORB_SLAM2::intVector_<ContainerAllocator>  const> ConstPtr;
}; // struct intVector
typedef  ::ORB_SLAM2::intVector_<std::allocator<void> > intVector;

typedef boost::shared_ptr< ::ORB_SLAM2::intVector> intVectorPtr;
typedef boost::shared_ptr< ::ORB_SLAM2::intVector const> intVectorConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ORB_SLAM2::intVector_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ORB_SLAM2::intVector_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ORB_SLAM2

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ORB_SLAM2::intVector_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ORB_SLAM2::intVector_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ORB_SLAM2::intVector_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b01982f302add077f2625511409ba292";
  }

  static const char* value(const  ::ORB_SLAM2::intVector_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb01982f302add077ULL;
  static const uint64_t static_value2 = 0xf2625511409ba292ULL;
};

template<class ContainerAllocator>
struct DataType< ::ORB_SLAM2::intVector_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ORB_SLAM2/intVector";
  }

  static const char* value(const  ::ORB_SLAM2::intVector_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ORB_SLAM2::intVector_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32[] intVector\n\
\n\
";
  }

  static const char* value(const  ::ORB_SLAM2::intVector_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ORB_SLAM2::intVector_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.intVector);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct intVector_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ORB_SLAM2::intVector_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ORB_SLAM2::intVector_<ContainerAllocator> & v) 
  {
    s << indent << "intVector[]" << std::endl;
    for (size_t i = 0; i < v.intVector.size(); ++i)
    {
      s << indent << "  intVector[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.intVector[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ORB_SLAM2_MESSAGE_INTVECTOR_H
