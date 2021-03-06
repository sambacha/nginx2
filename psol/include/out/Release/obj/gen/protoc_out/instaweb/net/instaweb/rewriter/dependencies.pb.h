// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net/instaweb/rewriter/dependencies.proto

#ifndef PROTOBUF_net_2finstaweb_2frewriter_2fdependencies_2eproto__INCLUDED
#define PROTOBUF_net_2finstaweb_2frewriter_2fdependencies_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "net/instaweb/rewriter/input_info.pb.h"
// @@protoc_insertion_point(includes)

namespace net_instaweb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fdependencies_2eproto();

class Dependencies;
class Dependency;

enum DependencyType {
  DEP_JAVASCRIPT = 1,
  DEP_CSS = 2
};
bool DependencyType_IsValid(int value);
const DependencyType DependencyType_MIN = DEP_JAVASCRIPT;
const DependencyType DependencyType_MAX = DEP_CSS;
const int DependencyType_ARRAYSIZE = DependencyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DependencyType_descriptor();
inline const ::std::string& DependencyType_Name(DependencyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DependencyType_descriptor(), value);
}
inline bool DependencyType_Parse(
    const ::std::string& name, DependencyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DependencyType>(
    DependencyType_descriptor(), name, value);
}
// ===================================================================

class Dependency : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:net_instaweb.Dependency) */ {
 public:
  Dependency();
  virtual ~Dependency();

  Dependency(const Dependency& from);

  inline Dependency& operator=(const Dependency& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Dependency& default_instance();

  void Swap(Dependency* other);

  // implements Message ----------------------------------------------

  inline Dependency* New() const { return New(NULL); }

  Dependency* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Dependency& from);
  void MergeFrom(const Dependency& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Dependency* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string url = 1;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // optional .net_instaweb.DependencyType content_type = 2;
  bool has_content_type() const;
  void clear_content_type();
  static const int kContentTypeFieldNumber = 2;
  ::net_instaweb::DependencyType content_type() const;
  void set_content_type(::net_instaweb::DependencyType value);

  // optional bool is_pagespeed_resource = 3;
  bool has_is_pagespeed_resource() const;
  void clear_is_pagespeed_resource();
  static const int kIsPagespeedResourceFieldNumber = 3;
  bool is_pagespeed_resource() const;
  void set_is_pagespeed_resource(bool value);

  // optional bool can_inline = 4;
  bool has_can_inline() const;
  void clear_can_inline();
  static const int kCanInlineFieldNumber = 4;
  bool can_inline() const;
  void set_can_inline(bool value);

  // repeated .net_instaweb.InputInfo validity_info = 5;
  int validity_info_size() const;
  void clear_validity_info();
  static const int kValidityInfoFieldNumber = 5;
  const ::net_instaweb::InputInfo& validity_info(int index) const;
  ::net_instaweb::InputInfo* mutable_validity_info(int index);
  ::net_instaweb::InputInfo* add_validity_info();
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::InputInfo >*
      mutable_validity_info();
  const ::google::protobuf::RepeatedPtrField< ::net_instaweb::InputInfo >&
      validity_info() const;

  // repeated int32 order_key = 6;
  int order_key_size() const;
  void clear_order_key();
  static const int kOrderKeyFieldNumber = 6;
  ::google::protobuf::int32 order_key(int index) const;
  void set_order_key(int index, ::google::protobuf::int32 value);
  void add_order_key(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      order_key() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_order_key();

  // @@protoc_insertion_point(class_scope:net_instaweb.Dependency)
 private:
  inline void set_has_url();
  inline void clear_has_url();
  inline void set_has_content_type();
  inline void clear_has_content_type();
  inline void set_has_is_pagespeed_resource();
  inline void clear_has_is_pagespeed_resource();
  inline void set_has_can_inline();
  inline void clear_has_can_inline();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  int content_type_;
  bool is_pagespeed_resource_;
  bool can_inline_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::InputInfo > validity_info_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > order_key_;
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fdependencies_2eproto();

  void InitAsDefaultInstance();
  static Dependency* default_instance_;
};
// -------------------------------------------------------------------

class Dependencies : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:net_instaweb.Dependencies) */ {
 public:
  Dependencies();
  virtual ~Dependencies();

  Dependencies(const Dependencies& from);

  inline Dependencies& operator=(const Dependencies& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Dependencies& default_instance();

  void Swap(Dependencies* other);

  // implements Message ----------------------------------------------

  inline Dependencies* New() const { return New(NULL); }

  Dependencies* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Dependencies& from);
  void MergeFrom(const Dependencies& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Dependencies* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .net_instaweb.Dependency dependency = 1;
  int dependency_size() const;
  void clear_dependency();
  static const int kDependencyFieldNumber = 1;
  const ::net_instaweb::Dependency& dependency(int index) const;
  ::net_instaweb::Dependency* mutable_dependency(int index);
  ::net_instaweb::Dependency* add_dependency();
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::Dependency >*
      mutable_dependency();
  const ::google::protobuf::RepeatedPtrField< ::net_instaweb::Dependency >&
      dependency() const;

  // @@protoc_insertion_point(class_scope:net_instaweb.Dependencies)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::Dependency > dependency_;
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fdependencies_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fdependencies_2eproto();

  void InitAsDefaultInstance();
  static Dependencies* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Dependency

// optional string url = 1;
inline bool Dependency::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Dependency::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Dependency::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Dependency::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& Dependency::url() const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.url)
  return url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dependency::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.Dependency.url)
}
inline void Dependency::set_url(const char* value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.Dependency.url)
}
inline void Dependency::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.Dependency.url)
}
inline ::std::string* Dependency::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:net_instaweb.Dependency.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Dependency::release_url() {
  // @@protoc_insertion_point(field_release:net_instaweb.Dependency.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Dependency::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.Dependency.url)
}

