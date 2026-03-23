# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BetaFlightOnboardControl(type):
    """Metaclass of message 'BetaFlightOnboardControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('quadrotor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quadrotor_msgs.msg.BetaFlightOnboardControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__beta_flight_onboard_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__beta_flight_onboard_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__beta_flight_onboard_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__beta_flight_onboard_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__beta_flight_onboard_control

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BetaFlightOnboardControl(metaclass=Metaclass_BetaFlightOnboardControl):
    """Message class 'BetaFlightOnboardControl'."""

    __slots__ = [
        '_header',
        '_angular_velocity_desired',
        '_quaternion_desired',
        '_thrust_desired',
        '_active_offboard',
        '_active_attitude',
        '_active_acro',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angular_velocity_desired': 'geometry_msgs/Vector3',
        'quaternion_desired': 'geometry_msgs/Quaternion',
        'thrust_desired': 'double',
        'active_offboard': 'uint8',
        'active_attitude': 'uint8',
        'active_acro': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.angular_velocity_desired = kwargs.get('angular_velocity_desired', Vector3())
        from geometry_msgs.msg import Quaternion
        self.quaternion_desired = kwargs.get('quaternion_desired', Quaternion())
        self.thrust_desired = kwargs.get('thrust_desired', float())
        self.active_offboard = kwargs.get('active_offboard', int())
        self.active_attitude = kwargs.get('active_attitude', int())
        self.active_acro = kwargs.get('active_acro', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.angular_velocity_desired != other.angular_velocity_desired:
            return False
        if self.quaternion_desired != other.quaternion_desired:
            return False
        if self.thrust_desired != other.thrust_desired:
            return False
        if self.active_offboard != other.active_offboard:
            return False
        if self.active_attitude != other.active_attitude:
            return False
        if self.active_acro != other.active_acro:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def angular_velocity_desired(self):
        """Message field 'angular_velocity_desired'."""
        return self._angular_velocity_desired

    @angular_velocity_desired.setter
    def angular_velocity_desired(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity_desired' field must be a sub message of type 'Vector3'"
        self._angular_velocity_desired = value

    @builtins.property
    def quaternion_desired(self):
        """Message field 'quaternion_desired'."""
        return self._quaternion_desired

    @quaternion_desired.setter
    def quaternion_desired(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'quaternion_desired' field must be a sub message of type 'Quaternion'"
        self._quaternion_desired = value

    @builtins.property
    def thrust_desired(self):
        """Message field 'thrust_desired'."""
        return self._thrust_desired

    @thrust_desired.setter
    def thrust_desired(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thrust_desired' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'thrust_desired' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._thrust_desired = value

    @builtins.property
    def active_offboard(self):
        """Message field 'active_offboard'."""
        return self._active_offboard

    @active_offboard.setter
    def active_offboard(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_offboard' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_offboard' field must be an unsigned integer in [0, 255]"
        self._active_offboard = value

    @builtins.property
    def active_attitude(self):
        """Message field 'active_attitude'."""
        return self._active_attitude

    @active_attitude.setter
    def active_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_attitude' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_attitude' field must be an unsigned integer in [0, 255]"
        self._active_attitude = value

    @builtins.property
    def active_acro(self):
        """Message field 'active_acro'."""
        return self._active_acro

    @active_acro.setter
    def active_acro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_acro' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_acro' field must be an unsigned integer in [0, 255]"
        self._active_acro = value
