// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net/instaweb/rewriter/static_asset_config.proto

#ifndef PROTOBUF_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto__INCLUDED
#define PROTOBUF_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace net_instaweb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();

class StaticAssetConfig;
class StaticAssetConfig_Asset;
class StaticAssetEnum;

enum StaticAssetEnum_StaticAsset {
  StaticAssetEnum_StaticAsset_ADD_INSTRUMENTATION_JS = 0,
  StaticAssetEnum_StaticAsset_BLANK_GIF = 1,
  StaticAssetEnum_StaticAsset_BLINK_JS = 2,
  StaticAssetEnum_StaticAsset_CLIENT_DOMAIN_REWRITER = 3,
  StaticAssetEnum_StaticAsset_CRITICAL_CSS_BEACON_JS = 4,
  StaticAssetEnum_StaticAsset_CRITICAL_CSS_LOADER_JS = 5,
  StaticAssetEnum_StaticAsset_CRITICAL_IMAGES_BEACON_JS = 6,
  StaticAssetEnum_StaticAsset_DEDUP_INLINED_IMAGES_JS = 7,
  StaticAssetEnum_StaticAsset_DEFER_IFRAME = 8,
  StaticAssetEnum_StaticAsset_DEFER_JS = 9,
  StaticAssetEnum_StaticAsset_DELAY_IMAGES_INLINE_JS = 10,
  StaticAssetEnum_StaticAsset_DELAY_IMAGES_JS = 11,
  StaticAssetEnum_StaticAsset_DETERMINISTIC_JS = 12,
  StaticAssetEnum_StaticAsset_EXTENDED_INSTRUMENTATION_JS = 13,
  StaticAssetEnum_StaticAsset_DEPRECATED_GHOST_CLICK_BUSTER_JS = 14,
  StaticAssetEnum_StaticAsset_LAZYLOAD_IMAGES_JS = 15,
  StaticAssetEnum_StaticAsset_LOCAL_STORAGE_CACHE_JS = 16,
  StaticAssetEnum_StaticAsset_DEPRECATED_SPLIT_HTML_BEACON_JS = 17,
  StaticAssetEnum_StaticAsset_MOBILIZE_JS = 18,
  StaticAssetEnum_StaticAsset_DEPRECATED_MOBILIZE_XHR_JS = 19,
  StaticAssetEnum_StaticAsset_MOBILIZE_CSS = 20,
  StaticAssetEnum_StaticAsset_DEPRECATED_MOBILIZE_LAYOUT_CSS = 21,
  StaticAssetEnum_StaticAsset_RESPONSIVE_JS = 22
};
bool StaticAssetEnum_StaticAsset_IsValid(int value);
const StaticAssetEnum_StaticAsset StaticAssetEnum_StaticAsset_StaticAsset_MIN = StaticAssetEnum_StaticAsset_ADD_INSTRUMENTATION_JS;
const StaticAssetEnum_StaticAsset StaticAssetEnum_StaticAsset_StaticAsset_MAX = StaticAssetEnum_StaticAsset_RESPONSIVE_JS;
const int StaticAssetEnum_StaticAsset_StaticAsset_ARRAYSIZE = StaticAssetEnum_StaticAsset_StaticAsset_MAX + 1;

const ::google::protobuf::EnumDescriptor* StaticAssetEnum_StaticAsset_descriptor();
inline const ::std::string& StaticAssetEnum_StaticAsset_Name(StaticAssetEnum_StaticAsset value) {
  return ::google::protobuf::internal::NameOfEnum(
    StaticAssetEnum_StaticAsset_descriptor(), value);
}
inline bool StaticAssetEnum_StaticAsset_Parse(
    const ::std::string& name, StaticAssetEnum_StaticAsset* value) {
  return ::google::protobuf::internal::ParseNamedEnum<StaticAssetEnum_StaticAsset>(
    StaticAssetEnum_StaticAsset_descriptor(), name, value);
}
// ===================================================================

class StaticAssetEnum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:net_instaweb.StaticAssetEnum) */ {
 public:
  StaticAssetEnum();
  virtual ~StaticAssetEnum();

  StaticAssetEnum(const StaticAssetEnum& from);

  inline StaticAssetEnum& operator=(const StaticAssetEnum& from) {
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
  static const StaticAssetEnum& default_instance();

  void Swap(StaticAssetEnum* other);

  // implements Message ----------------------------------------------

  inline StaticAssetEnum* New() const { return New(NULL); }

  StaticAssetEnum* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StaticAssetEnum& from);
  void MergeFrom(const StaticAssetEnum& from);
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
  void InternalSwap(StaticAssetEnum* other);
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

