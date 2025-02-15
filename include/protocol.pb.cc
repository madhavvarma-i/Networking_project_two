// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#include "protocol.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_protocol_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Client_protocol_2eproto;
namespace chat {
class ClientDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Client> _instance;
} _Client_default_instance_;
class ClientsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Clients> _instance;
} _Clients_default_instance_;
}  // namespace chat
static void InitDefaultsscc_info_Client_protocol_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chat::_Client_default_instance_;
    new (ptr) ::chat::Client();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chat::Client::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Client_protocol_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Client_protocol_2eproto}, {}};

static void InitDefaultsscc_info_Clients_protocol_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chat::_Clients_default_instance_;
    new (ptr) ::chat::Clients();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chat::Clients::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Clients_protocol_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Clients_protocol_2eproto}, {
      &scc_info_Client_protocol_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protocol_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_protocol_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protocol_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protocol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::chat::Client, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chat::Client, requestid_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, socketnumber_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, email_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, password_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, message_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, name_),
  PROTOBUF_FIELD_OFFSET(::chat::Client, type_),
  4,
  5,
  0,
  1,
  2,
  3,
  6,
  PROTOBUF_FIELD_OFFSET(::chat::Clients, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::chat::Clients, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::chat::Clients, clients_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::chat::Client)},
  { 19, 25, sizeof(::chat::Clients)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chat::_Client_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::chat::_Clients_default_instance_),
};

const char descriptor_table_protodef_protocol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016protocol.proto\022\004chat\"\331\001\n\006Client\022\021\n\treq"
  "uestId\030\001 \002(\005\022\024\n\014socketNumber\030\002 \002(\005\022\r\n\005em"
  "ail\030\003 \001(\t\022\020\n\010password\030\004 \001(\t\022\017\n\007message\030\005"
  " \001(\t\022\014\n\004name\030\006 \001(\t\022&\n\004type\030\007 \001(\0162\030.chat."
  "Client.MessageType\">\n\013MessageType\022\r\n\tJOI"
  "N_ROOM\020\000\022\020\n\014SEND_MESSAGE\020\001\022\016\n\nLEAVE_ROOM"
  "\020\002\"(\n\007Clients\022\035\n\007clients\030\001 \003(\0132\014.chat.Cl"
  "ient"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protocol_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protocol_2eproto_sccs[2] = {
  &scc_info_Client_protocol_2eproto.base,
  &scc_info_Clients_protocol_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protocol_2eproto_once;
static bool descriptor_table_protocol_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocol_2eproto = {
  &descriptor_table_protocol_2eproto_initialized, descriptor_table_protodef_protocol_2eproto, "protocol.proto", 284,
  &descriptor_table_protocol_2eproto_once, descriptor_table_protocol_2eproto_sccs, descriptor_table_protocol_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_protocol_2eproto::offsets,
  file_level_metadata_protocol_2eproto, 2, file_level_enum_descriptors_protocol_2eproto, file_level_service_descriptors_protocol_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protocol_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protocol_2eproto), true);
namespace chat {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Client_MessageType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protocol_2eproto);
  return file_level_enum_descriptors_protocol_2eproto[0];
}
bool Client_MessageType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Client_MessageType Client::JOIN_ROOM;
constexpr Client_MessageType Client::SEND_MESSAGE;
constexpr Client_MessageType Client::LEAVE_ROOM;
constexpr Client_MessageType Client::MessageType_MIN;
constexpr Client_MessageType Client::MessageType_MAX;
constexpr int Client::MessageType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Client::InitAsDefaultInstance() {
}
class Client::_Internal {
 public:
  using HasBits = decltype(std::declval<Client>()._has_bits_);
  static void set_has_requestid(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_socketnumber(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_email(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_password(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_message(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

Client::Client()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chat.Client)
}
Client::Client(const Client& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_email()) {
    email_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_password()) {
    password_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_message()) {
    message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&requestid_, &from.requestid_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:chat.Client)
}

void Client::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Client_protocol_2eproto.base);
  email_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&requestid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&requestid_)) + sizeof(type_));
}

Client::~Client() {
  // @@protoc_insertion_point(destructor:chat.Client)
  SharedDtor();
}

void Client::SharedDtor() {
  email_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Client::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Client& Client::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Client_protocol_2eproto.base);
  return *internal_default_instance();
}


