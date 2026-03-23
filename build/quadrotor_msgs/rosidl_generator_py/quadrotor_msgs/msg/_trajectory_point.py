# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/TrajectoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rpm'
# Member 'forces'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPoint(type):
    """Metaclass of message 'TrajectoryPoint'."""

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
                'quadrotor_msgs.msg.TrajectoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_point

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrajectoryPoint(metaclass=Metaclass_TrajectoryPoint):
    """Message class 'TrajectoryPoint'."""

    __slots__ = [
        '_position',
        '_velocity',
        '_acceleration',
        '_jerk',
        '_snap',
        '_quaternion',
        '_force',
        '_rpm',
        '_forces',
        '_angular_velocity',
        '_angular_velocity_dot',
        '_moments',
        '_position_quad',
        '_velocity_quad',
        '_acceleration_quad',
    ]

    _fields_and_field_types = {
        'position': 'geometry_msgs/Point',
        'velocity': 'geometry_msgs/Vector3',
        'acceleration': 'geometry_msgs/Vector3',
        'jerk': 'geometry_msgs/Vector3',
        'snap': 'geometry_msgs/Vector3',
        'quaternion': 'geometry_msgs/Quaternion',
        'force': 'double',
        'rpm': 'int64[4]',
        'forces': 'double[4]',
        'angular_velocity': 'geometry_msgs/Vector3',
        'angular_velocity_dot': 'geometry_msgs/Vector3',
        'moments': 'geometry_msgs/Vector3',
        'position_quad': 'geometry_msgs/Point',
        'velocity_quad': 'geometry_msgs/Point',
        'acceleration_quad': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.jerk = kwargs.get('jerk', Vector3())
        from geometry_msgs.msg import Vector3
        self.snap = kwargs.get('snap', Vector3())
        from geometry_msgs.msg import Quaternion
        self.quaternion = kwargs.get('quaternion', Quaternion())
        self.force = kwargs.get('force', float())
        if 'rpm' not in kwargs:
            self.rpm = numpy.zeros(4, dtype=numpy.int64)
        else:
            self.rpm = kwargs.get('rpm')
        if 'forces' not in kwargs:
            self.forces = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.forces = kwargs.get('forces')
        from geometry_msgs.msg import Vector3
        self.angular_velocity = kwargs.get('angular_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_velocity_dot = kwargs.get('angular_velocity_dot', Vector3())
        from geometry_msgs.msg import Vector3
        self.moments = kwargs.get('moments', Vector3())
        from geometry_msgs.msg import Point
        self.position_quad = kwargs.get('position_quad', Point())
        from geometry_msgs.msg import Point
        self.velocity_quad = kwargs.get('velocity_quad', Point())
        from geometry_msgs.msg import Point
        self.acceleration_quad = kwargs.get('acceleration_quad', Point())

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
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.jerk != other.jerk:
            return False
        if self.snap != other.snap:
            return False
        if self.quaternion != other.quaternion:
            return False
        if self.force != other.force:
            return False
        if any(self.rpm != other.rpm):
            return False
        if any(self.forces != other.forces):
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.angular_velocity_dot != other.angular_velocity_dot:
            return False
        if self.moments != other.moments:
            return False
        if self.position_quad != other.position_quad:
            return False
        if self.velocity_quad != other.velocity_quad:
            return False
        if self.acceleration_quad != other.acceleration_quad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def jerk(self):
        """Message field 'jerk'."""
        return self._jerk

    @jerk.setter
    def jerk(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'jerk' field must be a sub message of type 'Vector3'"
        self._jerk = value

    @builtins.property
    def snap(self):
        """Message field 'snap'."""
        return self._snap

    @snap.setter
    def snap(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'snap' field must be a sub message of type 'Vector3'"
        self._snap = value

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
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'force' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._force = value

    @builtins.property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'rpm' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 4, \
                "The 'rpm' numpy.ndarray() must have a size of 4"
            self._rpm = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'rpm' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._rpm = numpy.array(value, dtype=numpy.int64)

    @builtins.property
    def forces(self):
        """Message field 'forces'."""
        return self._forces

    @forces.setter
    def forces(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'forces' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'forces' numpy.ndarray() must have a size of 4"
            self._forces = value
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
                "The 'forces' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._forces = numpy.array(value, dtype=numpy.float64)

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
    def angular_velocity_dot(self):
        """Message field 'angular_velocity_dot'."""
        return self._angular_velocity_dot

    @angular_velocity_dot.setter
    def angular_velocity_dot(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_velocity_dot' field must be a sub message of type 'Vector3'"
        self._angular_velocity_dot = value

    @builtins.property
    def moments(self):
        """Message field 'moments'."""
        return self._moments

    @moments.setter
    def moments(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'moments' field must be a sub message of type 'Vector3'"
        self._moments = value

    @builtins.property
    def position_quad(self):
        """Message field 'position_quad'."""
        return self._position_quad

    @position_quad.setter
    def position_quad(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position_quad' field must be a sub message of type 'Point'"
        self._position_quad = value

    @builtins.property
    def velocity_quad(self):
        """Message field 'velocity_quad'."""
        return self._velocity_quad

    @velocity_quad.setter
    def velocity_quad(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'velocity_quad' field must be a sub message of type 'Point'"
        self._velocity_quad = value

    @builtins.property
    def acceleration_quad(self):
        """Message field 'acceleration_quad'."""
        return self._acceleration_quad

    @acceleration_quad.setter
    def acceleration_quad(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'acceleration_quad' field must be a sub message of type 'Point'"
        self._acceleration_quad = value