  typedef StaticAssetEnum_StaticAsset StaticAsset;
  static const StaticAsset ADD_INSTRUMENTATION_JS =
    StaticAssetEnum_StaticAsset_ADD_INSTRUMENTATION_JS;
  static const StaticAsset BLANK_GIF =
    StaticAssetEnum_StaticAsset_BLANK_GIF;
  static const StaticAsset BLINK_JS =
    StaticAssetEnum_StaticAsset_BLINK_JS;
  static const StaticAsset CLIENT_DOMAIN_REWRITER =
    StaticAssetEnum_StaticAsset_CLIENT_DOMAIN_REWRITER;
  static const StaticAsset CRITICAL_CSS_BEACON_JS =
    StaticAssetEnum_StaticAsset_CRITICAL_CSS_BEACON_JS;
  static const StaticAsset CRITICAL_CSS_LOADER_JS =
    StaticAssetEnum_StaticAsset_CRITICAL_CSS_LOADER_JS;
  static const StaticAsset CRITICAL_IMAGES_BEACON_JS =
    StaticAssetEnum_StaticAsset_CRITICAL_IMAGES_BEACON_JS;
  static const StaticAsset DEDUP_INLINED_IMAGES_JS =
    StaticAssetEnum_StaticAsset_DEDUP_INLINED_IMAGES_JS;
  static const StaticAsset DEFER_IFRAME =
    StaticAssetEnum_StaticAsset_DEFER_IFRAME;
  static const StaticAsset DEFER_JS =
    StaticAssetEnum_StaticAsset_DEFER_JS;
  static const StaticAsset DELAY_IMAGES_INLINE_JS =
    StaticAssetEnum_StaticAsset_DELAY_IMAGES_INLINE_JS;
  static const StaticAsset DELAY_IMAGES_JS =
    StaticAssetEnum_StaticAsset_DELAY_IMAGES_JS;
  static const StaticAsset DETERMINISTIC_JS =
    StaticAssetEnum_StaticAsset_DETERMINISTIC_JS;
  static const StaticAsset EXTENDED_INSTRUMENTATION_JS =
    StaticAssetEnum_StaticAsset_EXTENDED_INSTRUMENTATION_JS;
  static const StaticAsset DEPRECATED_GHOST_CLICK_BUSTER_JS =
    StaticAssetEnum_StaticAsset_DEPRECATED_GHOST_CLICK_BUSTER_JS;
  static const StaticAsset LAZYLOAD_IMAGES_JS =
    StaticAssetEnum_StaticAsset_LAZYLOAD_IMAGES_JS;
  static const StaticAsset LOCAL_STORAGE_CACHE_JS =
    StaticAssetEnum_StaticAsset_LOCAL_STORAGE_CACHE_JS;
  static const StaticAsset DEPRECATED_SPLIT_HTML_BEACON_JS =
    StaticAssetEnum_StaticAsset_DEPRECATED_SPLIT_HTML_BEACON_JS;
  static const StaticAsset MOBILIZE_JS =
    StaticAssetEnum_StaticAsset_MOBILIZE_JS;
  static const StaticAsset DEPRECATED_MOBILIZE_XHR_JS =
    StaticAssetEnum_StaticAsset_DEPRECATED_MOBILIZE_XHR_JS;
  static const StaticAsset MOBILIZE_CSS =
    StaticAssetEnum_StaticAsset_MOBILIZE_CSS;
  static const StaticAsset DEPRECATED_MOBILIZE_LAYOUT_CSS =
    StaticAssetEnum_StaticAsset_DEPRECATED_MOBILIZE_LAYOUT_CSS;
  static const StaticAsset RESPONSIVE_JS =
    StaticAssetEnum_StaticAsset_RESPONSIVE_JS;
  static inline bool StaticAsset_IsValid(int value) {
    return StaticAssetEnum_StaticAsset_IsValid(value);
  }
  static const StaticAsset StaticAsset_MIN =
    StaticAssetEnum_StaticAsset_StaticAsset_MIN;
  static const StaticAsset StaticAsset_MAX =
    StaticAssetEnum_StaticAsset_StaticAsset_MAX;
  static const int StaticAsset_ARRAYSIZE =
    StaticAssetEnum_StaticAsset_StaticAsset_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  StaticAsset_descriptor() {
    return StaticAssetEnum_StaticAsset_descriptor();
  }
  static inline const ::std::string& StaticAsset_Name(StaticAsset value) {
    return StaticAssetEnum_StaticAsset_Name(value);
  }
  static inline bool StaticAsset_Parse(const ::std::string& name,
      StaticAsset* value) {
    return StaticAssetEnum_StaticAsset_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:net_instaweb.StaticAssetEnum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static StaticAssetEnum* default_instance_;
};
// -------------------------------------------------------------------

class StaticAssetConfig_Asset : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:net_instaweb.StaticAssetConfig.Asset) */ {
 public:
  StaticAssetConfig_Asset();
  virtual ~StaticAssetConfig_Asset();