void Client::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.Client)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      email_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      password_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      message_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x00000070u) {
    ::memset(&requestid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&requestid_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Client::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 requestId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_requestid(&has_bits);
          requestid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 socketNumber = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_socketnumber(&has_bits);
          socketnumber_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string email = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_email(), ptr, ctx, "chat.Client.email");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string password = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_password(), ptr, ctx, "chat.Client.password");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string message = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_message(), ptr, ctx, "chat.Client.message");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string name = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_name(), ptr, ctx, "chat.Client.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .chat.Client.MessageType type = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::chat::Client_MessageType_IsValid(val))) {
            _internal_set_type(static_cast<::chat::Client_MessageType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(7, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Client::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.Client)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 requestId = 1;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_requestid(), target);
  }

  // required int32 socketNumber = 2;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_socketnumber(), target);
  }

  // optional string email = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_email().data(), static_cast<int>(this->_internal_email().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.Client.email");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_email(), target);
  }

  // optional string password = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.Client.password");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_password(), target);
  }

  // optional string message = 5;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.Client.message");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_message(), target);
  }

  // optional string name = 6;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "chat.Client.name");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_name(), target);
  }

  // optional .chat.Client.MessageType type = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      7, this->_internal_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.Client)
  return target;
}

size_t Client::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:chat.Client)
  size_t total_size = 0;

  if (has_requestid()) {
    // required int32 requestId = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_requestid());
  }

  if (has_socketnumber()) {
    // required int32 socketNumber = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_socketnumber());
  }

  return total_size;
}
size_t Client::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.Client)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000030) ^ 0x00000030) == 0) {  // All required fields are present.
    // required int32 requestId = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_requestid());

    // required int32 socketNumber = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_socketnumber());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string email = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_email());
    }

    // optional string password = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_password());
    }

    // optional string message = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_message());
    }

    // optional string name = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

  }
  // optional .chat.Client.MessageType type = 7;
  if (cached_has_bits & 0x00000040u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Client::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chat.Client)
  GOOGLE_DCHECK_NE(&from, this);
  const Client* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Client>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chat.Client)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chat.Client)
    MergeFrom(*source);
  }
}

void Client::MergeFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chat.Client)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      email_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.email_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      password_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.password_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      message_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.message_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000010u) {
      requestid_ = from.requestid_;
    }
    if (cached_has_bits & 0x00000020u) {
      socketnumber_ = from.socketnumber_;
    }
    if (cached_has_bits & 0x00000040u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Client::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chat.Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Client::CopyFrom(const Client& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.Client)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Client::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000030) != 0x00000030) return false;
  return true;
}

void Client::InternalSwap(Client* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  email_.Swap(&other->email_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  password_.Swap(&other->password_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  message_.Swap(&other->message_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(requestid_, other->requestid_);
  swap(socketnumber_, other->socketnumber_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Client::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Clients::InitAsDefaultInstance() {
}
class Clients::_Internal {
 public:
  using HasBits = decltype(std::declval<Clients>()._has_bits_);
};

Clients::Clients()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:chat.Clients)
}
Clients::Clients(const Clients& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      clients_(from.clients_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:chat.Clients)
}

void Clients::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Clients_protocol_2eproto.base);
}

Clients::~Clients() {
  // @@protoc_insertion_point(destructor:chat.Clients)
  SharedDtor();
}

void Clients::SharedDtor() {
}

void Clients::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Clients& Clients::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Clients_protocol_2eproto.base);
  return *internal_default_instance();
}


void Clients::Clear() {
// @@protoc_insertion_point(message_clear_start:chat.Clients)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clients_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Clients::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .chat.Client clients = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_clients(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Clients::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:chat.Clients)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .chat.Client clients = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_clients_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_clients(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:chat.Clients)
  return target;
}

size_t Clients::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chat.Clients)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .chat.Client clients = 1;
  total_size += 1UL * this->_internal_clients_size();
  for (const auto& msg : this->clients_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Clients::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:chat.Clients)
  GOOGLE_DCHECK_NE(&from, this);
  const Clients* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Clients>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:chat.Clients)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:chat.Clients)
    MergeFrom(*source);
  }
}

void Clients::MergeFrom(const Clients& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chat.Clients)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  clients_.MergeFrom(from.clients_);
}

void Clients::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:chat.Clients)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Clients::CopyFrom(const Clients& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chat.Clients)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Clients::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(this->clients())) return false;
  return true;
}

void Clients::InternalSwap(Clients* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  clients_.InternalSwap(&other->clients_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Clients::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chat
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::chat::Client* Arena::CreateMaybeMessage< ::chat::Client >(Arena* arena) {
  return Arena::CreateInternal< ::chat::Client >(arena);
}
template<> PROTOBUF_NOINLINE ::chat::Clients* Arena::CreateMaybeMessage< ::chat::Clients >(Arena* arena) {
  return Arena::CreateInternal< ::chat::Clients >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
