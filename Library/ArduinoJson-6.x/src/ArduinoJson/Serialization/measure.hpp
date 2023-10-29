// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2022, Benoit BLANCHON
// MIT License

#pragma once

#include <ArduinoJson/Serialization/Writers/DummyWriter.hpp>

namespace ARDUINOJSON_NAMESPACE {

template <template <typename> class TSerializer>
size_t measure(VariantConstRef source) {
  DummyWriter dp;
  TSerializer<DummyWriter> serializer(dp);
  return source.accept(serializer);
}

}  // namespace ARDUINOJSON_NAMESPACE
