# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LissaPlannerGoal(type):
    """Metaclass of message 'LissaPlannerGoal'."""

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
                'quadrotor_msgs.msg.LissaPlannerGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lissa_planner_goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lissa_planner_goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lissa_planner_goal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lissa_planner_goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lissa_planner_goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LissaPlannerGoal(metaclass=Metaclass_LissaPlannerGoal):
    """Message class 'LissaPlannerGoal'."""

    __slots__ = [
        '_x_amp',
        '_y_amp',
        '_z_amp',
        '_yaw_amp',
        '_x_num_periods',
        '_y_num_periods',
        '_z_num_periods',
        '_yaw_num_periods',
        '_period',
        '_num_cycles',
        '_ramp_time',
    ]

    _fields_and_field_types = {
        'x_amp': 'double',
        'y_amp': 'double',
        'z_amp': 'double',
        'yaw_amp': 'double',
        'x_num_periods': 'double',
        'y_num_periods': 'double',
        'z_num_periods': 'double',
        'yaw_num_periods': 'double',
        'period': 'double',
        'num_cycles': 'double',
        'ramp_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_amp = kwargs.get('x_amp', float())
        self.y_amp = kwargs.get('y_amp', float())
        self.z_amp = kwargs.get('z_amp', float())
        self.yaw_amp = kwargs.get('yaw_amp', float())
        self.x_num_periods = kwargs.get('x_num_periods', float())
        self.y_num_periods = kwargs.get('y_num_periods', float())
        self.z_num_periods = kwargs.get('z_num_periods', float())
        self.yaw_num_periods = kwargs.get('yaw_num_periods', float())
        self.period = kwargs.get('period', float())
        self.num_cycles = kwargs.get('num_cycles', float())
        self.ramp_time = kwargs.get('ramp_time', float())

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
        if self.x_amp != other.x_amp:
            return False
        if self.y_amp != other.y_amp:
            return False
        if self.z_amp != other.z_amp:
            return False
        if self.yaw_amp != other.yaw_amp:
            return False
        if self.x_num_periods != other.x_num_periods:
            return False
        if self.y_num_periods != other.y_num_periods:
            return False
        if self.z_num_periods != other.z_num_periods:
            return False
        if self.yaw_num_periods != other.yaw_num_periods:
            return False
        if self.period != other.period:
            return False
        if self.num_cycles != other.num_cycles:
            return False
        if self.ramp_time != other.ramp_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_amp(self):
        """Message field 'x_amp'."""
        return self._x_amp

    @x_amp.setter
    def x_amp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_amp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_amp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_amp = value

    @builtins.property
    def y_amp(self):
        """Message field 'y_amp'."""
        return self._y_amp

    @y_amp.setter
    def y_amp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_amp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_amp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_amp = value

    @builtins.property
    def z_amp(self):
        """Message field 'z_amp'."""
        return self._z_amp

    @z_amp.setter
    def z_amp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_amp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_amp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_amp = value

    @builtins.property
    def yaw_amp(self):
        """Message field 'yaw_amp'."""
        return self._yaw_amp

    @yaw_amp.setter
    def yaw_amp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_amp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_amp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_amp = value

    @builtins.property
    def x_num_periods(self):
        """Message field 'x_num_periods'."""
        return self._x_num_periods

    @x_num_periods.setter
    def x_num_periods(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_num_periods' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_num_periods' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_num_periods = value

    @builtins.property
    def y_num_periods(self):
        """Message field 'y_num_periods'."""
        return self._y_num_periods

    @y_num_periods.setter
    def y_num_periods(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_num_periods' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_num_periods' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_num_periods = value

    @builtins.property
    def z_num_periods(self):
        """Message field 'z_num_periods'."""
        return self._z_num_periods

    @z_num_periods.setter
    def z_num_periods(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_num_periods' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_num_periods' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_num_periods = value

    @builtins.property
    def yaw_num_periods(self):
        """Message field 'yaw_num_periods'."""
        return self._yaw_num_periods

    @yaw_num_periods.setter
    def yaw_num_periods(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_num_periods' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_num_periods' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_num_periods = value

    @builtins.property
    def period(self):
        """Message field 'period'."""
        return self._period

    @period.setter
    def period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period = value

    @builtins.property
    def num_cycles(self):
        """Message field 'num_cycles'."""
        return self._num_cycles

    @num_cycles.setter
    def num_cycles(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'num_cycles' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'num_cycles' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._num_cycles = value

    @builtins.property
    def ramp_time(self):
        """Message field 'ramp_time'."""
        return self._ramp_time

    @ramp_time.setter
    def ramp_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ramp_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ramp_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ramp_time = value
