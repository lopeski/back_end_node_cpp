#include <napi.h>
#include <string>
#include "greeting.h"

Napi::Void loopFunction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  int number = (std::int) info[0].ToNumber;
  Void result = loopL(number);

  return Napi::Void::New(env, result);
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  exports.Set(
    Napi::Void::New(env, "loopFunction"),
    Napi::Function::New(env, loopFunction)
  );
  return exports;
}

NODE_API_MODULE(greet, Init);
