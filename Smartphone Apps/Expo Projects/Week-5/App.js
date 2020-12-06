import React from 'react';
import { StyleSheet, View, Alert, Text } from 'react-native';
import StyledButton from "./components/custom-component.js";
import words from "./arrays-of-strings.js";

function f1() {
  Alert.alert(words[0])
}
function f2() {
  Alert.alert(words[1])
}
function f3() {
  Alert.alert(words[2])
}
function f4() {
  Alert.alert(words[3])
}
function f5() {
  Alert.alert(words[4])
}

export default function App() {
  return (
    <View style={styles.container}>
      <Text>The Characters of Inside Out</Text>
      <StyledButton
      backgroundColor="red"
      title="Button 1"
      onPress={f1}
      ></StyledButton>
      <StyledButton
      backgroundColor="skyblue"
      title="Button 2"
      onPress={f2}
      ></StyledButton>
      <StyledButton
      backgroundColor="lightgreen"
      title="Button 3"
      onPress={f3}
      ></StyledButton>
      <StyledButton
      backgroundColor="yellow"
      title="Button 4"
      onPress={f4}
      ></StyledButton>
      <StyledButton
      backgroundColor="violet"
      title="Button 5"
      onPress={f5}
      ></StyledButton>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
