// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/msg_pool.proto

#ifndef PROTOBUF_protocol_2fmsg_5fpool_2eproto__INCLUDED
#define PROTOBUF_protocol_2fmsg_5fpool_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace typed {
namespace cached {
namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocol_2fmsg_5fpool_2eproto();
void protobuf_AssignDesc_protocol_2fmsg_5fpool_2eproto();
void protobuf_ShutdownFile_protocol_2fmsg_5fpool_2eproto();

class Result;

enum Result_status_t {
  Result_status_t_STATE_NORMAL = 0,
  Result_status_t_STATE_ENTITY_NOT_FOUND = 1,
  Result_status_t_STATE_ENTITY_EXISTS = 2,
  Result_status_t_STATE_ENTITY_LOCKED = 5,
  Result_status_t_STATE_PROTOCOL_ERROR = 104,
  Result_status_t_STATE_INTERNAL_ERROR = 105
};
bool Result_status_t_IsValid(int value);
const Result_status_t Result_status_t_status_t_MIN = Result_status_t_STATE_NORMAL;
const Result_status_t Result_status_t_status_t_MAX = Result_status_t_STATE_INTERNAL_ERROR;
const int Result_status_t_status_t_ARRAYSIZE = Result_status_t_status_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* Result_status_t_descriptor();
inline const ::std::string& Result_status_t_Name(Result_status_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    Result_status_t_descriptor(), value);
}
inline bool Result_status_t_Parse(
    const ::std::string& name, Result_status_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Result_status_t>(
    Result_status_t_descriptor(), name, value);
}
// ===================================================================

class Result : public ::google::protobuf::Message {
 public:
  Result();
  virtual ~Result();

  Result(const Result& from);

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Result& default_instance();

  void Swap(Result* other);

  // implements Message ----------------------------------------------

  Result* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Result& from);
  void MergeFrom(const Result& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Result_status_t status_t;
  static const status_t STATE_NORMAL = Result_status_t_STATE_NORMAL;
  static const status_t STATE_ENTITY_NOT_FOUND = Result_status_t_STATE_ENTITY_NOT_FOUND;
  static const status_t STATE_ENTITY_EXISTS = Result_status_t_STATE_ENTITY_EXISTS;
  static const status_t STATE_ENTITY_LOCKED = Result_status_t_STATE_ENTITY_LOCKED;
  static const status_t STATE_PROTOCOL_ERROR = Result_status_t_STATE_PROTOCOL_ERROR;
  static const status_t STATE_INTERNAL_ERROR = Result_status_t_STATE_INTERNAL_ERROR;
  static inline bool status_t_IsValid(int value) {
    return Result_status_t_IsValid(value);
  }
  static const status_t status_t_MIN =
    Result_status_t_status_t_MIN;
  static const status_t status_t_MAX =
    Result_status_t_status_t_MAX;
  static const int status_t_ARRAYSIZE =
    Result_status_t_status_t_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  status_t_descriptor() {
    return Result_status_t_descriptor();
  }
  static inline const ::std::string& status_t_Name(status_t value) {
    return Result_status_t_Name(value);
  }
  static inline bool status_t_Parse(const ::std::string& name,
      status_t* value) {
    return Result_status_t_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .typed.cached.protocol.Result.status_t status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::typed::cached::protocol::Result_status_t status() const;
  inline void set_status(::typed::cached::protocol::Result_status_t value);

  // optional bytes message = 2;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 2;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const void* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:typed.cached.protocol.Result)
 private:
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* message_;
  int status_;
  friend void  protobuf_AddDesc_protocol_2fmsg_5fpool_2eproto();
  friend void protobuf_AssignDesc_protocol_2fmsg_5fpool_2eproto();
  friend void protobuf_ShutdownFile_protocol_2fmsg_5fpool_2eproto();

  void InitAsDefaultInstance();
  static Result* default_instance_;
};
// ===================================================================


// ===================================================================

// Result

// required .typed.cached.protocol.Result.status_t status = 1;
inline bool Result::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Result::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Result::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Result::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::typed::cached::protocol::Result_status_t Result::status() const {
  // @@protoc_insertion_point(field_get:typed.cached.protocol.Result.status)
  return static_cast< ::typed::cached::protocol::Result_status_t >(status_);
}
inline void Result::set_status(::typed::cached::protocol::Result_status_t value) {
  assert(::typed::cached::protocol::Result_status_t_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:typed.cached.protocol.Result.status)
}

// optional bytes message = 2;
inline bool Result::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Result::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Result::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Result::clear_message() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& Result::message() const {
  // @@protoc_insertion_point(field_get:typed.cached.protocol.Result.message)
  return *message_;
}
inline void Result::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set:typed.cached.protocol.Result.message)
}
inline void Result::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set_char:typed.cached.protocol.Result.message)
}
inline void Result::set_message(const void* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:typed.cached.protocol.Result.message)
}
inline ::std::string* Result::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:typed.cached.protocol.Result.message)
  return message_;
}
inline ::std::string* Result::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Result::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:typed.cached.protocol.Result.message)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace cached
}  // namespace typed

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::typed::cached::protocol::Result_status_t> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::typed::cached::protocol::Result_status_t>() {
  return ::typed::cached::protocol::Result_status_t_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2fmsg_5fpool_2eproto__INCLUDED