  StaticAssetConfig_Asset(const StaticAssetConfig_Asset& from);

  inline StaticAssetConfig_Asset& operator=(const StaticAssetConfig_Asset& from) {
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
  static const StaticAssetConfig_Asset& default_instance();

  void Swap(StaticAssetConfig_Asset* other);

  // implements Message ----------------------------------------------

  inline StaticAssetConfig_Asset* New() const { return New(NULL); }

  StaticAssetConfig_Asset* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StaticAssetConfig_Asset& from);
  void MergeFrom(const StaticAssetConfig_Asset& from);
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
  void InternalSwap(StaticAssetConfig_Asset* other);
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

  // optional .net_instaweb.StaticAssetEnum.StaticAsset role = 1;
  bool has_role() const;
  void clear_role();
  static const int kRoleFieldNumber = 1;
  ::net_instaweb::StaticAssetEnum_StaticAsset role() const;
  void set_role(::net_instaweb::StaticAssetEnum_StaticAsset value);

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string debug_hash = 3;
  bool has_debug_hash() const;
  void clear_debug_hash();
  static const int kDebugHashFieldNumber = 3;
  const ::std::string& debug_hash() const;
  void set_debug_hash(const ::std::string& value);
  void set_debug_hash(const char* value);
  void set_debug_hash(const char* value, size_t size);
  ::std::string* mutable_debug_hash();
  ::std::string* release_debug_hash();
  void set_allocated_debug_hash(::std::string* debug_hash);

  // optional string opt_hash = 4;
  bool has_opt_hash() const;
  void clear_opt_hash();
  static const int kOptHashFieldNumber = 4;
  const ::std::string& opt_hash() const;
  void set_opt_hash(const ::std::string& value);
  void set_opt_hash(const char* value);
  void set_opt_hash(const char* value, size_t size);
  ::std::string* mutable_opt_hash();
  ::std::string* release_opt_hash();
  void set_allocated_opt_hash(::std::string* opt_hash);

  // @@protoc_insertion_point(class_scope:net_instaweb.StaticAssetConfig.Asset)
 private:
  inline void set_has_role();
  inline void clear_has_role();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_debug_hash();
  inline void clear_has_debug_hash();
  inline void set_has_opt_hash();
  inline void clear_has_opt_hash();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr debug_hash_;
  ::google::protobuf::internal::ArenaStringPtr opt_hash_;
  int role_;
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static StaticAssetConfig_Asset* default_instance_;
};
// -------------------------------------------------------------------

class StaticAssetConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:net_instaweb.StaticAssetConfig) */ {
 public:
  StaticAssetConfig();
  virtual ~StaticAssetConfig();

  StaticAssetConfig(const StaticAssetConfig& from);

  inline StaticAssetConfig& operator=(const StaticAssetConfig& from) {
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
  static const StaticAssetConfig& default_instance();

  void Swap(StaticAssetConfig* other);

  // implements Message ----------------------------------------------

  inline StaticAssetConfig* New() const { return New(NULL); }

  StaticAssetConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StaticAssetConfig& from);
  void MergeFrom(const StaticAssetConfig& from);
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
  void InternalSwap(StaticAssetConfig* other);
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

  typedef StaticAssetConfig_Asset Asset;

  // accessors -------------------------------------------------------

  // optional string release_label = 1;
  bool has_release_label() const;
  void clear_release_label();
  static const int kReleaseLabelFieldNumber = 1;
  const ::std::string& release_label() const;
  void set_release_label(const ::std::string& value);
  void set_release_label(const char* value);
  void set_release_label(const char* value, size_t size);
  ::std::string* mutable_release_label();
  ::std::string* release_release_label();
  void set_allocated_release_label(::std::string* release_label);

  // repeated .net_instaweb.StaticAssetConfig.Asset asset = 2;
  int asset_size() const;
  void clear_asset();
  static const int kAssetFieldNumber = 2;
  const ::net_instaweb::StaticAssetConfig_Asset& asset(int index) const;
  ::net_instaweb::StaticAssetConfig_Asset* mutable_asset(int index);
  ::net_instaweb::StaticAssetConfig_Asset* add_asset();
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::StaticAssetConfig_Asset >*
      mutable_asset();
  const ::google::protobuf::RepeatedPtrField< ::net_instaweb::StaticAssetConfig_Asset >&
      asset() const;

