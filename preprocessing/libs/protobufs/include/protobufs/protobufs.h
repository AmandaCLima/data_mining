#ifndef SSL_UNIFICATION_PROTOBUFS_H
#define SSL_UNIFICATION_PROTOBUFS_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_include("pb/ssl_gc_common.pb.h")
  #include "pb/ssl_gc_common.pb.h"
#else
  #warning "pb/ssl_gc_common.pb.h" was not found.
#endif

#if __has_include("pb/ssl_gc_game_event.pb.h")
  #include "pb/ssl_gc_game_event.pb.h"
#else
  #warning "pb/ssl_gc_game_event.pb.h" was not found.
#endif

#if __has_include("pb/ssl_gc_geometry.pb.h")
  #include "pb/ssl_gc_geometry.pb.h"
#else
  #warning "pb/ssl_gc_geometry.pb.h" was not found.
#endif

#if __has_include("pb/ssl_gc_referee_message.pb.h")
  #include "pb/ssl_gc_referee_message.pb.h"
#else
  #warning "pb/ssl_gc_referee_message.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_config.pb.h")
  #include "pb/ssl_simulation_config.pb.h"
#else
  #warning "pb/ssl_simulation_config.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_control.pb.h")
  #include "pb/ssl_simulation_control.pb.h"
#else
  #warning "pb/ssl_simulation_control.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_custom_erforce_robot_spec.pb.h")
  #include "pb/ssl_simulation_custom_erforce_robot_spec.pb.h"
#else
  #warning "pb/ssl_simulation_custom_erforce_robot_spec.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_error.pb.h")
  #include "pb/ssl_simulation_error.pb.h"
#else
  #warning "pb/ssl_simulation_error.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_robot_control.pb.h")
  #include "pb/ssl_simulation_robot_control.pb.h"
#else
  #warning "pb/ssl_simulation_robot_control.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_robot_feedback.pb.h")
  #include "pb/ssl_simulation_robot_feedback.pb.h"
#else
  #warning "pb/ssl_simulation_robot_feedback.pb.h" was not found.
#endif

#if __has_include("pb/ssl_simulation_synchronous.pb.h")
  #include "pb/ssl_simulation_synchronous.pb.h"
#else
  #warning "pb/ssl_simulation_synchronous.pb.h" was not found.
#endif

#if __has_include("pb/ssl_vision_detection.pb.h")
  #include "pb/ssl_vision_detection.pb.h"
#else
  #warning "pb/ssl_vision_detection.pb.h" was not found.
#endif

#if __has_include("pb/ssl_vision_detection_tracked.pb.h")
  #include "pb/ssl_vision_detection_tracked.pb.h"
#else
  #warning "pb/ssl_vision_detection_tracked.pb.h" was not found.
#endif

#if __has_include("pb/ssl_vision_geometry.pb.h")
  #include "pb/ssl_vision_geometry.pb.h"
#else
  #warning "pb/ssl_vision_geometry.pb.h" was not found.
#endif

#if __has_include("pb/ssl_vision_wrapper.pb.h")
  #include "pb/ssl_vision_wrapper.pb.h"
#else
  #warning "pb/ssl_vision_wrapper.pb.h" was not found.
#endif

#if __has_include("pb/ssl_vision_wrapper_tracked.pb.h")
  #include "pb/ssl_vision_wrapper_tracked.pb.h"
#else
  #warning "pb/ssl_vision_wrapper_tracked.pb.h" was not found.
#endif

#if __has_include("pb/ssl_visualization.pb.h")
  #include "pb/ssl_visualization.pb.h"
#else
  #warning "pb/ssl_visualization.pb.h" was not found.
#endif

#if __has_include("pb/pathfinding.pb.h")
  #include "pb/pathfinding.pb.h"
#else
  #warning "pb/pathfinding.pb.h" was not found.
#endif

#if __has_include("pb/rc_log.pb.h")
  #include "pb/rc_log.pb.h"
#else
  #warning "pb/rc_log.pb.h" was not found.
#endif

#if  __has_include("pb/rc_communication.pb.h")
  #include "pb/rc_communication.pb.h"
#else
  #warning "pb/rc_communication.pb.h" was not found.
#endif

#pragma GCC diagnostic pop

#endif // SSL_UNIFICATION_PROTOBUFS_H
