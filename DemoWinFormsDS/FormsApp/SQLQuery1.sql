use ChatApplication;
Go

CREATE TABLE userr
(
user_id int PRIMARY KEY not null,
F_name NVARCHAR(50) not null,
L_name NVARCHAR(50) not null,
phone_number int not null,
password_ NVARCHAR(50) not null,
description_ NVARCHAR(50) not null
);

CREATE TABLE chat_room 
(
chatroom_id int  PRIMARY KEY not null,
chatroom_user_id int  not null,
type varchar(20) not null,
last_seen date not null
);
alter table chat_room 
add constraint chatuser_id foreign key (chatroom_user_id )  references userr (user_id);

CREATE TABLE has
(
user_id_2 int references userr (user_id) not null,
chatroom_id_2 int references chat_room (chatroom_id) not null
constraint has_pk primary key (user_id_2 , chatroom_id_2 )
);

CREATE TABLE story 
(
story_user_id int not null,
text_ varchar not null,
published_time date not null,
story_id int PRIMARY KEY not null
);
alter table story 
add constraint storyuser_id foreign key (story_user_id )  references userr (user_id);

CREATE TABLE message 
(
message_id int PRIMARY KEY not null,
text_ varchar not null,
type varchar not null,
time_sent date not null,
date_sent date not null,
useer_id int not null, 
chat_id int not null
);
alter table message 
add constraint user_message_id foreign key (useer_id)  references userr (user_id);

alter table message 
add constraint chat_message_id foreign key (chat_id)  references chat_room (chatroom_id);


CREATE TABLE contact 
(
contact_id int  not null,
conact_phone int PRIMARY KEY not null
);

alter table contact 
add constraint user_contact_id foreign key (contact_id)  references userr (user_id);