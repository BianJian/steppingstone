// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/msg_cache.proto

#ifndef PROTOBUF_protocol_2fmsg_5fcache_2eproto__INCLUDED
#define PROTOBUF_protocol_2fmsg_5fcache_2eproto__INCLUDED

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

namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protocol_2fmsg_5fcache_2eproto();
void protobuf_AssignDesc_protocol_2fmsg_5fcache_2eproto();
void protobuf_ShutdownFile_protocol_2fmsg_5fcache_2eproto();

class OpResult;
class db_data_request;

enum OpResult_status_t {
  OpResult_status_t_STATE_NORMAL = 0,
  OpResult_status_t_STATE_ENTITY_NOT_FOUND = 1,
  OpResult_status_t_STATE_ENTITY_EXISTS = 2,
  OpResult_status_t_STATE_ENTITY_LOCKED = 5,
  OpResult_status_t_STATE_PROTOCOL_ERROR = 104,
  OpResult_status_t_STATE_INTERNAL_ERROR = 105
};
bool OpResult_status_t_IsValid(int value);
const OpResult_status_t OpResult_status_t_status_t_MIN = OpResult_status_t_STATE_NORMAL;
const OpResult_status_t OpResult_status_t_status_t_MAX = OpResult_status_t_STATE_INTERNAL_ERROR;
const int OpResult_status_t_status_t_ARRAYSIZE = OpResult_status_t_status_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* OpResult_status_t_descriptor();
inline const ::std::string& OpResult_status_t_Name(OpResult_status_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    OpResult_status_t_descriptor(), value);
}
inline bool OpResult_status_t_Parse(
    const ::std::string& name, OpResult_status_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OpResult_status_t>(
    OpResult_status_t_descriptor(), name, value);
}
// ===================================================================

class OpResult : public ::google::protobuf::Message {
 public:
  OpResult();
  virtual ~OpResult();

  OpResult(const OpResult& from);

  inline OpResult& operator=(const OpResult& from) {
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
  static const OpResult& default_instance();

  void Swap(OpResult* other);

  // implements Message ----------------------------------------------

  OpResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OpResult& from);
  void MergeFrom(const OpResult& from);
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

  typedef OpResult_status_t status_t;
  static const status_t STATE_NORMAL = OpResult_status_t_STATE_NORMAL;
  static const status_t STATE_ENTITY_NOT_FOUND = OpResult_status_t_STATE_ENTITY_NOT_FOUND;
  static const status_t STATE_ENTITY_EXISTS = OpResult_status_t_STATE_ENTITY_EXISTS;
  static const status_t STATE_ENTITY_LOCKED = OpResult_status_t_STATE_ENTITY_LOCKED;
  static const status_t STATE_PROTOCOL_ERROR = OpResult_status_t_STATE_PROTOCOL_ERROR;
  static const status_t STATE_INTERNAL_ERROR = OpResult_status_t_STATE_INTERNAL_ERROR;
  static inline bool status_t_IsValid(int value) {
    return OpResult_status_t_IsValid(value);
  }
  static const status_t status_t_MIN =
    OpResult_status_t_status_t_MIN;
  static const status_t status_t_MAX =
    OpResult_status_t_status_t_MAX;
  static const int status_t_ARRAYSIZE =
    OpResult_status_t_status_t_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  status_t_descriptor() {
    return OpResult_status_t_descriptor();
  }
  static inline const ::std::string& status_t_Name(status_t value) {
    return OpResult_status_t_Name(value);
  }
  static inline bool status_t_Parse(const ::std::string& name,
      status_t* value) {
    return OpResult_status_t_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .protocol.OpResult.status_t status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::protocol::OpResult_status_t status() const;
  inline void set_status(::protocol::OpResult_status_t value);

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

  // @@protoc_insertion_point(class_scope:protocol.OpResult)
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
  friend void  protobuf_AddDesc_protocol_2fmsg_5fcache_2eproto();
  friend void protobuf_AssignDesc_protocol_2fmsg_5fcache_2eproto();
  friend void protobuf_ShutdownFile_protocol_2fmsg_5fcache_2eproto();

  void InitAsDefaultInstance();
  static OpResult* default_instance_;
};
// -------------------------------------------------------------------

class db_data_request : public ::google::protobuf::Message {
 public:
  db_data_request();
  virtual ~db_data_request();