// optional .net_instaweb.DependencyType content_type = 2;
inline bool Dependency::has_content_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Dependency::set_has_content_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Dependency::clear_has_content_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Dependency::clear_content_type() {
  content_type_ = 1;
  clear_has_content_type();
}
inline ::net_instaweb::DependencyType Dependency::content_type() const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.content_type)
  return static_cast< ::net_instaweb::DependencyType >(content_type_);
}
inline void Dependency::set_content_type(::net_instaweb::DependencyType value) {
  assert(::net_instaweb::DependencyType_IsValid(value));
  set_has_content_type();
  content_type_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.Dependency.content_type)
}

// optional bool is_pagespeed_resource = 3;
inline bool Dependency::has_is_pagespeed_resource() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Dependency::set_has_is_pagespeed_resource() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Dependency::clear_has_is_pagespeed_resource() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Dependency::clear_is_pagespeed_resource() {
  is_pagespeed_resource_ = false;
  clear_has_is_pagespeed_resource();
}
inline bool Dependency::is_pagespeed_resource() const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.is_pagespeed_resource)
  return is_pagespeed_resource_;
}
inline void Dependency::set_is_pagespeed_resource(bool value) {
  set_has_is_pagespeed_resource();
  is_pagespeed_resource_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.Dependency.is_pagespeed_resource)
}

// optional bool can_inline = 4;
inline bool Dependency::has_can_inline() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Dependency::set_has_can_inline() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Dependency::clear_has_can_inline() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Dependency::clear_can_inline() {
  can_inline_ = false;
  clear_has_can_inline();
}
inline bool Dependency::can_inline() const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.can_inline)
  return can_inline_;
}
inline void Dependency::set_can_inline(bool value) {
  set_has_can_inline();
  can_inline_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.Dependency.can_inline)
}

// repeated .net_instaweb.InputInfo validity_info = 5;
inline int Dependency::validity_info_size() const {
  return validity_info_.size();
}
inline void Dependency::clear_validity_info() {
  validity_info_.Clear();
}
inline const ::net_instaweb::InputInfo& Dependency::validity_info(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.validity_info)
  return validity_info_.Get(index);
}
inline ::net_instaweb::InputInfo* Dependency::mutable_validity_info(int index) {
  // @@protoc_insertion_point(field_mutable:net_instaweb.Dependency.validity_info)
  return validity_info_.Mutable(index);
}
inline ::net_instaweb::InputInfo* Dependency::add_validity_info() {
  // @@protoc_insertion_point(field_add:net_instaweb.Dependency.validity_info)
  return validity_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::InputInfo >*
Dependency::mutable_validity_info() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.Dependency.validity_info)
  return &validity_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::InputInfo >&
Dependency::validity_info() const {
  // @@protoc_insertion_point(field_list:net_instaweb.Dependency.validity_info)
  return validity_info_;
}

// repeated int32 order_key = 6;
inline int Dependency::order_key_size() const {
  return order_key_.size();
}
inline void Dependency::clear_order_key() {
  order_key_.Clear();
}
inline ::google::protobuf::int32 Dependency::order_key(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependency.order_key)
  return order_key_.Get(index);
}
inline void Dependency::set_order_key(int index, ::google::protobuf::int32 value) {
  order_key_.Set(index, value);
  // @@protoc_insertion_point(field_set:net_instaweb.Dependency.order_key)
}
inline void Dependency::add_order_key(::google::protobuf::int32 value) {
  order_key_.Add(value);
  // @@protoc_insertion_point(field_add:net_instaweb.Dependency.order_key)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Dependency::order_key() const {
  // @@protoc_insertion_point(field_list:net_instaweb.Dependency.order_key)
  return order_key_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Dependency::mutable_order_key() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.Dependency.order_key)
  return &order_key_;
}

// -------------------------------------------------------------------

// Dependencies

// repeated .net_instaweb.Dependency dependency = 1;
inline int Dependencies::dependency_size() const {
  return dependency_.size();
}
inline void Dependencies::clear_dependency() {
  dependency_.Clear();
}
inline const ::net_instaweb::Dependency& Dependencies::dependency(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.Dependencies.dependency)
  return dependency_.Get(index);
}
inline ::net_instaweb::Dependency* Dependencies::mutable_dependency(int index) {
  // @@protoc_insertion_point(field_mutable:net_instaweb.Dependencies.dependency)
  return dependency_.Mutable(index);
}
inline ::net_instaweb::Dependency* Dependencies::add_dependency() {
  // @@protoc_insertion_point(field_add:net_instaweb.Dependencies.dependency)
  return dependency_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::Dependency >*
Dependencies::mutable_dependency() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.Dependencies.dependency)
  return &dependency_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::Dependency >&
Dependencies::dependency() const {
  // @@protoc_insertion_point(field_list:net_instaweb.Dependencies.dependency)
  return dependency_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace net_instaweb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::net_instaweb::DependencyType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net_instaweb::DependencyType>() {
  return ::net_instaweb::DependencyType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2finstaweb_2frewriter_2fdependencies_2eproto__INCLUDED
