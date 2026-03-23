# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/BetaFlightStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'motor'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BetaFlightStates(type):
    """Metaclass of message 'BetaFlightStates'."""

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
                'quadrotor_msgs.msg.BetaFlightStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__beta_flight_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__beta_flight_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__beta_flight_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__beta_flight_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__beta_flight_states

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


class BetaFlightStates(metaclass=Metaclass_BetaFlightStates):
    """Message class 'BetaFlightStates'."""

    __slots__ = [
        '_header',
        '_linear_acceleration',
        '_angular_velocity',
        '_quaternion',
        '_linear_acceleration_filtered',
        '_angular_acceleration_filtered',
        '_motor',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'linear_acceleration': 'geometry_msgs/Vector3',
        'angular_velocity': 'geometry_msgs/Vector3',
        'quaternion': 'geometry_msgs/Quaternion',
        'linear_acceleration_filtered': 'geometry_msgs/Vector3',
        'angular_acceleration_filtered': 'geometry_msgs/Vector3',
        'motor': 'double[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration = kwargs.get('linear_acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        from geometry_msgs.msg import Quaternion
        self.quaternion = kwargs.get('quaternion', Quaternion())
        from geometry_msgs.msg import Vector3
        self.linear_acceleration_filtered = kwargs.get('linear_acceleration_filtered', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_acceleration_filtered = kwargs.get('angular_acceleration_filtered', Vector3())
        if 'motor' not in kwargs:
            self.motor = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.motor = kwargs.get('motor')

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
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.quaternion != other.quaternion:
            return False
        if self.linear_acceleration_filtered != other.linear_acceleration_filtered:
            return False
        if self.angular_acceleration_filtered != other.angular_acceleration_filtered:
            return False
        if any(self.motor != other.motor):
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
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration' field must be a sub message of type 'Vector3'"
        self._linear_acceleration = value

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity' field must be a sub message of type 'Vector3'"
        self._angular_velocity = value

    @builtins.property
    def quaternion(self):
        """Message field 'quaternion'."""
        return self._quaternion

    @quaternion.setter
    def quaternion(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'quaternion' field must be a sub message of type 'Quaternion'"
        self._quaternion = value

    @builtins.property
    def linear_acceleration_filtered(self):
        """Message field 'linear_acceleration_filtered'."""
        return self._linear_acceleration_filtered

    @linear_acceleration_filtered.setter
    def linear_acceleration_filtered(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'linear_acceleration_filtered' field must be a sub message of type 'Vector3'"
        self._linear_acceleration_filtered = value

    @builtins.property
    def angular_acceleration_filtered(self):
        """Message field 'angular_acceleration_filtered'."""
        return self._angular_acceleration_filtered

    @angular_acceleration_filtered.setter
    def angular_acceleration_filtered(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_acceleration_filtered' field must be a sub message of type 'Vector3'"
        self._angular_acceleration_filtered = value

    @builtins.property
    def motor(self):
        """Message field 'motor'."""
        return self._motor

    @motor.setter
    def motor(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'motor' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'motor' numpy.ndarray() must have a size of 4"
            self._motor = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'motor' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._motor = numpy.array(value, dtype=numpy.float64)