  db_data_request(const db_data_request& from);

  inline db_data_request& operator=(const db_data_request& from) {
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
  static const db_data_request& default_instance();

  void Swap(db_data_request* other);

  // implements Message ----------------------------------------------

  db_data_request* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const db_data_request& from);
  void MergeFrom(const db_data_request& from);
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

  // accessors -------------------------------------------------------

  // required uint32 transaction_index = 1;
  inline bool has_transaction_index() const;
  inline void clear_transaction_index();
  static const int kTransactionIndexFieldNumber = 1;
  inline ::google::protobuf::uint32 transaction_index() const;
  inline void set_transaction_index(::google::protobuf::uint32 value);

  // required uint32 transaction_num = 2;
  inline bool has_transaction_num() const;
  inline void clear_transaction_num();
  static const int kTransactionNumFieldNumber = 2;
  inline ::google::protobuf::uint32 transaction_num() const;
  inline void set_transaction_num(::google::protobuf::uint32 value);

  // required uint32 transaction_id = 3;
  inline bool has_transaction_id() const;
  inline void clear_transaction_id();
  static const int kTransactionIdFieldNumber = 3;
  inline ::google::protobuf::uint32 transaction_id() const;
  inline void set_transaction_id(::google::protobuf::uint32 value);

  // optional uint32 line_id = 4;
  inline bool has_line_id() const;
  inline void clear_line_id();
  static const int kLineIdFieldNumber = 4;
  inline ::google::protobuf::uint32 line_id() const;
  inline void set_line_id(::google::protobuf::uint32 value);

  // optional bytes data_stream = 5;
  inline bool has_data_stream() const;
  inline void clear_data_stream();
  static const int kDataStreamFieldNumber = 5;
  inline const ::std::string& data_stream() const;
  inline void set_data_stream(const ::std::string& value);
  inline void set_data_stream(const char* value);
  inline void set_data_stream(const void* value, size_t size);
  inline ::std::string* mutable_data_stream();
  inline ::std::string* release_data_stream();
  inline void set_allocated_data_stream(::std::string* data_stream);

  // optional uint64 owner_guid = 6;
  inline bool has_owner_guid() const;
  inline void clear_owner_guid();
  static const int kOwnerGuidFieldNumber = 6;
  inline ::google::protobuf::uint64 owner_guid() const;
  inline void set_owner_guid(::google::protobuf::uint64 value);

  // optional string entity_name = 7;
  inline bool has_entity_name() const;
  inline void clear_entity_name();
  static const int kEntityNameFieldNumber = 7;
  inline const ::std::string& entity_name() const;
  inline void set_entity_name(const ::std::string& value);
  inline void set_entity_name(const char* value);
  inline void set_entity_name(const char* value, size_t size);
  inline ::std::string* mutable_entity_name();
  inline ::std::string* release_entity_name();
  inline void set_allocated_entity_name(::std::string* entity_name);

  // @@protoc_insertion_point(class_scope:protocol.db_data_request)
 private:
  inline void set_has_transaction_index();
  inline void clear_has_transaction_index();
  inline void set_has_transaction_num();
  inline void clear_has_transaction_num();
  inline void set_has_transaction_id();
  inline void clear_has_transaction_id();
  inline void set_has_line_id();
  inline void clear_has_line_id();
  inline void set_has_data_stream();
  inline void clear_has_data_stream();
  inline void set_has_owner_guid();
  inline void clear_has_owner_guid();
  inline void set_has_entity_name();
  inline void clear_has_entity_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 transaction_index_;
  ::google::protobuf::uint32 transaction_num_;
  ::google::protobuf::uint32 transaction_id_;
  ::google::protobuf::uint32 line_id_;
  ::std::string* data_stream_;
  ::google::protobuf::uint64 owner_guid_;
  ::std::string* entity_name_;
  friend void  protobuf_AddDesc_protocol_2fmsg_5fcache_2eproto();
  friend void protobuf_AssignDesc_protocol_2fmsg_5fcache_2eproto();
  friend void protobuf_ShutdownFile_protocol_2fmsg_5fcache_2eproto();

