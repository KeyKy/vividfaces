// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lazy_dependencies.proto

#include <google/protobuf/unittest_lazy_dependencies.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace protobuf_unittest {
namespace lazy_imports {
class ImportedMessageDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ImportedMessage>
      _instance;
} _ImportedMessage_default_instance_;
class MessageCustomOptionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MessageCustomOption>
      _instance;
} _MessageCustomOption_default_instance_;
class MessageCustomOption2DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MessageCustomOption2>
      _instance;
} _MessageCustomOption2_default_instance_;
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto {
void InitDefaultsImportedMessageImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::InitDefaultsLazyMessage();
  {
    void* ptr = &::protobuf_unittest::lazy_imports::_ImportedMessage_default_instance_;
    new (ptr) ::protobuf_unittest::lazy_imports::ImportedMessage();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::lazy_imports::ImportedMessage::InitAsDefaultInstance();
}

void InitDefaultsImportedMessage() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsImportedMessageImpl);
}

void InitDefaultsMessageCustomOptionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::protobuf_unittest::lazy_imports::_MessageCustomOption_default_instance_;
    new (ptr) ::protobuf_unittest::lazy_imports::MessageCustomOption();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::lazy_imports::MessageCustomOption::InitAsDefaultInstance();
}

void InitDefaultsMessageCustomOption() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMessageCustomOptionImpl);
}

void InitDefaultsMessageCustomOption2Impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::protobuf_unittest::lazy_imports::_MessageCustomOption2_default_instance_;
    new (ptr) ::protobuf_unittest::lazy_imports::MessageCustomOption2();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::lazy_imports::MessageCustomOption2::InitAsDefaultInstance();
}

void InitDefaultsMessageCustomOption2() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMessageCustomOption2Impl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::ImportedMessage, lazy_message_),
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption2, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protobuf_unittest::lazy_imports::MessageCustomOption2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::protobuf_unittest::lazy_imports::ImportedMessage)},
  { 7, 12, sizeof(::protobuf_unittest::lazy_imports::MessageCustomOption)},
  { 12, 17, sizeof(::protobuf_unittest::lazy_imports::MessageCustomOption2)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobuf_unittest::lazy_imports::_ImportedMessage_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobuf_unittest::lazy_imports::_MessageCustomOption_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::protobuf_unittest::lazy_imports::_MessageCustomOption2_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/unittest_lazy_dependencies.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n0google/protobuf/unittest_lazy_dependen"
      "cies.proto\022\036protobuf_unittest.lazy_impor"
      "ts\032>google/protobuf/unittest_lazy_depend"
      "encies_custom_option.proto\"T\n\017ImportedMe"
      "ssage\022A\n\014lazy_message\030\001 \001(\0132+.protobuf_u"
      "nittest.lazy_imports.LazyMessage\"\025\n\023Mess"
      "ageCustomOption\"\036\n\024MessageCustomOption2:"
      "\006\370\376\331\220\004\000B(B\030UnittestLazyImportsProtoH\001\200\001\001"
      "\210\001\001\220\001\001\370\001\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 329);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_lazy_dependencies.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_5fcustom_5foption_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto
namespace protobuf_unittest {
namespace lazy_imports {

// ===================================================================

void ImportedMessage::InitAsDefaultInstance() {
  ::protobuf_unittest::lazy_imports::_ImportedMessage_default_instance_._instance.get_mutable()->lazy_message_ = const_cast< ::protobuf_unittest::lazy_imports::LazyMessage*>(
      ::protobuf_unittest::lazy_imports::LazyMessage::internal_default_instance());
}
void ImportedMessage::unsafe_arena_set_allocated_lazy_message(
    ::protobuf_unittest::lazy_imports::LazyMessage* lazy_message) {
  if (GetArenaNoVirtual() == NULL) {
    delete lazy_message_;
  }
  lazy_message_ = lazy_message;
  if (lazy_message) {
    set_has_lazy_message();
  } else {
    clear_has_lazy_message();
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:protobuf_unittest.lazy_imports.ImportedMessage.lazy_message)
}
void ImportedMessage::clear_lazy_message() {
  if (lazy_message_ != NULL) lazy_message_->Clear();
  clear_has_lazy_message();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ImportedMessage::kLazyMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ImportedMessage::ImportedMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsImportedMessage();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.lazy_imports.ImportedMessage)
}
ImportedMessage::ImportedMessage(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsImportedMessage();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.ImportedMessage)
}
ImportedMessage::ImportedMessage(const ImportedMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_lazy_message()) {
    lazy_message_ = new ::protobuf_unittest::lazy_imports::LazyMessage(*from.lazy_message_);
  } else {
    lazy_message_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.ImportedMessage)
}

void ImportedMessage::SharedCtor() {
  _cached_size_ = 0;
  lazy_message_ = NULL;
}

ImportedMessage::~ImportedMessage() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.ImportedMessage)
  SharedDtor();
}

void ImportedMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  if (this != internal_default_instance()) delete lazy_message_;
}

void ImportedMessage::ArenaDtor(void* object) {
  ImportedMessage* _this = reinterpret_cast< ImportedMessage* >(object);
  (void)_this;
}
void ImportedMessage::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ImportedMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImportedMessage::descriptor() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ImportedMessage& ImportedMessage::default_instance() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsImportedMessage();
  return *internal_default_instance();
}


void ImportedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.ImportedMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(lazy_message_ != NULL);
    lazy_message_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ImportedMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.lazy_imports.ImportedMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_lazy_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.lazy_imports.ImportedMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.lazy_imports.ImportedMessage)
  return false;
#undef DO_
}

void ImportedMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.lazy_imports.ImportedMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *lazy_message_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.lazy_imports.ImportedMessage)
}

