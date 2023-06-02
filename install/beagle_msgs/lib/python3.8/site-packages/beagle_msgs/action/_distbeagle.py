# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beagle_msgs:action/Distbeagle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Distbeagle_Goal(type):
    """Metaclass of message 'Distbeagle_Goal'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_Goal(metaclass=Metaclass_Distbeagle_Goal):
    """Message class 'Distbeagle_Goal'."""

    __slots__ = [
        '_lidar_dist',
        '_plus_arrow',
        '_minus_arrow',
    ]

    _fields_and_field_types = {
        'lidar_dist': 'float',
        'plus_arrow': 'int32',
        'minus_arrow': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lidar_dist = kwargs.get('lidar_dist', float())
        self.plus_arrow = kwargs.get('plus_arrow', int())
        self.minus_arrow = kwargs.get('minus_arrow', int())

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
        if self.lidar_dist != other.lidar_dist:
            return False
        if self.plus_arrow != other.plus_arrow:
            return False
        if self.minus_arrow != other.minus_arrow:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lidar_dist(self):
        """Message field 'lidar_dist'."""
        return self._lidar_dist

    @lidar_dist.setter
    def lidar_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lidar_dist' field must be of type 'float'"
        self._lidar_dist = value

    @property
    def plus_arrow(self):
        """Message field 'plus_arrow'."""
        return self._plus_arrow

    @plus_arrow.setter
    def plus_arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plus_arrow' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plus_arrow' field must be an integer in [-2147483648, 2147483647]"
        self._plus_arrow = value

    @property
    def minus_arrow(self):
        """Message field 'minus_arrow'."""
        return self._minus_arrow

    @minus_arrow.setter
    def minus_arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minus_arrow' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'minus_arrow' field must be an integer in [-2147483648, 2147483647]"
        self._minus_arrow = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_Result(type):
    """Metaclass of message 'Distbeagle_Result'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_Result(metaclass=Metaclass_Distbeagle_Result):
    """Message class 'Distbeagle_Result'."""

    __slots__ = [
        '_count_node_bot_1',
        '_count_node_bot_2',
    ]

    _fields_and_field_types = {
        'count_node_bot_1': 'int32',
        'count_node_bot_2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.count_node_bot_1 = kwargs.get('count_node_bot_1', int())
        self.count_node_bot_2 = kwargs.get('count_node_bot_2', int())

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
        if self.count_node_bot_1 != other.count_node_bot_1:
            return False
        if self.count_node_bot_2 != other.count_node_bot_2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def count_node_bot_1(self):
        """Message field 'count_node_bot_1'."""
        return self._count_node_bot_1

    @count_node_bot_1.setter
    def count_node_bot_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count_node_bot_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count_node_bot_1' field must be an integer in [-2147483648, 2147483647]"
        self._count_node_bot_1 = value

    @property
    def count_node_bot_2(self):
        """Message field 'count_node_bot_2'."""
        return self._count_node_bot_2

    @count_node_bot_2.setter
    def count_node_bot_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count_node_bot_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count_node_bot_2' field must be an integer in [-2147483648, 2147483647]"
        self._count_node_bot_2 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_Feedback(type):
    """Metaclass of message 'Distbeagle_Feedback'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_Feedback(metaclass=Metaclass_Distbeagle_Feedback):
    """Message class 'Distbeagle_Feedback'."""

    __slots__ = [
        '_between_beagle12',
    ]

    _fields_and_field_types = {
        'between_beagle12': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.between_beagle12 = kwargs.get('between_beagle12', int())

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
        if self.between_beagle12 != other.between_beagle12:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def between_beagle12(self):
        """Message field 'between_beagle12'."""
        return self._between_beagle12

    @between_beagle12.setter
    def between_beagle12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'between_beagle12' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'between_beagle12' field must be an integer in [-2147483648, 2147483647]"
        self._between_beagle12 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_SendGoal_Request(type):
    """Metaclass of message 'Distbeagle_SendGoal_Request'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__send_goal__request

            from beagle_msgs.action import Distbeagle
            if Distbeagle.Goal.__class__._TYPE_SUPPORT is None:
                Distbeagle.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_SendGoal_Request(metaclass=Metaclass_Distbeagle_SendGoal_Request):
    """Message class 'Distbeagle_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'beagle_msgs/Distbeagle_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['beagle_msgs', 'action'], 'Distbeagle_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from beagle_msgs.action._distbeagle import Distbeagle_Goal
        self.goal = kwargs.get('goal', Distbeagle_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from beagle_msgs.action._distbeagle import Distbeagle_Goal
            assert \
                isinstance(value, Distbeagle_Goal), \
                "The 'goal' field must be a sub message of type 'Distbeagle_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_SendGoal_Response(type):
    """Metaclass of message 'Distbeagle_SendGoal_Response'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_SendGoal_Response(metaclass=Metaclass_Distbeagle_SendGoal_Response):
    """Message class 'Distbeagle_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Distbeagle_SendGoal(type):
    """Metaclass of service 'Distbeagle_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__distbeagle__send_goal

            from beagle_msgs.action import _distbeagle
            if _distbeagle.Metaclass_Distbeagle_SendGoal_Request._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_SendGoal_Request.__import_type_support__()
            if _distbeagle.Metaclass_Distbeagle_SendGoal_Response._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_SendGoal_Response.__import_type_support__()


class Distbeagle_SendGoal(metaclass=Metaclass_Distbeagle_SendGoal):
    from beagle_msgs.action._distbeagle import Distbeagle_SendGoal_Request as Request
    from beagle_msgs.action._distbeagle import Distbeagle_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_GetResult_Request(type):
    """Metaclass of message 'Distbeagle_GetResult_Request'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_GetResult_Request(metaclass=Metaclass_Distbeagle_GetResult_Request):
    """Message class 'Distbeagle_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_GetResult_Response(type):
    """Metaclass of message 'Distbeagle_GetResult_Response'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__get_result__response

            from beagle_msgs.action import Distbeagle
            if Distbeagle.Result.__class__._TYPE_SUPPORT is None:
                Distbeagle.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_GetResult_Response(metaclass=Metaclass_Distbeagle_GetResult_Response):
    """Message class 'Distbeagle_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'beagle_msgs/Distbeagle_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['beagle_msgs', 'action'], 'Distbeagle_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from beagle_msgs.action._distbeagle import Distbeagle_Result
        self.result = kwargs.get('result', Distbeagle_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from beagle_msgs.action._distbeagle import Distbeagle_Result
            assert \
                isinstance(value, Distbeagle_Result), \
                "The 'result' field must be a sub message of type 'Distbeagle_Result'"
        self._result = value


class Metaclass_Distbeagle_GetResult(type):
    """Metaclass of service 'Distbeagle_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__distbeagle__get_result

            from beagle_msgs.action import _distbeagle
            if _distbeagle.Metaclass_Distbeagle_GetResult_Request._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_GetResult_Request.__import_type_support__()
            if _distbeagle.Metaclass_Distbeagle_GetResult_Response._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_GetResult_Response.__import_type_support__()


class Distbeagle_GetResult(metaclass=Metaclass_Distbeagle_GetResult):
    from beagle_msgs.action._distbeagle import Distbeagle_GetResult_Request as Request
    from beagle_msgs.action._distbeagle import Distbeagle_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Distbeagle_FeedbackMessage(type):
    """Metaclass of message 'Distbeagle_FeedbackMessage'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__distbeagle__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__distbeagle__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__distbeagle__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__distbeagle__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__distbeagle__feedback_message

            from beagle_msgs.action import Distbeagle
            if Distbeagle.Feedback.__class__._TYPE_SUPPORT is None:
                Distbeagle.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Distbeagle_FeedbackMessage(metaclass=Metaclass_Distbeagle_FeedbackMessage):
    """Message class 'Distbeagle_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'beagle_msgs/Distbeagle_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['beagle_msgs', 'action'], 'Distbeagle_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from beagle_msgs.action._distbeagle import Distbeagle_Feedback
        self.feedback = kwargs.get('feedback', Distbeagle_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from beagle_msgs.action._distbeagle import Distbeagle_Feedback
            assert \
                isinstance(value, Distbeagle_Feedback), \
                "The 'feedback' field must be a sub message of type 'Distbeagle_Feedback'"
        self._feedback = value


class Metaclass_Distbeagle(type):
    """Metaclass of action 'Distbeagle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.action.Distbeagle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__distbeagle

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from beagle_msgs.action import _distbeagle
            if _distbeagle.Metaclass_Distbeagle_SendGoal._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_SendGoal.__import_type_support__()
            if _distbeagle.Metaclass_Distbeagle_GetResult._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_GetResult.__import_type_support__()
            if _distbeagle.Metaclass_Distbeagle_FeedbackMessage._TYPE_SUPPORT is None:
                _distbeagle.Metaclass_Distbeagle_FeedbackMessage.__import_type_support__()


class Distbeagle(metaclass=Metaclass_Distbeagle):

    # The goal message defined in the action definition.
    from beagle_msgs.action._distbeagle import Distbeagle_Goal as Goal
    # The result message defined in the action definition.
    from beagle_msgs.action._distbeagle import Distbeagle_Result as Result
    # The feedback message defined in the action definition.
    from beagle_msgs.action._distbeagle import Distbeagle_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from beagle_msgs.action._distbeagle import Distbeagle_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from beagle_msgs.action._distbeagle import Distbeagle_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from beagle_msgs.action._distbeagle import Distbeagle_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