  void InitAsDefaultInstance();
  static db_data_request* default_instance_;
};
// ===================================================================


// ===================================================================

// OpResult

// required .protocol.OpResult.status_t status = 1;
inline bool OpResult::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OpResult::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OpResult::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OpResult::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::protocol::OpResult_status_t OpResult::status() const {
  // @@protoc_insertion_point(field_get:protocol.OpResult.status)
  return static_cast< ::protocol::OpResult_status_t >(status_);
}
inline void OpResult::set_status(::protocol::OpResult_status_t value) {
  assert(::protocol::OpResult_status_t_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:protocol.OpResult.status)
}

// optional bytes message = 2;
inline bool OpResult::has_message() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OpResult::set_has_message() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OpResult::clear_has_message() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OpResult::clear_message() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& OpResult::message() const {
  // @@protoc_insertion_point(field_get:protocol.OpResult.message)
  return *message_;
}
inline void OpResult::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.OpResult.message)
}
inline void OpResult::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.OpResult.message)
}
inline void OpResult::set_message(const void* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.OpResult.message)
}
inline ::std::string* OpResult::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.OpResult.message)
  return message_;
}
inline ::std::string* OpResult::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void OpResult::set_allocated_message(::std::string* message) {
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
  // @@protoc_insertion_point(field_set_allocated:protocol.OpResult.message)
}

// -------------------------------------------------------------------

// db_data_request

// required uint32 transaction_index = 1;
inline bool db_data_request::has_transaction_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void db_data_request::set_has_transaction_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void db_data_request::clear_has_transaction_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void db_data_request::clear_transaction_index() {
  transaction_index_ = 0u;
  clear_has_transaction_index();
}
inline ::google::protobuf::uint32 db_data_request::transaction_index() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.transaction_index)
  return transaction_index_;
}
inline void db_data_request::set_transaction_index(::google::protobuf::uint32 value) {
  set_has_transaction_index();
  transaction_index_ = value;
  // @@protoc_insertion_point(field_set:protocol.db_data_request.transaction_index)
}

// required uint32 transaction_num = 2;
inline bool db_data_request::has_transaction_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void db_data_request::set_has_transaction_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void db_data_request::clear_has_transaction_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void db_data_request::clear_transaction_num() {
  transaction_num_ = 0u;
  clear_has_transaction_num();
}
inline ::google::protobuf::uint32 db_data_request::transaction_num() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.transaction_num)
  return transaction_num_;
}
inline void db_data_request::set_transaction_num(::google::protobuf::uint32 value) {
  set_has_transaction_num();
  transaction_num_ = value;
  // @@protoc_insertion_point(field_set:protocol.db_data_request.transaction_num)
}

// required uint32 transaction_id = 3;
inline bool db_data_request::has_transaction_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void db_data_request::set_has_transaction_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void db_data_request::clear_has_transaction_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void db_data_request::clear_transaction_id() {
  transaction_id_ = 0u;
  clear_has_transaction_id();
}
inline ::google::protobuf::uint32 db_data_request::transaction_id() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.transaction_id)
  return transaction_id_;
}
inline void db_data_request::set_transaction_id(::google::protobuf::uint32 value) {
  set_has_transaction_id();
  transaction_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.db_data_request.transaction_id)
}

// optional uint32 line_id = 4;
inline bool db_data_request::has_line_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void db_data_request::set_has_line_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void db_data_request::clear_has_line_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void db_data_request::clear_line_id() {
  line_id_ = 0u;
  clear_has_line_id();
}
inline ::google::protobuf::uint32 db_data_request::line_id() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.line_id)
  return line_id_;
}
inline void db_data_request::set_line_id(::google::protobuf::uint32 value) {
  set_has_line_id();
  line_id_ = value;
  // @@protoc_insertion_point(field_set:protocol.db_data_request.line_id)
}

