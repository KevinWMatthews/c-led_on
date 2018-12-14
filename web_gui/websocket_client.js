"use strict";

let server_url = "ws://localhost:8989";
let connection = new WebSocket(server_url);

connection.onopen = function(evt) {
  console.log('open');
  connection.send(JSON.stringify(msg));
};
connection.onclose = function(evt) {
  console.log('close');
}
let msg = {
  text: 'this is a test',
  type: 'message',
  id: 123,
  date: Date.now(),
};
connection.onmessage = function(evt) {
  let msg = JSON.parse(evt.data);
  console.log(msg);
}
