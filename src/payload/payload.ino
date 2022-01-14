// Nicholas Tindle
// Releases a payload from the rocket

#include "../logging/logging.h"

typedef enum {
  Released,
  NotReleased
} PayloadStatus;

// Releases the payload, if it is not already released. 
// Verifys the payload is released
PayloadStatus releasePayload(){
  if(checkPayloadStatus() == Released){
    logWarning("Payload", "Payload is already released");
    return Released;
  }
  else{
    logMessage("Payload","Releasing payload");
    releaseLockingMechanism();
    if(checkPayloadStatus() == Released){
      logMessage("Payload","Payload released");
      return Released;
    }
    else{
      logError("Payload","Payload failed to release");
      return NotReleased;
    }
  }
}


void releaseLockingMechanism(){

}

PayloadStatus checkPayloadStatus(){

}