  // @@protoc_insertion_point(class_scope:net_instaweb.StaticAssetConfig)
 private:
  inline void set_has_release_label();
  inline void clear_has_release_label();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr release_label_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::StaticAssetConfig_Asset > asset_;
  friend void  protobuf_AddDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_AssignDesc_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static StaticAssetConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StaticAssetEnum

// -------------------------------------------------------------------

// StaticAssetConfig_Asset

// optional .net_instaweb.StaticAssetEnum.StaticAsset role = 1;
inline bool StaticAssetConfig_Asset::has_role() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StaticAssetConfig_Asset::set_has_role() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StaticAssetConfig_Asset::clear_has_role() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StaticAssetConfig_Asset::clear_role() {
  role_ = 0;
  clear_has_role();
}
inline ::net_instaweb::StaticAssetEnum_StaticAsset StaticAssetConfig_Asset::role() const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.Asset.role)
  return static_cast< ::net_instaweb::StaticAssetEnum_StaticAsset >(role_);
}
inline void StaticAssetConfig_Asset::set_role(::net_instaweb::StaticAssetEnum_StaticAsset value) {
  assert(::net_instaweb::StaticAssetEnum_StaticAsset_IsValid(value));
  set_has_role();
  role_ = value;
  // @@protoc_insertion_point(field_set:net_instaweb.StaticAssetConfig.Asset.role)
}

// optional string name = 2;
inline bool StaticAssetConfig_Asset::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StaticAssetConfig_Asset::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StaticAssetConfig_Asset::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StaticAssetConfig_Asset::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& StaticAssetConfig_Asset::name() const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.Asset.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.StaticAssetConfig.Asset.name)
}
inline void StaticAssetConfig_Asset::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.StaticAssetConfig.Asset.name)
}
inline void StaticAssetConfig_Asset::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.StaticAssetConfig.Asset.name)
}
inline ::std::string* StaticAssetConfig_Asset::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:net_instaweb.StaticAssetConfig.Asset.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StaticAssetConfig_Asset::release_name() {
  // @@protoc_insertion_point(field_release:net_instaweb.StaticAssetConfig.Asset.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.StaticAssetConfig.Asset.name)
}

// optional string debug_hash = 3;
inline bool StaticAssetConfig_Asset::has_debug_hash() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StaticAssetConfig_Asset::set_has_debug_hash() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StaticAssetConfig_Asset::clear_has_debug_hash() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StaticAssetConfig_Asset::clear_debug_hash() {
  debug_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_debug_hash();
}
inline const ::std::string& StaticAssetConfig_Asset::debug_hash() const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.Asset.debug_hash)
  return debug_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_debug_hash(const ::std::string& value) {
  set_has_debug_hash();
  debug_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.StaticAssetConfig.Asset.debug_hash)
}
inline void StaticAssetConfig_Asset::set_debug_hash(const char* value) {
  set_has_debug_hash();
  debug_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.StaticAssetConfig.Asset.debug_hash)
}
inline void StaticAssetConfig_Asset::set_debug_hash(const char* value, size_t size) {
  set_has_debug_hash();
  debug_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.StaticAssetConfig.Asset.debug_hash)
}
inline ::std::string* StaticAssetConfig_Asset::mutable_debug_hash() {
  set_has_debug_hash();
  // @@protoc_insertion_point(field_mutable:net_instaweb.StaticAssetConfig.Asset.debug_hash)
  return debug_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StaticAssetConfig_Asset::release_debug_hash() {
  // @@protoc_insertion_point(field_release:net_instaweb.StaticAssetConfig.Asset.debug_hash)
  clear_has_debug_hash();
  return debug_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_allocated_debug_hash(::std::string* debug_hash) {
  if (debug_hash != NULL) {
    set_has_debug_hash();
  } else {
    clear_has_debug_hash();
  }
  debug_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), debug_hash);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.StaticAssetConfig.Asset.debug_hash)
}