// optional bytes data_stream = 5;
inline bool db_data_request::has_data_stream() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void db_data_request::set_has_data_stream() {
  _has_bits_[0] |= 0x00000010u;
}
inline void db_data_request::clear_has_data_stream() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void db_data_request::clear_data_stream() {
  if (data_stream_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_stream_->clear();
  }
  clear_has_data_stream();
}
inline const ::std::string& db_data_request::data_stream() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.data_stream)
  return *data_stream_;
}
inline void db_data_request::set_data_stream(const ::std::string& value) {
  set_has_data_stream();
  if (data_stream_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_stream_ = new ::std::string;
  }
  data_stream_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.db_data_request.data_stream)
}
inline void db_data_request::set_data_stream(const char* value) {
  set_has_data_stream();
  if (data_stream_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_stream_ = new ::std::string;
  }
  data_stream_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.db_data_request.data_stream)
}
inline void db_data_request::set_data_stream(const void* value, size_t size) {
  set_has_data_stream();
  if (data_stream_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_stream_ = new ::std::string;
  }
  data_stream_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.db_data_request.data_stream)
}
inline ::std::string* db_data_request::mutable_data_stream() {
  set_has_data_stream();
  if (data_stream_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_stream_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.db_data_request.data_stream)
  return data_stream_;
}
inline ::std::string* db_data_request::release_data_stream() {
  clear_has_data_stream();
  if (data_stream_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_stream_;
    data_stream_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void db_data_request::set_allocated_data_stream(::std::string* data_stream) {
  if (data_stream_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_stream_;
  }
  if (data_stream) {
    set_has_data_stream();
    data_stream_ = data_stream;
  } else {
    clear_has_data_stream();
    data_stream_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.db_data_request.data_stream)
}

// optional uint64 owner_guid = 6;
inline bool db_data_request::has_owner_guid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void db_data_request::set_has_owner_guid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void db_data_request::clear_has_owner_guid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void db_data_request::clear_owner_guid() {
  owner_guid_ = GOOGLE_ULONGLONG(0);
  clear_has_owner_guid();
}
inline ::google::protobuf::uint64 db_data_request::owner_guid() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.owner_guid)
  return owner_guid_;
}
inline void db_data_request::set_owner_guid(::google::protobuf::uint64 value) {
  set_has_owner_guid();
  owner_guid_ = value;
  // @@protoc_insertion_point(field_set:protocol.db_data_request.owner_guid)
}

// optional string entity_name = 7;
inline bool db_data_request::has_entity_name() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void db_data_request::set_has_entity_name() {
  _has_bits_[0] |= 0x00000040u;
}
inline void db_data_request::clear_has_entity_name() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void db_data_request::clear_entity_name() {
  if (entity_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_->clear();
  }
  clear_has_entity_name();
}
inline const ::std::string& db_data_request::entity_name() const {
  // @@protoc_insertion_point(field_get:protocol.db_data_request.entity_name)
  return *entity_name_;
}
inline void db_data_request::set_entity_name(const ::std::string& value) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.db_data_request.entity_name)
}
inline void db_data_request::set_entity_name(const char* value) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.db_data_request.entity_name)
}
inline void db_data_request::set_entity_name(const char* value, size_t size) {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  entity_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.db_data_request.entity_name)
}
inline ::std::string* db_data_request::mutable_entity_name() {
  set_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    entity_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.db_data_request.entity_name)
  return entity_name_;
}
inline ::std::string* db_data_request::release_entity_name() {
  clear_has_entity_name();
  if (entity_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = entity_name_;
    entity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void db_data_request::set_allocated_entity_name(::std::string* entity_name) {
  if (entity_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete entity_name_;
  }
  if (entity_name) {
    set_has_entity_name();
    entity_name_ = entity_name;
  } else {
    clear_has_entity_name();
    entity_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.db_data_request.entity_name)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protocol::OpResult_status_t> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::OpResult_status_t>() {
  return ::protocol::OpResult_status_t_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protocol_2fmsg_5fcache_2eproto__INCLUDED
