# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/QpPlannerGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QpPlannerGoal(type):
    """Metaclass of message 'QpPlannerGoal'."""

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
                'quadrotor_msgs.msg.QpPlannerGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__qp_planner_goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__qp_planner_goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__qp_planner_goal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__qp_planner_goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__qp_planner_goal

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QpPlannerGoal(metaclass=Metaclass_QpPlannerGoal):
    """Message class 'QpPlannerGoal'."""

    __slots__ = [
        '_bern_enable',
        '_perching',
        '_max_a',
        '_max_v',
        '_future_point',
        '_duration',
    ]

    _fields_and_field_types = {
        'bern_enable': 'boolean',
        'perching': 'boolean',
        'max_a': 'double',
        'max_v': 'double',
        'future_point': 'nav_msgs/Path',
        'duration': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bern_enable = kwargs.get('bern_enable', bool())
        self.perching = kwargs.get('perching', bool())
        self.max_a = kwargs.get('max_a', float())
        self.max_v = kwargs.get('max_v', float())
        from nav_msgs.msg import Path
        self.future_point = kwargs.get('future_point', Path())
        from builtin_interfaces.msg import Duration
        self.duration = kwargs.get('duration', Duration())

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
        if self.bern_enable != other.bern_enable:
            return False
        if self.perching != other.perching:
            return False
        if self.max_a != other.max_a:
            return False
        if self.max_v != other.max_v:
            return False
        if self.future_point != other.future_point:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bern_enable(self):
        """Message field 'bern_enable'."""
        return self._bern_enable

    @bern_enable.setter
    def bern_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bern_enable' field must be of type 'bool'"
        self._bern_enable = value

    @builtins.property
    def perching(self):
        """Message field 'perching'."""
        return self._perching

    @perching.setter
    def perching(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'perching' field must be of type 'bool'"
        self._perching = value

    @builtins.property
    def max_a(self):
        """Message field 'max_a'."""
        return self._max_a

    @max_a.setter
    def max_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_a = value

    @builtins.property
    def max_v(self):
        """Message field 'max_v'."""
        return self._max_v

    @max_v.setter
    def max_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_v = value

    @builtins.property
    def future_point(self):
        """Message field 'future_point'."""
        return self._future_point

    @future_point.setter
    def future_point(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'future_point' field must be a sub message of type 'Path'"
        self._future_point = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'duration' field must be a sub message of type 'Duration'"
        self._duration = value