// optional string opt_hash = 4;
inline bool StaticAssetConfig_Asset::has_opt_hash() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StaticAssetConfig_Asset::set_has_opt_hash() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StaticAssetConfig_Asset::clear_has_opt_hash() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StaticAssetConfig_Asset::clear_opt_hash() {
  opt_hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_opt_hash();
}
inline const ::std::string& StaticAssetConfig_Asset::opt_hash() const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.Asset.opt_hash)
  return opt_hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_opt_hash(const ::std::string& value) {
  set_has_opt_hash();
  opt_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.StaticAssetConfig.Asset.opt_hash)
}
inline void StaticAssetConfig_Asset::set_opt_hash(const char* value) {
  set_has_opt_hash();
  opt_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.StaticAssetConfig.Asset.opt_hash)
}
inline void StaticAssetConfig_Asset::set_opt_hash(const char* value, size_t size) {
  set_has_opt_hash();
  opt_hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.StaticAssetConfig.Asset.opt_hash)
}
inline ::std::string* StaticAssetConfig_Asset::mutable_opt_hash() {
  set_has_opt_hash();
  // @@protoc_insertion_point(field_mutable:net_instaweb.StaticAssetConfig.Asset.opt_hash)
  return opt_hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StaticAssetConfig_Asset::release_opt_hash() {
  // @@protoc_insertion_point(field_release:net_instaweb.StaticAssetConfig.Asset.opt_hash)
  clear_has_opt_hash();
  return opt_hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig_Asset::set_allocated_opt_hash(::std::string* opt_hash) {
  if (opt_hash != NULL) {
    set_has_opt_hash();
  } else {
    clear_has_opt_hash();
  }
  opt_hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), opt_hash);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.StaticAssetConfig.Asset.opt_hash)
}

// -------------------------------------------------------------------

// StaticAssetConfig

// optional string release_label = 1;
inline bool StaticAssetConfig::has_release_label() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StaticAssetConfig::set_has_release_label() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StaticAssetConfig::clear_has_release_label() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StaticAssetConfig::clear_release_label() {
  release_label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_release_label();
}
inline const ::std::string& StaticAssetConfig::release_label() const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.release_label)
  return release_label_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig::set_release_label(const ::std::string& value) {
  set_has_release_label();
  release_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:net_instaweb.StaticAssetConfig.release_label)
}
inline void StaticAssetConfig::set_release_label(const char* value) {
  set_has_release_label();
  release_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:net_instaweb.StaticAssetConfig.release_label)
}
inline void StaticAssetConfig::set_release_label(const char* value, size_t size) {
  set_has_release_label();
  release_label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:net_instaweb.StaticAssetConfig.release_label)
}
inline ::std::string* StaticAssetConfig::mutable_release_label() {
  set_has_release_label();
  // @@protoc_insertion_point(field_mutable:net_instaweb.StaticAssetConfig.release_label)
  return release_label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StaticAssetConfig::release_release_label() {
  // @@protoc_insertion_point(field_release:net_instaweb.StaticAssetConfig.release_label)
  clear_has_release_label();
  return release_label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StaticAssetConfig::set_allocated_release_label(::std::string* release_label) {
  if (release_label != NULL) {
    set_has_release_label();
  } else {
    clear_has_release_label();
  }
  release_label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), release_label);
  // @@protoc_insertion_point(field_set_allocated:net_instaweb.StaticAssetConfig.release_label)
}

// repeated .net_instaweb.StaticAssetConfig.Asset asset = 2;
inline int StaticAssetConfig::asset_size() const {
  return asset_.size();
}
inline void StaticAssetConfig::clear_asset() {
  asset_.Clear();
}
inline const ::net_instaweb::StaticAssetConfig_Asset& StaticAssetConfig::asset(int index) const {
  // @@protoc_insertion_point(field_get:net_instaweb.StaticAssetConfig.asset)
  return asset_.Get(index);
}
inline ::net_instaweb::StaticAssetConfig_Asset* StaticAssetConfig::mutable_asset(int index) {
  // @@protoc_insertion_point(field_mutable:net_instaweb.StaticAssetConfig.asset)
  return asset_.Mutable(index);
}
inline ::net_instaweb::StaticAssetConfig_Asset* StaticAssetConfig::add_asset() {
  // @@protoc_insertion_point(field_add:net_instaweb.StaticAssetConfig.asset)
  return asset_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::StaticAssetConfig_Asset >*
StaticAssetConfig::mutable_asset() {
  // @@protoc_insertion_point(field_mutable_list:net_instaweb.StaticAssetConfig.asset)
  return &asset_;
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::StaticAssetConfig_Asset >&
StaticAssetConfig::asset() const {
  // @@protoc_insertion_point(field_list:net_instaweb.StaticAssetConfig.asset)
  return asset_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace net_instaweb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::net_instaweb::StaticAssetEnum_StaticAsset> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::net_instaweb::StaticAssetEnum_StaticAsset>() {
  return ::net_instaweb::StaticAssetEnum_StaticAsset_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2finstaweb_2frewriter_2fstatic_5fasset_5fconfig_2eproto__INCLUDED
