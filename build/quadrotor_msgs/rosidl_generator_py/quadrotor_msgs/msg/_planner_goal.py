# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quadrotor_msgs:msg/PlannerGoal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlannerGoal(type):
    """Metaclass of message 'PlannerGoal'."""

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
                'quadrotor_msgs.msg.PlannerGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planner_goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planner_goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planner_goal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planner_goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planner_goal

            from nav_msgs.msg import Odometry
            if Odometry.__class__._TYPE_SUPPORT is None:
                Odometry.__class__.__import_type_support__()

            from quadrotor_msgs.msg import CirclePlannerGoal
            if CirclePlannerGoal.__class__._TYPE_SUPPORT is None:
                CirclePlannerGoal.__class__.__import_type_support__()

            from quadrotor_msgs.msg import LinePlannerGoal
            if LinePlannerGoal.__class__._TYPE_SUPPORT is None:
                LinePlannerGoal.__class__.__import_type_support__()

            from quadrotor_msgs.msg import LissaPlannerGoal
            if LissaPlannerGoal.__class__._TYPE_SUPPORT is None:
                LissaPlannerGoal.__class__.__import_type_support__()

            from quadrotor_msgs.msg import QpPlannerGoal
            if QpPlannerGoal.__class__._TYPE_SUPPORT is None:
                QpPlannerGoal.__class__.__import_type_support__()

            from quadrotor_msgs.msg import VelocityPlannerGoal
            if VelocityPlannerGoal.__class__._TYPE_SUPPORT is None:
                VelocityPlannerGoal.__class__.__import_type_support__()

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


class PlannerGoal(metaclass=Metaclass_PlannerGoal):
    """Message class 'PlannerGoal'."""

    __slots__ = [
        '_header',
        '_des_tracker',
        '_init_cond',
        '_line_planner_goal',
        '_circle_planner_goal',
        '_lissajous_planner_goal',
        '_velocity_planner_goal',
        '_qp_planner_goal',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'des_tracker': 'string',
        'init_cond': 'nav_msgs/Odometry',
        'line_planner_goal': 'quadrotor_msgs/LinePlannerGoal',
        'circle_planner_goal': 'quadrotor_msgs/CirclePlannerGoal',
        'lissajous_planner_goal': 'quadrotor_msgs/LissaPlannerGoal',
        'velocity_planner_goal': 'quadrotor_msgs/VelocityPlannerGoal',
        'qp_planner_goal': 'quadrotor_msgs/QpPlannerGoal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Odometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['quadrotor_msgs', 'msg'], 'LinePlannerGoal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['quadrotor_msgs', 'msg'], 'CirclePlannerGoal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['quadrotor_msgs', 'msg'], 'LissaPlannerGoal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['quadrotor_msgs', 'msg'], 'VelocityPlannerGoal'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['quadrotor_msgs', 'msg'], 'QpPlannerGoal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.des_tracker = kwargs.get('des_tracker', str())
        from nav_msgs.msg import Odometry
        self.init_cond = kwargs.get('init_cond', Odometry())
        from quadrotor_msgs.msg import LinePlannerGoal
        self.line_planner_goal = kwargs.get('line_planner_goal', LinePlannerGoal())
        from quadrotor_msgs.msg import CirclePlannerGoal
        self.circle_planner_goal = kwargs.get('circle_planner_goal', CirclePlannerGoal())
        from quadrotor_msgs.msg import LissaPlannerGoal
        self.lissajous_planner_goal = kwargs.get('lissajous_planner_goal', LissaPlannerGoal())
        from quadrotor_msgs.msg import VelocityPlannerGoal
        self.velocity_planner_goal = kwargs.get('velocity_planner_goal', VelocityPlannerGoal())
        from quadrotor_msgs.msg import QpPlannerGoal
        self.qp_planner_goal = kwargs.get('qp_planner_goal', QpPlannerGoal())

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
        if self.des_tracker != other.des_tracker:
            return False
        if self.init_cond != other.init_cond:
            return False
        if self.line_planner_goal != other.line_planner_goal:
            return False
        if self.circle_planner_goal != other.circle_planner_goal:
            return False
        if self.lissajous_planner_goal != other.lissajous_planner_goal:
            return False
        if self.velocity_planner_goal != other.velocity_planner_goal:
            return False
        if self.qp_planner_goal != other.qp_planner_goal:
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
    def des_tracker(self):
        """Message field 'des_tracker'."""
        return self._des_tracker

    @des_tracker.setter
    def des_tracker(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'des_tracker' field must be of type 'str'"
        self._des_tracker = value

    @builtins.property
    def init_cond(self):
        """Message field 'init_cond'."""
        return self._init_cond

    @init_cond.setter
    def init_cond(self, value):
        if __debug__:
            from nav_msgs.msg import Odometry
            assert \
                isinstance(value, Odometry), \
                "The 'init_cond' field must be a sub message of type 'Odometry'"
        self._init_cond = value

    @builtins.property
    def line_planner_goal(self):
        """Message field 'line_planner_goal'."""
        return self._line_planner_goal

    @line_planner_goal.setter
    def line_planner_goal(self, value):
        if __debug__:
            from quadrotor_msgs.msg import LinePlannerGoal
            assert \
                isinstance(value, LinePlannerGoal), \
                "The 'line_planner_goal' field must be a sub message of type 'LinePlannerGoal'"
        self._line_planner_goal = value

    @builtins.property
    def circle_planner_goal(self):
        """Message field 'circle_planner_goal'."""
        return self._circle_planner_goal

    @circle_planner_goal.setter
    def circle_planner_goal(self, value):
        if __debug__:
            from quadrotor_msgs.msg import CirclePlannerGoal
            assert \
                isinstance(value, CirclePlannerGoal), \
                "The 'circle_planner_goal' field must be a sub message of type 'CirclePlannerGoal'"
        self._circle_planner_goal = value

    @builtins.property
    def lissajous_planner_goal(self):
        """Message field 'lissajous_planner_goal'."""
        return self._lissajous_planner_goal

    @lissajous_planner_goal.setter
    def lissajous_planner_goal(self, value):
        if __debug__:
            from quadrotor_msgs.msg import LissaPlannerGoal
            assert \
                isinstance(value, LissaPlannerGoal), \
                "The 'lissajous_planner_goal' field must be a sub message of type 'LissaPlannerGoal'"
        self._lissajous_planner_goal = value

    @builtins.property
    def velocity_planner_goal(self):
        """Message field 'velocity_planner_goal'."""
        return self._velocity_planner_goal

    @velocity_planner_goal.setter
    def velocity_planner_goal(self, value):
        if __debug__:
            from quadrotor_msgs.msg import VelocityPlannerGoal
            assert \
                isinstance(value, VelocityPlannerGoal), \
                "The 'velocity_planner_goal' field must be a sub message of type 'VelocityPlannerGoal'"
        self._velocity_planner_goal = value

    @builtins.property
    def qp_planner_goal(self):
        """Message field 'qp_planner_goal'."""
        return self._qp_planner_goal

    @qp_planner_goal.setter
    def qp_planner_goal(self, value):
        if __debug__:
            from quadrotor_msgs.msg import QpPlannerGoal
            assert \
                isinstance(value, QpPlannerGoal), \
                "The 'qp_planner_goal' field must be a sub message of type 'QpPlannerGoal'"
        self._qp_planner_goal = value