::google::protobuf::uint8* ImportedMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.ImportedMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *lazy_message_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.ImportedMessage)
  return target;
}

size_t ImportedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.ImportedMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional .protobuf_unittest.lazy_imports.LazyMessage lazy_message = 1;
  if (has_lazy_message()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *lazy_message_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ImportedMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ImportedMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ImportedMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.ImportedMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.ImportedMessage)
    MergeFrom(*source);
  }
}

void ImportedMessage::MergeFrom(const ImportedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_lazy_message()) {
    mutable_lazy_message()->::protobuf_unittest::lazy_imports::LazyMessage::MergeFrom(from.lazy_message());
  }
}

void ImportedMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportedMessage::CopyFrom(const ImportedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.ImportedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportedMessage::IsInitialized() const {
  return true;
}

void ImportedMessage::Swap(ImportedMessage* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ImportedMessage* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void ImportedMessage::UnsafeArenaSwap(ImportedMessage* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ImportedMessage::InternalSwap(ImportedMessage* other) {
  using std::swap;
  swap(lazy_message_, other->lazy_message_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ImportedMessage::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void MessageCustomOption::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageCustomOption::MessageCustomOption()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.lazy_imports.MessageCustomOption)
}
MessageCustomOption::MessageCustomOption(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.MessageCustomOption)
}
MessageCustomOption::MessageCustomOption(const MessageCustomOption& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.MessageCustomOption)
}

void MessageCustomOption::SharedCtor() {
  _cached_size_ = 0;
}

MessageCustomOption::~MessageCustomOption() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.MessageCustomOption)
  SharedDtor();
}

void MessageCustomOption::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void MessageCustomOption::ArenaDtor(void* object) {
  MessageCustomOption* _this = reinterpret_cast< MessageCustomOption* >(object);
  (void)_this;
}
void MessageCustomOption::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void MessageCustomOption::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageCustomOption::descriptor() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MessageCustomOption& MessageCustomOption::default_instance() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption();
  return *internal_default_instance();
}


void MessageCustomOption::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MessageCustomOption::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.lazy_imports.MessageCustomOption)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.lazy_imports.MessageCustomOption)
  return false;
#undef DO_
}

void MessageCustomOption::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.lazy_imports.MessageCustomOption)
}

::google::protobuf::uint8* MessageCustomOption::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.MessageCustomOption)
  return target;
}

size_t MessageCustomOption::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageCustomOption::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageCustomOption* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MessageCustomOption>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.MessageCustomOption)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.MessageCustomOption)
    MergeFrom(*source);
  }
}

void MessageCustomOption::MergeFrom(const MessageCustomOption& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void MessageCustomOption::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageCustomOption::CopyFrom(const MessageCustomOption& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageCustomOption::IsInitialized() const {
  return true;
}

void MessageCustomOption::Swap(MessageCustomOption* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    MessageCustomOption* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void MessageCustomOption::UnsafeArenaSwap(MessageCustomOption* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void MessageCustomOption::InternalSwap(MessageCustomOption* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MessageCustomOption::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void MessageCustomOption2::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageCustomOption2::MessageCustomOption2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption2();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
}
MessageCustomOption2::MessageCustomOption2(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption2();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
}
MessageCustomOption2::MessageCustomOption2(const MessageCustomOption2& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
}

void MessageCustomOption2::SharedCtor() {
  _cached_size_ = 0;
}

MessageCustomOption2::~MessageCustomOption2() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.lazy_imports.MessageCustomOption2)
  SharedDtor();
}

void MessageCustomOption2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void MessageCustomOption2::ArenaDtor(void* object) {
  MessageCustomOption2* _this = reinterpret_cast< MessageCustomOption2* >(object);
  (void)_this;
}
void MessageCustomOption2::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void MessageCustomOption2::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageCustomOption2::descriptor() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MessageCustomOption2& MessageCustomOption2::default_instance() {
  ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::InitDefaultsMessageCustomOption2();
  return *internal_default_instance();
}


void MessageCustomOption2::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MessageCustomOption2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.lazy_imports.MessageCustomOption2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.lazy_imports.MessageCustomOption2)
  return false;
#undef DO_
}

void MessageCustomOption2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.lazy_imports.MessageCustomOption2)
}

::google::protobuf::uint8* MessageCustomOption2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.lazy_imports.MessageCustomOption2)
  return target;
}

size_t MessageCustomOption2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageCustomOption2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageCustomOption2* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MessageCustomOption2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.lazy_imports.MessageCustomOption2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.lazy_imports.MessageCustomOption2)
    MergeFrom(*source);
  }
}

void MessageCustomOption2::MergeFrom(const MessageCustomOption2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void MessageCustomOption2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageCustomOption2::CopyFrom(const MessageCustomOption2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.lazy_imports.MessageCustomOption2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageCustomOption2::IsInitialized() const {
  return true;
}

void MessageCustomOption2::Swap(MessageCustomOption2* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    MessageCustomOption2* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void MessageCustomOption2::UnsafeArenaSwap(MessageCustomOption2* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void MessageCustomOption2::InternalSwap(MessageCustomOption2* other) {
  using std::swap;
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MessageCustomOption2::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fprotobuf_2funittest_5flazy_5fdependencies_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lazy_imports
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protobuf_unittest::lazy_imports::ImportedMessage* Arena::CreateMessage< ::protobuf_unittest::lazy_imports::ImportedMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::ImportedMessage >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protobuf_unittest::lazy_imports::MessageCustomOption* Arena::CreateMessage< ::protobuf_unittest::lazy_imports::MessageCustomOption >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::MessageCustomOption >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protobuf_unittest::lazy_imports::MessageCustomOption2* Arena::CreateMessage< ::protobuf_unittest::lazy_imports::MessageCustomOption2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::lazy_imports::MessageCustomOption2 >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
